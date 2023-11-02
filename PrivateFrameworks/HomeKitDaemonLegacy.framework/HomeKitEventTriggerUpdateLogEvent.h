
@interface HomeKitEventTriggerUpdateLogEvent : HMMLogEvent {
    HMDAnalyticsUpdateEventTriggerData * _analyticsData;
}

@property (nonatomic, readonly) HMDAnalyticsUpdateEventTriggerData *analyticsData;

- (void).cxx_destruct;
- (id)analyticsData;
- (id)init;

@end
