
@interface HMDSiriEndpointEnablementLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _numCapableSiriEndpointAccessories;
    unsigned long long  _numEnabledSiriEndpointAccessories;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) unsigned long long numCapableSiriEndpointAccessories;
@property (nonatomic, readonly) unsigned long long numEnabledSiriEndpointAccessories;
@property (readonly) Class superclass;

+ (id)logCategory;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithConfigurationDataSource:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHomeUUID:(id)arg1 numCapableSiriEndpoints:(unsigned long long)arg2 numEnabledSiriEndpoints:(unsigned long long)arg3;
- (unsigned long long)numCapableSiriEndpointAccessories;
- (unsigned long long)numEnabledSiriEndpointAccessories;
- (id)serializedMetric;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;

@end
