
@interface HMDAudioAnalysisNotificationReceivedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSDate * _notificationSentDate;
    unsigned long long  _reason;
    unsigned long long  _state;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) double latency;
@property (nonatomic, readonly) NSDate *notificationSentDate;
@property (readonly) unsigned long long reason;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithReason:(unsigned long long)arg1 state:(unsigned long long)arg2 notificationSentDate:(id)arg3;
- (double)latency;
- (id)notificationSentDate;
- (unsigned long long)reason;
- (unsigned long long)state;

@end
