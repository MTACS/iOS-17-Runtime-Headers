
@interface CPAnalyticsAppStateDestination : CPAnalyticsDashboardDestination <CPAnalyticsDynamicPropertyProvider> {
    NSSet * _appEventNames;
    NSArray * _featureCounters;
    CPAnalyticsScreenManager * _screenManager;
    NSArray * _sessionCounters;
}

@property (nonatomic, retain) NSSet *appEventNames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *featureCounters;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPAnalyticsScreenManager *screenManager;
@property (nonatomic, retain) NSArray *sessionCounters;
@property (readonly) Class superclass;

+ (bool)isValidSessionEndEvent:(id)arg1;

- (void).cxx_destruct;
- (id)_computeSessionData:(id)arg1;
- (id)_createCountersFromAppEvents:(id)arg1;
- (id)_createCountersFromConfig:(id)arg1 withKey:(id)arg2;
- (id)_createCountersFromScreenNames:(id)arg1;
- (void)_resetCounters;
- (void)_sendAppSessionEventFromSourceEvent:(id)arg1 payload:(id)arg2;
- (void)_sendDashboardErrorEventIfNeededForEvent:(id)arg1;
- (void)_sendDashboardMediaEventIfNeededForEvent:(id)arg1;
- (void)_sendFeatureCounts;
- (void)_updateDependenciesBeforeProcessingEvent:(id)arg1;
- (id)_validateAndParseAppEvents:(id)arg1;
- (id)allStandardProperties;
- (id)appEventNames;
- (id)featureCounters;
- (id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)processEvent:(id)arg1;
- (void)registerSystemProperties:(id)arg1;
- (id)screenManager;
- (void)sendDashboardAppEventForEvent:(id)arg1;
- (void)sendDashboardErrorEventForEvent:(id)arg1;
- (void)sendDashboardMediaEventForEvent:(id)arg1;
- (void)sendDashboardScreenViewEventForEvent:(id)arg1;
- (id)sessionCounters;
- (void)setAppEventNames:(id)arg1;
- (void)setFeatureCounters:(id)arg1;
- (void)setSessionCounters:(id)arg1;
- (bool)shouldSendSampleWithRate:(unsigned long long)arg1;
- (void)updateWithConfig:(id)arg1;

@end
