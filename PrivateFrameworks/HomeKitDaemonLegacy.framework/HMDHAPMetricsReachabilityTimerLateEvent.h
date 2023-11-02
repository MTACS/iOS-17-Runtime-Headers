
@interface HMDHAPMetricsReachabilityTimerLateEvent : HMDHAPMetrics {
    NSNumber * _duration;
    NSNumber * _expectedDuration;
}

@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSNumber *expectedDuration;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (id)duration;
- (id)expectedDuration;
- (id)initWithAccessory:(id)arg1 duration:(id)arg2 expectedDuration:(id)arg3;

@end
