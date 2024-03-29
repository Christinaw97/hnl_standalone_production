void cluster_efficiency()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Apr 30 12:36:58 2022) by ROOT version 6.18/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-220,-0.07926829,1155,0.5304878);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.16);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.05);
   c->SetBottomMargin(0.13);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 50, 100, 150, 200, 300, 500, 1000}; 
   
   TEfficiency * hb1_clone1 = new TEfficiency("hb1_clone","",7,xAxis1);
   
   hb1_clone1->SetConfidenceLevel(0.6826895);
   hb1_clone1->SetBetaAlpha(1);
   hb1_clone1->SetBetaBeta(1);
   hb1_clone1->SetWeight(1);
   hb1_clone1->SetStatisticOption(0);
   hb1_clone1->SetPosteriorMode(0);
   hb1_clone1->SetShortestInterval(0);
   hb1_clone1->SetTotalEvents(0,0);
   hb1_clone1->SetPassedEvents(0,0);
   hb1_clone1->SetTotalEvents(1,506);
   hb1_clone1->SetPassedEvents(1,33);
   hb1_clone1->SetTotalEvents(2,3119);
   hb1_clone1->SetPassedEvents(2,495);
   hb1_clone1->SetTotalEvents(3,5572);
   hb1_clone1->SetPassedEvents(3,1495);
   hb1_clone1->SetTotalEvents(4,7510);
   hb1_clone1->SetPassedEvents(4,2473);
   hb1_clone1->SetTotalEvents(5,14487);
   hb1_clone1->SetPassedEvents(5,4707);
   hb1_clone1->SetTotalEvents(6,10672);
   hb1_clone1->SetPassedEvents(6,3847);
   hb1_clone1->SetTotalEvents(7,1174);
   hb1_clone1->SetPassedEvents(7,420);
   hb1_clone1->SetTotalEvents(8,90);
   hb1_clone1->SetPassedEvents(8,21);
   hb1_clone1->SetFillColor(19);
   hb1_clone1->SetLineWidth(3);
   hb1_clone1->Draw("ap");
   Double_t xAxis2[8] = {0, 50, 100, 150, 200, 300, 500, 1000}; 
   
   TEfficiency * hb1_clone2 = new TEfficiency("hb1_clone","",7,xAxis2);
   
   hb1_clone2->SetConfidenceLevel(0.6826895);
   hb1_clone2->SetBetaAlpha(1);
   hb1_clone2->SetBetaBeta(1);
   hb1_clone2->SetWeight(1);
   hb1_clone2->SetStatisticOption(0);
   hb1_clone2->SetPosteriorMode(0);
   hb1_clone2->SetShortestInterval(0);
   hb1_clone2->SetTotalEvents(0,0);
   hb1_clone2->SetPassedEvents(0,0);
   hb1_clone2->SetTotalEvents(1,612);
   hb1_clone2->SetPassedEvents(1,19);
   hb1_clone2->SetTotalEvents(2,2202);
   hb1_clone2->SetPassedEvents(2,222);
   hb1_clone2->SetTotalEvents(3,3107);
   hb1_clone2->SetPassedEvents(3,505);
   hb1_clone2->SetTotalEvents(4,4297);
   hb1_clone2->SetPassedEvents(4,1082);
   hb1_clone2->SetTotalEvents(5,6810);
   hb1_clone2->SetPassedEvents(5,1927);
   hb1_clone2->SetTotalEvents(6,4014);
   hb1_clone2->SetPassedEvents(6,1267);
   hb1_clone2->SetTotalEvents(7,557);
   hb1_clone2->SetPassedEvents(7,211);
   hb1_clone2->SetTotalEvents(8,0);
   hb1_clone2->SetPassedEvents(8,0);
   hb1_clone2->SetFillColor(19);
   hb1_clone2->SetLineColor(2);
   hb1_clone2->SetLineWidth(3);
   hb1_clone2->Draw("samep");
   
   TLegend *leg = new TLegend(0.6,0.2,0.9,0.4,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hb1_clone","electron-type HNL","lpf");
   entry->SetFillColor(19);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hb1_clone","#tau-type HNL","lpf");
   entry->SetFillColor(19);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
