
@interface HMDMatterSoftwareUpdateEndEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _accessoryFirmwareVersionNumber;
    NSNumber * _accessoryProductID;
    NSString * _accessoryTransport;
    NSNumber * _accessoryVendorID;
    bool  _isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
    NSNumber * _targetFirmwareVersionNumber;
    NSMutableDictionary * _vendorDetailsForCoreAnalytics;
}

@property (nonatomic, readonly) NSNumber *accessoryFirmwareVersionNumber;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly) NSNumber *accessoryProductID;
@property (nonatomic, readonly) NSString *accessoryTransport;
@property (nonatomic, readonly) NSNumber *accessoryVendorID;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) bool isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *targetFirmwareVersionNumber;
@property (nonatomic, retain) NSMutableDictionary *vendorDetailsForCoreAnalytics;

+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (id)accessoryFirmwareVersionNumber;
- (id)accessoryProductID;
- (id)accessoryTransport;
- (id)accessoryVendorID;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithAccessory:(id)arg1 transport:(id)arg2 accessorySoftwareVersionNumber:(id)arg3 updateSoftwareVersionNumber:(id)arg4 error:(id)arg5;
- (bool)isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
- (void)setVendorDetailsForCoreAnalytics:(id)arg1;
- (id)targetFirmwareVersionNumber;
- (id)vendorDetailsForCoreAnalytics;

@end
