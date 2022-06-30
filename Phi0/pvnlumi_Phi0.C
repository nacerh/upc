// LHC15o
//const Int_t nRuns = 144;
//Int_t runList[nRuns] ={246994,246991,246989,246984,246982,246980,246949,246948,246945,246942,246937,246930,246871,246867,246865,246864,246859,246855,246851,246847,246846,246845,246844,246810,246809,246807,246806,246805,246804,246765,246763,246760,246758,246757,246755,246751,246750,246676,246675,246671,246648,246639,246583,246575,246568,246567,246553,246543,246495,246493,246488,246487,246434,246431,246424,246392,246391,246390,246276,246275,246272,246271,246225,246222,246220,246217,246182,246181,246180,246178,246153,246152,246151,246148,246115,246113,246089,246087,246053,246049,246042,246037,246012,246003,246001,245996,245963,245954,245952,245949,245833,245831,245829,245793,245785,245775,245766,245759,245752,245738,245731,245729,245705,245700,245692,245683,245554,245543,245542,245540,245535,245507,245505,245504,245501,245497,245496,245454,245453,245452,245450,245441,245439,245411,245410,245409,245407,245401,245397,245396,245353,245349,245347,245346,245345,245343,245232,245146,245145,245064,244983,244982,244980,244975};
//const Int_t nRuns = 76;
//Int_t runList[nRuns] ={245683,245692,245702,245705,245829,245831,245833,245923,245949,245952,245954,245963,246001,246003,246012,246036,246037,246042,246048,246049,246052,246053,246087,246089,246113,246115,246148,246151,246152,246153,246178,246180,246181,246182,246185,246217,246222,246225,246271,246272,246275,246276,246424,246431,246434,246487,246488,246493,246495,246750,246751,246757,246758,246759,246760,246763,246765,246766,246804,246805,246807,246808,246809,246810,246844,246845,246846,246847,246851,246945,246948,246982,246984,246989,246991,246994};
const Int_t nRuns = 83;
Int_t runList[nRuns] ={244975, 244980, 244982, 244983, 245064, 245066, 245068, 245683, 245692, 245702, 245705, 245829, 245831, 245833, 245923, 245949, 245952, 245954, 245963, 246001, 246003, 246012, 246036, 246037, 246042, 246048, 246049, 246052, 246053, 246087, 246089, 246113, 246115, 246148, 246151, 246152, 246153, 246178, 246180, 246181, 246182, 246185, 246217, 246222, 246225, 246271, 246272, 246275, 246276, 246424, 246431, 246434, 246487, 246488, 246493, 246495, 246750, 246751, 246757, 246758, 246759, 246760, 246763, 246765, 246766, 246804, 246805, 246807, 246808, 246809, 246810, 246844, 246845, 246846, 246847, 246851, 246945, 246948, 246982, 246984, 246989, 246991, 246994};
//const Int_t nRuns = 81;
//Int_t runList[nRuns] ={244975,244980,244982,244983,245064,245066,245068,245683,245692,245702,245705,245829,245831,245833,245923,245949,245952,245954,245963,246001,246003,246012,246036,246037,246042,246048,246049,246052,246053,246087,246089,246113,246115,246148,246151,246152,246153,246178,246180,246181,246182,246185,246217,246222,246225,246271,246272,246275,246276,246424,246431,246434,246487,246488,246493,246495,246750,246757,246759,246760,246763,246765,246766,246804,246805,246807,246808,246809,246810,246844,246845,246846,246847,246851,246945,246948,246982,246984,246989,246991,246994};
// const Int_t nRuns = 125;
// Int_t runList[nRuns] ={
//     245145, 245146, 245151, 245152, 245231, 245232, 245259, 245345, 245346, 245347,
//     245349, 245353, 245396, 245397, 245401, 245407, 245409, 245410, 245411, 245441,
//     245446, 245450, 245453, 245454, 245496, 245497, 245501, 245504, 245505, 245507,
//     245540, 245542, 245543, 245544, 245545, 245554, 245683, 245692, 245700, 245702,
//     245705, 245775, 245793, 245829, 245831, 245833, 245923, 245949, 245952, 245954,
//     245963, 246001, 246003, 246012, 246036, 246037, 246042, 246048, 246049, 246052,
//     246053, 246087, 246089, 246113, 246115, 246148, 246151, 246152, 246153, 246178,
//     246180, 246181, 246182, 246185, 246217, 246222, 246225, 246271, 246272, 246275,
//     246276, 246424, 246428, 246431, 246434, 246487, 246488, 246493, 246495, 246675,
//     246676, 246750, 246751, 246757, 246758, 246759, 246760, 246763, 246765, 246766,
//     246804, 246805, 246807, 246808, 246809, 246810, 246844, 246845, 246846, 246847,
//     246851, 246864, 246865, 246867, 246870, 246871, 246928, 246945, 246948, 246980,
//     246982, 246984, 246989, 246991, 246994
// };

void pvnlumi_Phi0(){
  gStyle->SetOptStat(0);
  gStyle->SetLineScalePS(1.5);
  gStyle->SetTitleOffset(1.4, "xy");

  TFile *data = new TFile("350_20220224-1926/AnalysisResults_350.root");
  TH1F *rates = (TH1F*)((TList*)data->Get("Central/Histograms"))->FindObject("fHistTriggersPerRun");
  // TH1F* rates = ((TList*)gDirectory->Get("Central/Histograms"))->FindObject("fHistTriggersPerRun");
  data->Close();
  TH1D* hProcessed = new TH1D("hProcessed","hProcessed",nRuns,0,nRuns);
  TH1D* hPerc = new TH1D("hPerc","hPerc",nRuns,0,nRuns);
  TH1D* hLumiProc = new TH1D("hLumiProc",";runs;Luminosity scaled [#mub^{-1}]",nRuns,0,nRuns);
  int bincon = 0, binnum = -1, kruns = 0;
  bool isValidatedRun = false;
  for (Int_t ll=1; ll<rates->GetNbinsX()+1; ll++) {

    // skip runs that are not used in Rho analysis
    isValidatedRun = std::find(std::begin(runList), std::end(runList), rates->GetXaxis()->GetBinCenter(ll)) != std::end(runList);
    if(!isValidatedRun) continue;
    
    if( rates->GetBinContent(ll) == 0 ) continue;
    kruns++;
    binnum = ll + rates->GetBinLowEdge(1);
    bincon = rates->GetBinContent(ll);
    std::cout<<kruns<<" "<<binnum<<" "<<bincon<<std::endl;
    char* sym = Form("%i",binnum);
    hProcessed->Fill(sym,bincon*1.);
    hPerc->Fill(sym,0.);
    hLumiProc->Fill(sym,0.);
  }

  TChain *t = new TChain("trending");
  t->AddFile("trendingLHC15o.root");
  // t->AddFile("../../0data18/lumi/trending_merged_PbPb.root");
  TObjArray* classes = new TObjArray();
  Double_t  class_lumi[300] = {0};
  ULong64_t class_lMb[300] = {0};
  ULong64_t class_l0b[300] = {0};
  ULong64_t class_l0a[300] = {0};
  ULong64_t class_l1b[300] = {0};
  ULong64_t class_l1a[300] = {0};
  Double_t  class_lifetime[300];
  Double_t  class_ds[300];
  Double_t interactionRate = 0;
  Double_t run_duration = 0;
  Int_t run;
  Int_t fill;
  Int_t bcs;
  Double_t mu = 0;
  Double_t lumi_seen;
  t->SetBranchAddress("mu",&mu);
  t->SetBranchAddress("run",&run);
  t->SetBranchAddress("fill",&fill);
  t->SetBranchAddress("bcs",&bcs);
  t->SetBranchAddress("classes",&classes);
  t->SetBranchAddress("class_lumi",&class_lumi);
  t->SetBranchAddress("class_lMb",&class_lMb);
  t->SetBranchAddress("class_l0b",&class_l0b);
  t->SetBranchAddress("class_l0a",&class_l0a);
  t->SetBranchAddress("class_l1b",&class_l1b);
  t->SetBranchAddress("class_l1a",&class_l1a);
  t->SetBranchAddress("class_ds",&class_ds);
  t->SetBranchAddress("class_lifetime",&class_lifetime);
  t->SetBranchAddress("interactionRate",&interactionRate);
  t->SetBranchAddress("lumi_seen", &lumi_seen);
  t->SetBranchAddress("run_duration", &run_duration);
  t->BuildIndex("run");
  Double_t lumi = 0, luminew = 0;
  Int_t nChunks=0;

  TH1D* hTriggers = new TH1D("hTriggers","",nRuns,0,nRuns);
  TH1D* hLumi = new TH1D("hLumi","",nRuns,0,nRuns);
  // TH1D* hLumiProc = new TH1D("hLumiProc","",nRuns,0,nRuns);
  TH1D* hInteractionRate = new TH1D("hInteractionRate","",nRuns,0,nRuns);
  TH1D* hMu = new TH1D("hMu","#mu(INEL)",nRuns,0,nRuns);
  TH1F* hEvPerLumiAsMul = new TH1F("hEvPerLumiAsMul","EvPerLumiAsMul",10000,0.,0.002);
  TH1F* hEvPerLumiAsMuh = new TH1F("hEvPerLumiAsMuh","EvPerLumiAsMuh",10000,0.,0.002);
  TH1F* hEvPerLumiAsV0R = new TH1F("hEvPerLumiAsV0R","EvPerLumiAsV0R",400,0.,200.);
  TH1F* hEvPerLumiAsIRl = new TH1F("hEvPerLumiAsIRl","EvPerLumiAsIRl",800,0.,8000.);
  TH1F* hEvPerLumiAsIRh = new TH1F("hEvPerLumiAsIRh","EvPerLumiAsIRh",800,0.,8000.);
  TH1F* hFSAsIRl = new TH1F("hFSAsIRl","FSAsIRl",800,0.,8000.);
  TH1F* hFSAsIRh = new TH1F("hFSAsIRh","FSAsIRh",800,0.,8000.);
  TH1F* hFSAsRun = new TH1F("hFSAsRun","FSAsRun",nRuns,0,nRuns);
  TH1F* hEvPerLumiAsLumil = new TH1F("hEvPerLumiAsLumil","EvPerLumiAsLumil",1000,0.,10.);
  TH1F* hEvPerLumiAsLumih = new TH1F("hEvPerLumiAsLumih","EvPerLumiAsLumih",1000,0.,10.);
  TH1F* hEvPerLumiAsDTl = new TH1F("hEvPerLumiAsDTl","EvPerLumiAsDTl",100,0.,1.);
  TH1F* hEvPerLumiAsDTh = new TH1F("hEvPerLumiAsDTh","EvPerLumiAsDTh",100,0.,1.);
  TH1F* hDTAsIRl = new TH1F("hDTAsIRl","hDTAsIRl",800,0.,8000.);
  TH1F* hDTAsIRh = new TH1F("hDTAsIRh","hDTAsIRh",800,0.,8000.);
  TH1F* hEvPerLumiAsRun = new TH1F("hEvPerLumiAsRun","EvPerLumiAsRun",2100,244900.,247000.);
  TH1F* hEvPerLumiAsRD = new TH1F("hEvPerLumiAsRD","EvPerLumiAsRD",2100,0.,30000.);
  TH1F* hRatAsIR = new TH1F("hRatAsIR","RatAsIR",800,0.,8000.);

  for (Int_t i=0;i<nRuns;i++){

    Int_t r = runList[i];
    char* srun = Form("%i",r);
    t->GetEntryWithIndex(r);

    //    TString classNameRun="CTRUE-B-NOPF-CENT";
    TString classNameRun="CCUP9-B-NOPF-CENTNOTRD";
    //    TString classNameRun="CCUP8-B-NOPF-CENTNOTRD";
    //    TString classNameRun="C0VHM-B-NOPF-CENTNOTRD";
    //    TString classNameRun="C0VHM-B-NOPF-MUFAST";
    //    TString classNameRun="CMUP11-B-NOPF-MUFAST";
    //    TString className2Run="CMUP11-B-NOPF-MUFAST";
    //    TString classNameRun="CMSL7-B-NOPF-MUFAST";
    //    TString className2Run="CINT7-B-NOPF-MUFAST";
    TString className2Run="C0V0M-B-NOPF-CENTNOTRD";
    TString classNameV0="C0V0M-B-NOPF-CENTNOTRD";
    AliTriggerClass* cl = (AliTriggerClass*) classes->FindObject(classNameRun.Data());
    if (!cl) continue;
    AliTriggerClass* cl2 = (AliTriggerClass*) classes->FindObject(className2Run.Data());
    if (!cl2) continue;
    AliTriggerClass* clv0 = (AliTriggerClass*) classes->FindObject(classNameV0.Data());
    if (!clv0) continue;

    Int_t iclass = classes->IndexOf(cl);
    Int_t iclass2 = classes->IndexOf(cl2);
    Int_t iclassv0 = classes->IndexOf(clv0);

    hLumi->Fill(srun,class_lumi[iclass]*1000.);                    //ATT v 1/um
    hTriggers->Fill(srun,class_l1a[iclass]*1.);

    hInteractionRate->Fill(srun,interactionRate);
    hMu->Fill(srun,mu);
    lumi+=class_lumi[iclass];
//    Int_t ch = TMath::Nint(class_lumi[iclass]*5000./0.5597);
    Int_t ch = TMath::Nint(class_lumi[iclass]*5000./97.77);
    nChunks+=ch;
    //    printf("%i %5i\n",r,ch);
    Int_t bin = hEvPerLumiAsMul->GetXaxis()->FindBin(mu);
    Int_t bin2 = hEvPerLumiAsRun->GetXaxis()->FindBin(r);
    double val = class_l0b[iclass];
    double val2 = class_l0b[iclass2];
    //    double vallum = class_lumi[iclass];
    double vallum = lumi_seen;
    //    std::cout<<" pvn "<<r<<" fill "<<fill<<" mu "<<mu<<" seen "<<lumi_seen<<" time "<<run_duration<<" "<<lumi_seen*1000./run_duration<<" rate "<<interactionRate<<" "<<mu*10000./(lumi_seen*1000./run_duration)<<" "<<bcs<<" "<<mu*10000./(lumi_seen*1000./run_duration)*bcs<<" "<<interactionRate/(lumi_seen*1000./run_duration)<<" v0 rate "<<class_l0a[iclassv0]/run_duration<<std::endl;
    //    hEvPerLumiAsMu->SetBinContent(bin,(class_l0b[iclass]*1.)/(class_l0b[iclass2]*1.));
    //    hEvPerLumiAsMu->SetBinError(bin,val/val2*sqrt(1./val+1./val2));
    //    hEvPerLumiAsRun->SetBinContent(bin2,(class_l1b[iclass]*1.)/(class_l1b[iclass2]*1.));
    //    hEvPerLumiAsRun->SetBinError(bin2,val/val2*sqrt(1./val+1./val2));
    hEvPerLumiAsRD->SetBinContent((hEvPerLumiAsRD->GetXaxis()->FindBin(run_duration)),val/vallum/1000000.);
    hEvPerLumiAsRD->SetBinError((hEvPerLumiAsRD->GetXaxis()->FindBin(run_duration)),sqrt(val)/vallum/1000000.);
    hEvPerLumiAsRun->SetBinContent(bin2,val/vallum/1000000.);
    hEvPerLumiAsRun->SetBinError(bin2,sqrt(val)/vallum/1000000.);
    hFSAsRun->Fill(srun, (class_l0a[iclass]/class_ds[iclass])/(class_l0a[iclass2]/class_ds[iclass2]) ); 
    hFSAsRun->SetBinError((hFSAsRun->GetXaxis()->FindBin(srun)),sqrt(1./val+1./val2)*val/val2);
    hEvPerLumiAsV0R->SetBinContent((hEvPerLumiAsV0R->GetXaxis()->FindBin(class_l0a[iclassv0]/run_duration)),val/vallum/1000000.); 
    hEvPerLumiAsV0R->SetBinError((hEvPerLumiAsV0R->GetXaxis()->FindBin(class_l0a[iclassv0]/run_duration)),sqrt(val)/vallum/1000000.);

    if( r < 245090 ) {
      hEvPerLumiAsMul->SetBinContent((hEvPerLumiAsMul->GetXaxis()->FindBin(mu)),val/vallum/1000000.); 
      hEvPerLumiAsMul->SetBinError((hEvPerLumiAsMul->GetXaxis()->FindBin(mu)),sqrt(val)/vallum/1000000.);
      hEvPerLumiAsIRl->SetBinContent((hEvPerLumiAsIRl->GetXaxis()->FindBin(interactionRate)),val/vallum/1000000.); 
      hEvPerLumiAsIRl->SetBinError((hEvPerLumiAsIRl->GetXaxis()->FindBin(interactionRate)),sqrt(val)/vallum/1000000.);
      hFSAsIRl->SetBinContent((hFSAsIRl->GetXaxis()->FindBin(interactionRate)), (class_l0a[iclass]/class_ds[iclass])/(class_l0a[iclass2]/class_ds[iclass2]) ); 
      hFSAsIRl->SetBinError((hFSAsIRl->GetXaxis()->FindBin(interactionRate)),sqrt(1./val+1./val2)*val/val2);
      hEvPerLumiAsLumil->SetBinContent((hEvPerLumiAsLumil->GetXaxis()->FindBin(vallum)),val/vallum/1000000.); 
      hEvPerLumiAsLumil->SetBinError((hEvPerLumiAsLumil->GetXaxis()->FindBin(vallum)),sqrt(val)/vallum/1000000.);
      hEvPerLumiAsDTl->SetBinContent((hEvPerLumiAsDTl->GetXaxis()->FindBin(1.-class_lifetime[iclass]/class_ds[iclass])),val/vallum/1000000.); 
      hEvPerLumiAsDTl->SetBinError((hEvPerLumiAsDTl->GetXaxis()->FindBin(1.-class_lifetime[iclass]/class_ds[iclass])),sqrt(val)/vallum/1000000.);
      hDTAsIRl->SetBinContent((hDTAsIRl->GetXaxis()->FindBin(interactionRate)),1.-class_lifetime[iclass]/class_ds[iclass]); 
      hDTAsIRl->SetBinError((hDTAsIRl->GetXaxis()->FindBin(interactionRate)),0.01);
    }
    if( r > 245090 ) {
      hEvPerLumiAsIRh->SetBinContent((hEvPerLumiAsIRh->GetXaxis()->FindBin(interactionRate)),val/vallum/1000000.); 
      hEvPerLumiAsIRh->SetBinError((hEvPerLumiAsIRh->GetXaxis()->FindBin(interactionRate)),sqrt(val)/vallum/1000000.);
      hFSAsIRh->SetBinContent((hFSAsIRh->GetXaxis()->FindBin(interactionRate)), (class_l0a[iclass]/class_ds[iclass])/(class_l0a[iclass2]/class_ds[iclass2]) ); 
      hFSAsIRh->SetBinError((hFSAsIRh->GetXaxis()->FindBin(interactionRate)),sqrt(1./val+1./val2)*val/val2);
      hEvPerLumiAsMuh->SetBinContent((hEvPerLumiAsMuh->GetXaxis()->FindBin(mu)),val/vallum/1000000.); 
      hEvPerLumiAsMuh->SetBinError((hEvPerLumiAsMuh->GetXaxis()->FindBin(mu)),sqrt(val)/vallum/1000000.);
      hEvPerLumiAsLumih->SetBinContent((hEvPerLumiAsLumih->GetXaxis()->FindBin(vallum)),val/vallum/1000000.); 
      hEvPerLumiAsLumih->SetBinError((hEvPerLumiAsLumih->GetXaxis()->FindBin(vallum)),sqrt(val)/vallum/1000000.);
      hEvPerLumiAsDTh->SetBinContent((hEvPerLumiAsDTh->GetXaxis()->FindBin(1.-class_lifetime[iclass]/class_ds[iclass])),val/vallum/1000000.); 
      hEvPerLumiAsDTh->SetBinError((hEvPerLumiAsDTh->GetXaxis()->FindBin(1.-class_lifetime[iclass]/class_ds[iclass])),sqrt(val)/vallum/1000000.);
      hDTAsIRh->SetBinContent((hDTAsIRh->GetXaxis()->FindBin(interactionRate)),1.-class_lifetime[iclass]/class_ds[iclass]); 
      hDTAsIRh->SetBinError((hDTAsIRh->GetXaxis()->FindBin(interactionRate)),0.01);
    }

    luminew+=lumi_seen*class_l0a[iclass]/class_l0b[iclass];
    std::cout<<" run "<<r<<" lumi_seen "<<lumi_seen<<" lumi_new "<<luminew<<" l0b "<<class_l0b[iclass]<<" l0a "<<class_l0a[iclass]<<" luminew "<<luminew<<" lumitot "<<lumi<<std::endl;
    //    std::cout<<" pvn "<<r<<" seen "<<lumi_seen<<" events "<<class_l0b[iclass]<<" ratio "<<class_l0b[iclass]/lumi_seen/1000000.<<" ds "<<class_ds[iclass]<<" lf "<<class_lifetime[iclass]<<" dead-time "<<1.-class_lifetime[iclass]/class_ds[iclass]<<" calcLumi "<<lumi_seen*class_lifetime[iclass]<<" lumi "<<class_lumi[iclass]<<" C0V0M-dead-time "<<1.-class_l0a[iclassv0]*1./class_l0b[iclassv0]/class_ds[iclassv0]<<" "<<class_lMb[iclass]<<" "<<class_l0b[iclass2]*1000000./class_lMb[iclass]<<std::endl;
    //    std::cout<<r<<" fill "<<fill<<" mu "<<mu<<" seen "<<lumi_seen<<" time "<<run_duration<<" rate "<<interactionRate<<" bc "<<bcs<<std::endl;
    //    std::cout<<r<<" rate "<<interactionRate<<" diff-lumi "<<class_l0b[iclass2]/run_duration<<" ccup "<<class_l0b[iclass]<<" "<<1.*class_l0a[iclass]/class_lifetime[iclass]<<" "<<1.*class_l0a[iclass]/class_l0b[iclass]/class_lifetime[iclass]<<" "<<class_lifetime[iclass]<<" "<<class_ds[iclass]<<" "<<class_lifetime[iclass]/class_ds[iclass]<<" second "<<class_l0b[iclass2]<<" "<<1.*class_l0a[iclass2]/class_lifetime[iclass2]<<" "<<1.*class_l0a[iclass2]/class_l0b[iclass2]/class_lifetime[iclass2]<<" rat "<<1.*class_l0b[iclass]/class_l0b[iclass2]<<" "<<(1.*class_l0a[iclass]/class_l0b[iclass]/class_lifetime[iclass])/(1.*class_l0a[iclass2]/class_l0b[iclass2]/class_lifetime[iclass2])<<std::endl;
    hRatAsIR->SetBinContent((hRatAsIR->GetXaxis()->FindBin(interactionRate)),1.*class_l0b[iclass]/class_l0b[iclass2]*run_duration); 
    hRatAsIR->SetBinError((hRatAsIR->GetXaxis()->FindBin(interactionRate)),0.00001);

    //    std::cout<<r<<" lumi-seen "<<lumi_seen<<" C0V0M-lumi "<<class_lumi[iclassv0]/class_ds[iclassv0]<<" C0V0M-live-time "<<class_l0a[iclassv0]*1./class_l0b[iclassv0]/class_ds[iclassv0]<<" new C0V0M-lumi "<<lumi_seen*class_l0a[iclassv0]*1./class_l0b[iclassv0]/class_ds[iclassv0]<<" iclass "<<1.-class_l0a[iclass]*1./class_l0b[iclass]/class_ds[iclass]<<" lumi "<<class_lumi[iclass]<<" new "<<lumi_seen*class_l0a[iclass]/class_l0b[iclass]<<" rat "<<class_lumi[iclass]/(lumi_seen*class_l0a[iclass]/class_l0b[iclass])<<" iclass-live-time "<<(class_lumi[iclass]/class_ds[iclass])/lumi_seen<<std::endl;
  }
  printf("Total lumi = %f\n",lumi);
  printf("%i\n",nChunks);

  hMu->LabelsDeflate("x");
  for (Int_t i=1;i<=hMu->GetNbinsX();i++){
    Int_t l = TString(hMu->GetXaxis()->GetBinLabel(i)).Atoi();
    printf("%i, ",l);
    if (i%10==0) printf("\n");
  }
  printf("\n");

  hTriggers->Sumw2();
  hProcessed->Sumw2();
  hPerc->Divide(hProcessed,hTriggers,1.,1.,"b");

  hLumiProc->Multiply(hLumi,hPerc,1.,1.);
  // hLumi->Draw("");
  // hLumiProc->SetLineColor(2);
  // hLumiProc->Draw("same,hist");

  //  hProcessed->Draw("e");

  TFile* f = new TFile("lumi_ccup9.root","recreate");
  hProcessed->Write();
  hTriggers->Write();
  hPerc->Write();
  hLumi->Write();
  hLumiProc->Write();
  /*  hEvPerLumiAsMul->Write();
  hEvPerLumiAsMuh->Write();
  hEvPerLumiAsV0R->Write();
  hRatAsIR->Write();
  hEvPerLumiAsIRl->Write();
  hEvPerLumiAsIRh->Write();
  hFSAsRun->Write();
  hFSAsIRl->Write();
  hFSAsIRh->Write();
  hDTAsIRl->Write();
  hDTAsIRh->Write();
  hEvPerLumiAsLumil->Write();
  hEvPerLumiAsLumih->Write();
  hEvPerLumiAsDTl->Write();
  hEvPerLumiAsDTh->Write();
  hEvPerLumiAsRun->Write();
  hEvPerLumiAsRD->Write();
  hInteractionRate->Write();*/
  hMu->Write();
  f->Close();

}
