
@interface HMDHAPMetricsReachabilityAddRemoveEvent : HMDHAPMetrics {
    unsigned long long  _addRemoveEvent;
    NSNumber * _linkType;
}

@property (nonatomic, readonly) unsigned long long addRemoveEvent;
@property (nonatomic, readonly) NSNumber *linkType;

- (void).cxx_destruct;
- (unsigned long long)addRemoveEvent;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (id)initWithAccessory:(id)arg1 hmdAddRemoveEvent:(unsigned long long)arg2 forLinkType:(id)arg3;
- (id)linkType;

@end
