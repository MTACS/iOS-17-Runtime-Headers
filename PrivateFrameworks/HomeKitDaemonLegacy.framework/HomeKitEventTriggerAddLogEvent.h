
@interface HomeKitEventTriggerAddLogEvent : HMMHomeLogEvent {
    HMDAnalyticsAddEventTriggerData * _analyticsData;
}

@property (nonatomic, readonly) HMDAnalyticsAddEventTriggerData *analyticsData;

- (void).cxx_destruct;
- (id)analyticsData;
- (id)initWithHomeUUID:(id)arg1;

@end
