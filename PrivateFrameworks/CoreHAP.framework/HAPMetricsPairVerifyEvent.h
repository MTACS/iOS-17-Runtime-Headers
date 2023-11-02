
@interface HAPMetricsPairVerifyEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _accessoryIdentifier;
    unsigned long long  _durationInMS;
    NSNumber * _linkType;
    NSString * _reason;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long durationInMS;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) NSNumber *linkType;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)description;
- (unsigned long long)durationInMS;
- (id)initWithAccessory:(id)arg1 forLinkType:(id)arg2 durationInMS:(unsigned long long)arg3 reason:(id)arg4 pvError:(id)arg5;
- (id)linkType;
- (id)reason;

@end
