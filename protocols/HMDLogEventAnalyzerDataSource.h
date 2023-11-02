
@protocol HMDLogEventAnalyzerDataSource <NSObject>

@required

- (void)addConfigurationChangedObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMDConfigurationLogEvent *, void*
- (HMDConfigurationLogEvent *)cachedConfiguration;
- (NSString *)currentSoftwareVersion;
- (HMDLogEventDailyScheduler *)dailyScheduler;
- (HMMDateProvider *)dateProvider;
- (<HMDMetricsDeviceStateProvider> *)deviceStateProvider;
- (HMDTimeBasedFlagsManager *)flagsManager;
- (HMDEventCountersManager *)legacyCountersManager;
- (<HMMLogEventDispatching> *)logEventDispatcher;
- (<HMMLogEventSubmitting> *)logEventSubmitter;
- (NSNotificationCenter *)notificationCenter;
- (<HMDRadarInitiating> *)ttrManager;
- (NSUserDefaults *)userDefaults;

@end
