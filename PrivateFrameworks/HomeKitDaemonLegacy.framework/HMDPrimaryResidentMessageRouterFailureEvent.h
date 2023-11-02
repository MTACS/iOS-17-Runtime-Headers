
@interface HMDPrimaryResidentMessageRouterFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _failureType;
    NSString * _messageName;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *failureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSString *messageName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)failureType;
- (id)initWithMessageName:(id)arg1 failureType:(long long)arg2;
- (id)messageName;

@end
