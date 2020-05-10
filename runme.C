
#include "TString.h"
#include "TROOT.h"

using namespace std;

void runme(){

TString cat[3]{"bbA_MA300_Tanb-20","DY_nlo1","ttbar_nlo"};
gROOT->ProcessLine(".L NewAnalyzer_dacapo.C++");
cout<<"ciao"<<endl;
//gROOT->ProcessLine(TString::Format("c = (NewAnalyzer(\"%s\", 300., 200., 400., 0, 0)",arg));
gROOT->ProcessLine("c = NewAnalyzer_dacapo(\"bbA_MA300_Tanb-20\", 300., 200., 400., 0, 0)");
cout<<"ciao2"<<endl;
gROOT->ProcessLine("c.Loop()");
cout << "ciao3"<<endl;
gROOT->ProcessLine("c.Draw()");



}
