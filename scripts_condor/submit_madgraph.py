'''
generate madgraph lhe files for HNL signal, includes only launching the process and generate events, process is already generated, need process as an input
'''
import os
coupling = {}


coupling[3] = [5e-6]
#coupling[3] = [ 1.638e-06]
text_dir = '/storage/af/user/christiw/login-1/christiw/LLP/CMSSW_9_4_20/src/LLP-Reinterpretation/hnl_standalone_production/mg5_grid_2j_etacut/'
mg5 = '/storage/af/user/christiw/login-1/christiw/LLP/CMSSW_9_4_20/src/LLP-Reinterpretation/MG5_aMC_v2_9_3/bin/mg5_aMC'
nEventsPerJob = 50000
nJobs = 500
for decay in ['e', 'mu', 'tau']:
    if  not decay == 'tau': continue
    for m, v in coupling.items():
            for c in v:
                print(m,c)
                os.system("rm -rf log/HNL-madgraph-{}-{}-{}*".format(decay, m, c))
                os.system("rm -rf submit/madgraph_production_m"+str(m)+'v'+str(c)+"*")

		output = text_dir + "HNL_mg5_GRID_" + decay+"/HNL_mg5_GRID_"+decay+"-"+str(m)+"-"+str(c)
                file_name = 'submit/madgraph_production_m'+str(m)+'v'+str(c)+'.jdl'
                f = open(file_name, "w")
        	f.write("Universe = vanilla \n")
        	f.write("Executable = runMadgraph.sh \n")
        	f.write("Arguments = {} {} {} {} {} $(ProcId) {} {}/ {}/ \n".format(decay, m, c, text_dir, mg5, nEventsPerJob,os.getenv('CMSSW_BASE'), os.getenv('HOME')))
        	#f.write("Arguments = {} {} {} {} {} {} {} {}/ {}/ \n".format(decay, m, c, text_dir, mg5, runNum, nEventsPerJob,os.getenv('CMSSW_BASE'), os.getenv('HOME')))


        	f.write("Log = log/HNL-madgraph-{}_{}_{}_$(ProcId)_PC.log \n".format(decay, m, c))
        	f.write("Output = log/HNL-madgraph-{}_{}_{}_$(ProcId).out \n".format(decay, m, c))
        	f.write("Error = log/HNL-madgraph-{}_{}_{}_$(ProcId).err \n".format(decay, m, c))

        	f.write("RequestMemory = 8000 \n")
        	f.write("RequestCpus = 2 \n")
        	f.write("RequestDisk = 8 \n")
            	f.write("+JobQueue=\"Short\" \n")

        	f.write("+RunAsOwner = True \n")
        	f.write("+InteractiveUser = true \n")
        	#f.write("+SingularityImage = \"/cvmfs/singularity.opensciencegrid.org/bbockelm/cms:rhel7\"")
        	f.write("+SingularityImage = \"/cvmfs/singularity.opensciencegrid.org/cmssw/cms:rhel7\" \n")
        	f.write('+SingularityBindCVMFS = True \n')
        	f.write("run_as_owner = True \n")
        	f.write("x509userproxy = {}/x509_proxy \n".format(os.getenv('HOME')))
        	f.write("should_transfer_files = YES \n")
        	f.write("when_to_transfer_output = ON_EXIT \n")
        	f.write("Queue {} \n".format(nJobs))
        	print("condor_submit {} \n".format(file_name))
                f.close()

        	os.system("condor_submit {} --batch-name HNL-{}-{}-{}".format(file_name, decay, m, c))
