
@interface HMDAccessoryDiagnosticMetricEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging> {
    HMDAccessory * _accessory;
    NSDictionary * _diagnostics;
}

@property (readonly) HMDAccessory *accessory;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *diagnostics;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessory;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (id)diagnostics;
- (id)initWithAccessory:(id)arg1 diagnostics:(id)arg2;

@end
