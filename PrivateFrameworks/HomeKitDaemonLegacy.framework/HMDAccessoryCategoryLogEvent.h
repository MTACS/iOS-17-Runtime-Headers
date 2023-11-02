
@interface HMDAccessoryCategoryLogEvent : HMMHomeLogEvent <HMDLogEventFilterSpecifying, HMMCoreAnalyticsLogging> {
    NSString * _accessoryCategoryIdentifier;
    unsigned long long  _accessoryDetailsType;
    bool  _isDenominatorSpecifying;
}

@property (nonatomic, readonly) NSString *accessoryCategoryIdentifier;
@property (readonly) unsigned long long accessoryDetailsType;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool enableEventFilterSpecifying;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool isDenominatorSpecifying;
@property (nonatomic, readonly) NSString *sampledCategory;
@property (nonatomic, readonly) NSData *sampledData;
@property (nonatomic, readonly) NSUUID *sampledUUID;
@property (readonly) Class superclass;

+ (id)denominatorSpecifyingEvent;

- (void).cxx_destruct;
- (id)accessoryCategoryIdentifier;
- (unsigned long long)accessoryDetailsType;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (bool)enableEventFilterSpecifying;
- (id)initWithAccessoryDetailsType:(unsigned long long)arg1 accessoryCategoryIdentifier:(id)arg2 homeUUID:(id)arg3;
- (bool)isDenominatorSpecifying;
- (id)sampledCategory;
- (id)sampledData;
- (id)sampledUUID;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;

@end
