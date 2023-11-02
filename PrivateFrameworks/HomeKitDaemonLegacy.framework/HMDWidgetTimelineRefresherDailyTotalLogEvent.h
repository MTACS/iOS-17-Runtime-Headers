
@interface HMDWidgetTimelineRefresherDailyTotalLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _count;
    NSString * _kind;
    NSString * _reason;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (unsigned long long)count;
- (id)initWithKind:(id)arg1 reason:(id)arg2 count:(unsigned long long)arg3;
- (id)kind;
- (id)reason;

@end
