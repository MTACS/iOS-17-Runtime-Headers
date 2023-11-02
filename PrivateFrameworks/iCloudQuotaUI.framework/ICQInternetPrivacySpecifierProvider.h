
@interface ICQInternetPrivacySpecifierProvider : NSObject <AAUISpecifierProvider, ICQUpgradeFlowManagerDelegate> {
    AIDAAccountManager * _accountManager;
    <AAUISpecifierProviderDelegate> * _delegate;
    ICQUpgradeFlowManager * _flowManager;
    bool  _hasProfileRestriction;
    unsigned long long  _internetPrivacyAvailability;
    ICQInternetPrivacyViewController * _internetPrivacyController;
    PSSpecifier * _internetPrivacySpecifier;
    NSObject * _observationToken;
    NSArray * _specifiers;
    NSString * _statusString;
    ICQInternetPrivacyViewModel * _viewModel;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICQUpgradeFlowManager *flowManager;
@property (nonatomic) bool hasProfileRestriction;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long internetPrivacyAvailability;
@property (nonatomic, retain) ICQInternetPrivacyViewController *internetPrivacyController;
@property (nonatomic, retain) PSSpecifier *internetPrivacySpecifier;
@property (nonatomic, retain) NSObject *observationToken;
@property (nonatomic, copy) NSArray *specifiers;
@property (nonatomic, retain) NSString *statusString;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQInternetPrivacyViewModel *viewModel;

- (void).cxx_destruct;
- (void)_configureInternetPrivacySpecifier:(id)arg1;
- (void)_controllerLoadAction;
- (void)_fetchStatus;
- (void)_fetchStatusWithCompletion:(id /* block */)arg1;
- (bool)_handleQuotaJourneyURL:(id)arg1;
- (void)_internetPrivacySpecifierLoadJourney:(id)arg1;
- (void)_internetPrivacySpecifierWasTapped:(id)arg1;
- (void)_presentLearnMoreSubscriberPage;
- (void)_registerForNSPDarwinNotification;
- (void)_reloadSpecifiers;
- (void)_setupWithAltDSID:(id)arg1;
- (bool)_shouldShowInternetPrivacySpecifier;
- (void)_unregisterForNSPDarwinNotification;
- (id)_valueForInternetPrivacySpecifier:(id)arg1;
- (id)account;
- (id)accountManager;
- (void)dealloc;
- (id)delegate;
- (id)flowManager;
- (bool)handleURL:(id)arg1;
- (bool)hasProfileRestriction;
- (id)initWithAccountManager:(id)arg1;
- (unsigned long long)internetPrivacyAvailability;
- (id)internetPrivacyController;
- (id)internetPrivacySpecifier;
- (id)makeDefaultInternetPrivacySpecifier;
- (id)observationToken;
- (void)reloadQuotaInfo;
- (void)reloadSpecifer:(id)arg1;
- (void)setAccountManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlowManager:(id)arg1;
- (void)setHasProfileRestriction:(bool)arg1;
- (void)setInternetPrivacyAvailability:(unsigned long long)arg1;
- (void)setInternetPrivacyController:(id)arg1;
- (void)setInternetPrivacySpecifier:(id)arg1;
- (void)setObservationToken:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)specifiers;
- (id)statusString;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (id)viewModel;

@end
