
@interface HMDAppleMediaAccessoryMatchingIdentifierEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _expectedRemovalCount;
    NSNumber * _matchingIdentifiersCount;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *expectedRemovalCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSNumber *matchingIdentifiersCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)expectedRemovalCount;
- (id)initWithMatchingIdentifiersCount:(long long)arg1;
- (id)matchingIdentifiersCount;

@end
