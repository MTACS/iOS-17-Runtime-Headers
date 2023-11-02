
@interface HMAccessorySettingsMetricsDispatcher : HMFObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMCoreAnalyticsMetricEventDispatcher * _metricEventDispatcher;
    NSMutableDictionary * _trackingEvents;
}

@property (readonly) HMCoreAnalyticsMetricEventDispatcher *metricEventDispatcher;

- (void).cxx_destruct;
- (id)finishTrackingEventWithIdentifier:(id)arg1;
- (id)initWithCoreAnalyticsMetricDispatcher:(id)arg1;
- (id)metricEventDispatcher;
- (void)startEventWithMessage:(id)arg1 updateKeyPath:(id)arg2;
- (void)startTrackingEvent:(id)arg1 withEventIdentifier:(id)arg2;
- (void)submitEventWithMessage:(id)arg1 error:(id)arg2;

@end
