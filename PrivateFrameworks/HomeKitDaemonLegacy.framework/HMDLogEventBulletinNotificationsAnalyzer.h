
@interface HMDLogEventBulletinNotificationsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner> {
    HMDEventCounterGroup * _aggregationEventGroup;
    HMDCounterThresholdTTRTrigger * _cameraReachabilityTTRTrigger;
    HMDCounterThresholdTTRTrigger * _homeHubReachabilityTTRTrigger;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    <HMDUserNotificationCenterSettingsProviding> * _notificationSettingsProvider;
    HMDEventCounterGroup * _topicEventGroup;
}

@property (nonatomic, readonly) HMDEventCounterGroup *aggregationEventGroup;
@property (nonatomic, readonly) HMDCounterThresholdTTRTrigger *cameraReachabilityTTRTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCounterThresholdTTRTrigger *homeHubReachabilityTTRTrigger;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (nonatomic, readonly) <HMDUserNotificationCenterSettingsProviding> *notificationSettingsProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDEventCounterGroup *topicEventGroup;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (id)aggregationEventGroup;
- (id)cameraReachabilityTTRTrigger;
- (long long)cameraReachabilityThresholdFromConfiguration:(id)arg1;
- (void)configurationChanged:(id)arg1;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)homeHubReachabilityTTRTrigger;
- (id)initWithDataSource:(id)arg1 notificationSettingsProvider:(id)arg2;
- (id)logEventSubmitter;
- (id)notificationSettingsProvider;
- (void)populateAggregationAnalysisLogEvent:(id)arg1;
- (void)resetAggregationAnalysisContext;
- (void)runDailyTask;
- (id)topicEventGroup;

@end
