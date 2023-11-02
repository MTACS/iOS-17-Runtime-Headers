
@interface HMDAudioAnalysisNotificationSentLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSDate * _dateOfOccurrence;
    unsigned long long  _reason;
    unsigned long long  _state;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) unsigned long long reason;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)dateOfOccurrence;
- (id)initWithDate:(id)arg1 reason:(unsigned long long)arg2 state:(unsigned long long)arg3;
- (unsigned long long)reason;
- (unsigned long long)state;

@end
