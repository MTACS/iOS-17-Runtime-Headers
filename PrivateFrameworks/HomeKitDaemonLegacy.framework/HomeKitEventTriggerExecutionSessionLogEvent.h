
@interface HomeKitEventTriggerExecutionSessionLogEvent : HMMLogEvent {
    HMDAnalyticsEventTriggerExecutionSessionData * _analyticsData;
}

@property (nonatomic, readonly) HMDAnalyticsEventTriggerExecutionSessionData *analyticsData;

- (void).cxx_destruct;
- (id)analyticsData;
- (id)initWithSessionID:(id)arg1;

@end
