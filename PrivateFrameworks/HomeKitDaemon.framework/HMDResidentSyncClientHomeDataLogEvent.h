
@interface HMDResidentSyncClientHomeDataLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _encodedDataSize;
    long long  _homeDataType;
    int  _transportType;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long encodedDataSize;
@property (readonly) unsigned long long hash;
@property (readonly) long long homeDataType;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;
@property (readonly) int transportType;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (unsigned long long)encodedDataSize;
- (long long)homeDataType;
- (id)initWithHomeUUID:(id)arg1 encodedDataSize:(unsigned long long)arg2 homeDataType:(long long)arg3 transportType:(int)arg4;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (int)transportType;

@end
