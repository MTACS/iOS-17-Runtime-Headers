
@interface HMDAccessoryReachabilityChangedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    bool  _accessoryBatteryPowered;
    bool  _accessoryBridged;
    NSString * _accessoryCategory;
    NSString * _accessoryFirmwareVersion;
    NSString * _accessoryManufacturer;
    NSString * _accessoryModel;
    NSNumber * _accessoryNumber;
    bool  _batteryLow;
    bool  _changed;
    long long  _duration;
    bool  _reachable;
    HMDAccessoryTransportReachabilityReport * _transportReport;
}

@property (nonatomic, readonly) bool accessoryBatteryPowered;
@property (nonatomic, readonly) bool accessoryBridged;
@property (nonatomic, readonly, copy) NSString *accessoryCategory;
@property (nonatomic, readonly, copy) NSString *accessoryFirmwareVersion;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSString *accessoryManufacturer;
@property (nonatomic, readonly, copy) NSString *accessoryModel;
@property (nonatomic, readonly, copy) NSNumber *accessoryNumber;
@property (nonatomic, readonly) bool batteryLow;
@property (nonatomic, readonly) bool changed;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) bool reachable;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HMDAccessoryTransportReachabilityReport *transportReport;

+ (id)eventWithReachable:(bool)arg1 changed:(bool)arg2 duration:(double)arg3 accessory:(id)arg4 transportReport:(id)arg5;
+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (id)__initWithReachable:(bool)arg1 changed:(bool)arg2 duration:(double)arg3 accessory:(id)arg4 transportReport:(id)arg5;
- (bool)accessoryBatteryPowered;
- (bool)accessoryBridged;
- (id)accessoryCategory;
- (id)accessoryFirmwareVersion;
- (id)accessoryManufacturer;
- (id)accessoryModel;
- (id)accessoryNumber;
- (bool)batteryLow;
- (bool)changed;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (long long)duration;
- (id)init;
- (bool)reachable;
- (id)transportReport;

@end
