
@interface NDOWarrantyInfoController : PSListController <NDOAppleCareFlowDelegate> {
    NDOACController * _acController;
    NSDictionary * _appSupportDictionary;
    NSString * _deeplinkParams;
    bool  _hasLoaded;
    PSSpecifier * _lastCoverageSpecifier;
    PSSpecifier * _lastDetailSpecifier;
    unsigned long long  _previousAppSupportAvailablabilityType;
    bool  _reloadInProgress;
    bool  _shouldRefreshOnAppear;
}

@property (nonatomic) NDOACController *acController;
@property (retain) NSDictionary *appSupportDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *deeplinkParams;
@property (readonly, copy) NSString *description;
@property bool hasLoaded;
@property (readonly) unsigned long long hash;
@property (retain) PSSpecifier *lastCoverageSpecifier;
@property (retain) PSSpecifier *lastDetailSpecifier;
@property unsigned long long previousAppSupportAvailablabilityType;
@property bool reloadInProgress;
@property bool shouldRefreshOnAppear;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addKey:(id)arg1 isCopyable:(bool)arg2 toSpecifiers:(id)arg3;
- (void)_addKey:(id)arg1 value:(id)arg2 isCopyable:(bool)arg3 toSpecifiers:(id)arg4;
- (bool)_isValidSubscriptionPlan;
- (void)_refresh:(id)arg1;
- (void)_refreshWithForcedNetworkPolicy:(bool)arg1 forceUpdateFollowup:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_setValue:(id)arg1 forSpecifier:(id)arg2;
- (void)_setValue:(id)arg1 forSpecifierWithKey:(id)arg2 inSpecifiers:(id)arg3;
- (id)acController;
- (id)appSupportDictionary;
- (void)benefitsDescLinkTapped:(id)arg1;
- (id)coverageItemSubTitle:(id)arg1;
- (id)deeplinkParams;
- (void)donePressed:(id)arg1;
- (void)footer1Tapped:(id)arg1;
- (void)footer2Tapped:(id)arg1;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasLoaded;
- (id)initWithSpecifier:(id)arg1;
- (bool)isWarrantyValid;
- (id)lastCoverageSpecifier;
- (id)lastDetailSpecifier;
- (void)loadView;
- (void)managePlanPressed:(id)arg1;
- (void)ndoAppleCareCoveragePressed:(id)arg1;
- (void)openURL:(id)arg1;
- (void)outreachFinishedForDeviceWithSerialNumber:(id)arg1 withCompletion:(unsigned long long)arg2;
- (void)postCAEventWithDeviceInfo:(id)arg1;
- (unsigned long long)previousAppSupportAvailablabilityType;
- (bool)reloadInProgress;
- (void)reloadSpecifiers;
- (void)setAcController:(id)arg1;
- (void)setAppSupportDictionary:(id)arg1;
- (void)setDeeplinkParams:(id)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setLastCoverageSpecifier:(id)arg1;
- (void)setLastDetailSpecifier:(id)arg1;
- (void)setPreviousAppSupportAvailablabilityType:(unsigned long long)arg1;
- (void)setReloadInProgress:(bool)arg1;
- (void)setShouldRefreshOnAppear:(bool)arg1;
- (bool)shouldRefreshOnAppear;
- (id)specifierForID:(id)arg1 inSpecifiers:(id)arg2;
- (id)specifiers;
- (void)updateAppStoreLookupWithSpecifiers:(id)arg1;
- (void)updateAppSupportSpecifiersWithSpecifiers:(id)arg1;
- (id)valueForSpecifier:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
