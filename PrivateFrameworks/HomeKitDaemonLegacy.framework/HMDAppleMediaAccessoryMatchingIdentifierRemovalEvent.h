
@interface HMDAppleMediaAccessoryMatchingIdentifierRemovalEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _removalCount;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSNumber *removalCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithRemovalCount:(long long)arg1;
- (id)removalCount;

@end
