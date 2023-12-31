
@interface ENConfigurationManager : NSObject {
    ENActiveEntity * _activeEntity;
    ENCloudServerChannel * _cloudServerChannel;
    ENConfigurationStore * _configurationStore;
    NSObject<ENConfigurationManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    ENXPCTimer * _gracePeriodConfigurationFetchTimer;
    bool  _mobileCountryCodeOverriden;
    bool  _prefRampTrialPeriodProfile;
    bool  _prefTestHeaderEnabled;
    ENRegionMonitor * _regionMonitor;
    NSMutableDictionary * _regionRampModeOverride;
    NSObject<OS_dispatch_queue> * _serialQueue;
    ENXPCTimer * _serverConfigurationFetchTimer;
}

@property (nonatomic, copy) ENActiveEntity *activeEntity;
@property (nonatomic, retain) ENCloudServerChannel *cloudServerChannel;
@property (nonatomic, retain) ENConfigurationStore *configurationStore;
@property (nonatomic) NSObject<ENConfigurationManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) ENXPCTimer *gracePeriodConfigurationFetchTimer;
@property (nonatomic) bool mobileCountryCodeOverriden;
@property (nonatomic) bool prefRampTrialPeriodProfile;
@property (nonatomic) bool prefTestHeaderEnabled;
@property (nonatomic, retain) ENRegionMonitor *regionMonitor;
@property (nonatomic, retain) NSMutableDictionary *regionRampModeOverride;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) ENXPCTimer *serverConfigurationFetchTimer;

+ (void)_printServerConfiguration:(id)arg1;
+ (id)iCloudServerEndpoint;
+ (bool)isRampModeEnabledFromServerResponse:(id)arg1;
+ (unsigned long long)rampModeFromServerResponse:(id)arg1;
+ (double)randomSelectPercentagePerDayFromServerResponse:(id)arg1;
+ (bool)serverResponse:(id)arg1 isOnRampMode:(unsigned long long)arg2;
+ (id)staticRegionForBundleID:(id)arg1;
+ (bool)verifyAppleServerResponse:(id)arg1 signatureHeader:(id)arg2;

- (void).cxx_destruct;
- (void)_activate;
- (void)_fetchServerConfigurationsForRegion:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_processServerConfiguration:(id)arg1 forceUpdate:(bool)arg2;
- (void)_reportErrorMetricForHTTPStatus:(long long)arg1;
- (void)_saveAndRemoveStaleConfigurations:(id)arg1 region:(id)arg2 error:(id)arg3;
- (void)_scheduleRegionConfigurationRefresh;
- (void)_serverFetchRegionConfiguration:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)activate;
- (id)activeEntity;
- (id)cloudServerChannel;
- (id)configurationStore;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)fetchServerConfigurationsForRegion:(id)arg1 userInitiated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)gracePeriodConfigurationFetchTimer;
- (id)initWithDelegate:(id)arg1 activeEntity:(id)arg2;
- (bool)isInGracePeriodTransition;
- (bool)mobileCountryCodeOverriden;
- (void)overrideRampModeForRegion:(id)arg1 rampMode:(unsigned long long)arg2;
- (bool)prefRampTrialPeriodProfile;
- (bool)prefTestHeaderEnabled;
- (void)prefsChanged;
- (unsigned long long)readCachedRampModeForRegion:(id)arg1;
- (void)refreshServerConfigurationsUponProfileChange;
- (id)regionMonitor;
- (void)regionMonitor:(id)arg1 authorizationStateDidChange:(unsigned long long)arg2;
- (void)regionMonitor:(id)arg1 regionDidChange:(id)arg2;
- (id)regionRampModeOverride;
- (bool)regionSupportsFeatures:(id)arg1 featureFlags:(unsigned int)arg2;
- (void)resetConfigurationCache;
- (void)resetConfigurationManager;
- (id)serialQueue;
- (id)serverConfigurationFetchTimer;
- (void)serverFetchRegionConfiguration:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setActiveEntity:(id)arg1;
- (void)setCloudServerChannel:(id)arg1;
- (void)setConfigurationStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setGracePeriodConfigurationFetchTimer:(id)arg1;
- (void)setMobileCountryCodeOverriden:(bool)arg1;
- (void)setPrefRampTrialPeriodProfile:(bool)arg1;
- (void)setPrefTestHeaderEnabled:(bool)arg1;
- (void)setRegionMonitor:(id)arg1;
- (void)setRegionRampModeOverride:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setServerConfigurationFetchTimer:(id)arg1;
- (void)setupGracePeriodFetchTimerWithDelay:(double)arg1;
- (void)stopGracePeriodTimer;
- (bool)updateRampModeForRegion:(id)arg1 rampMode:(unsigned long long)arg2;
- (void)updateRegionMonitorModeForCurrentRegion;

@end
