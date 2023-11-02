
@interface HMDHH2AutoMigrationEligibilityChecker : HMFObject <HMFLogging> {
    HMDAppleAccountManager * _accountManager;
    <HMDFeaturesDataSource> * _featuresDataSource;
    id /* block */  _frameworkSwitchProvider;
    HMDHomeManager * _homeManager;
    id /* block */  _isHSA2Enabled;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ frameworkSwitchProvider;
@property (readonly) unsigned long long hash;
@property HMDHomeManager *homeManager;
@property (copy) id /* block */ isHSA2Enabled;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)fetchIsCurrentUserEligibleForAutoMigrationWithCompletion:(id /* block */)arg1;
- (void)fetchIsCurrentUserEligibleForMigrationByOwnerWithCompletion:(id /* block */)arg1;
- (id /* block */)frameworkSwitchProvider;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (id)initWithHomeManager:(id)arg1 accountManager:(id)arg2 featuresDataSource:(id)arg3 userDefaults:(id)arg4;
- (id /* block */)isHSA2Enabled;
- (void)setFrameworkSwitchProvider:(id /* block */)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setIsHSA2Enabled:(id /* block */)arg1;

@end
