
@interface SBStageManagerEnablementMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    SBFAnalyticsClient * _analyticsClient;
}

@property (nonatomic, readonly) SBFAnalyticsClient *analyticsClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsClient;
- (id)chamoisPreferencesSnapshotWithSource:(long long)arg1;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;
- (id)initWithAnalyticsClient:(id)arg1;
- (bool)sendCoreAnalyticsEventWithName:(id)arg1 source:(long long)arg2;

@end
