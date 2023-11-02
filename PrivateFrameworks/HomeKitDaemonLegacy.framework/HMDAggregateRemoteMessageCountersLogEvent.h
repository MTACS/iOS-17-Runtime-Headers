
@interface HMDAggregateRemoteMessageCountersLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _count;
    NSString * _deviceType;
    NSString * _direction;
    bool  _isPrimaryResident;
    NSString * _messageName;
    NSString * _transportType;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (nonatomic, readonly, copy) NSNumber *count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceType;
@property (nonatomic, readonly, copy) NSString *direction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool isPrimaryResident;
@property (nonatomic, readonly, copy) NSString *messageName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *transportType;

+ (id)aggregateRemoteCountersLogEventWithMessageName:(id)arg1 deviceType:(id)arg2 transportType:(id)arg3 direction:(id)arg4 isPrimaryResident:(bool)arg5 count:(id)arg6;
+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (void).cxx_destruct;
- (id)__initWithMessageName:(id)arg1 deviceType:(id)arg2 transportType:(id)arg3 direction:(id)arg4 isPrimaryResident:(bool)arg5 count:(id)arg6;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)count;
- (id)deviceType;
- (id)direction;
- (id)init;
- (bool)isPrimaryResident;
- (id)messageName;
- (id)transportType;

@end
