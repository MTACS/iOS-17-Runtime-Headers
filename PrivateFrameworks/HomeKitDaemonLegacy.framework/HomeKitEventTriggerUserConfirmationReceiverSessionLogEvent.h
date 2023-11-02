
@interface HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent : HMMLogEvent {
    HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData * _analyticsData;
}

@property (nonatomic, readonly) HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData *analyticsData;

- (void).cxx_destruct;
- (id)analyticsData;
- (id)initWithSessionID:(id)arg1;

@end
