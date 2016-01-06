#ifndef L1ComparatorRun2_h
#define L1ComparatorRun2_h

#include "FWCore/Framework/interface/EDProducer.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "DataFormats/L1Trigger/interface/L1DataEmulResult.h"

#include "DataFormats/L1Trigger/interface/EGamma.h"
#include "DataFormats/L1Trigger/interface/Jet.h"
#include "DataFormats/L1Trigger/interface/EtSum.h"
#include "DataFormats/L1Trigger/interface/Tau.h"
#include "DataFormats/L1TCalorimeter/interface/CaloTower.h"
#include "DataFormats/L1Trigger/interface/Muon.h"

namespace l1t {

  class L1ComparatorRun2 : public edm::EDProducer {

  public:

    explicit L1ComparatorRun2(const edm::ParameterSet& ps);
    ~L1ComparatorRun2();

  private:

    virtual void produce(edm::Event&, edm::EventSetup const&);

    edm::EDGetToken JetDataToken_;
    edm::EDGetToken JetEmulToken_;
    edm::EDGetToken EGammaDataToken_;
    edm::EDGetToken EGammaEmulToken_;
    edm::EDGetToken TauDataToken_;
    edm::EDGetToken TauEmulToken_;
    edm::EDGetToken EtSumDataToken_;
    edm::EDGetToken EtSumEmulToken_;
    edm::EDGetToken CaloTowerDataToken_;
    edm::EDGetToken CaloTowerEmulToken_;

    int bxMax_;
    int bxMin_;

    bool doLayer2_;
    bool doLayer1_;
  };
};

#endif
