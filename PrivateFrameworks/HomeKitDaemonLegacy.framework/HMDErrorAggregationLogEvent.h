
@interface HMDErrorAggregationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSDictionary * _coreAnalyticsSerializedEvent;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsSerializedEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;

+ (id)createErrorEventForRequestGroup:(id)arg1 errorString:(id)arg2 errorCount:(id)arg3;
+ (id)createSummaryEventForRequestGroup:(id)arg1 totalErrorCount:(id)arg2 totalEventCount:(id)arg3;
+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)coreAnalyticsSerializedEvent;
- (id)initWithEventGroupName:(id)arg1 errorString:(id)arg2 errorCount:(id)arg3 eventCount:(id)arg4;

@end
