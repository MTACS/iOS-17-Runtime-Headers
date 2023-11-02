
@interface HMDCoreDataCloudStoreReasonsDailyLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _reason;
    unsigned long long  _reasonCount;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long reasonCount;
@property (readonly) Class superclass;

+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithReason:(id)arg1 reasonCount:(unsigned long long)arg2;
- (id)reason;
- (unsigned long long)reasonCount;

@end
