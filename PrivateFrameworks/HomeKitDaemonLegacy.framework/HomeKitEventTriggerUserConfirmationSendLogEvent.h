
@interface HomeKitEventTriggerUserConfirmationSendLogEvent : HMMLogEvent {
    HMDAnalyticsEventTriggerUserConfirmationSendData * _analyticsData;
}

@property (nonatomic, readonly) HMDAnalyticsEventTriggerUserConfirmationSendData *analyticsData;

- (void).cxx_destruct;
- (id)analyticsData;
- (id)initWithSessionID:(id)arg1;

@end
