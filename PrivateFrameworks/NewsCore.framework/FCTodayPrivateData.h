
@interface FCTodayPrivateData : NSObject <FCTodayPrivateData> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly, copy) NSArray *autoFavoriteTagIDs;
@property (nonatomic, readonly, copy) FCBundleSubscription *bundleSubscription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) FCDerivedPersonalizationData *derivedPersonalizationData;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSSet *groupableTagIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localNewsTagID;
@property (nonatomic, readonly, copy) NSSet *mutedTagIDs;
@property (nonatomic, readonly, copy) NSNumber *onboardingVersion;
@property (nonatomic, readonly, copy) NSSet *purchasedTagIDs;
@property (nonatomic, readonly, copy) NSArray *rankedAllSubscribedTagIDs;
@property (nonatomic, readonly, copy) NSArray *rankedAllSubscriptionDates;
@property (nonatomic, readonly, copy) NSDictionary *recentlyReadHistoryItems;
@property (nonatomic, readonly, copy) NSArray *recentlySeenHistoryItems;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *userEmbeddingData;

- (void).cxx_destruct;
- (id)autoFavoriteTagIDs;
- (id)bundleSubscription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)derivedPersonalizationData;
- (id)dictionary;
- (id)groupableTagIDs;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)localNewsTagID;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutedTagIDs;
- (id)onboardingVersion;
- (void)prepareForUseWithCompletion:(id /* block */)arg1;
- (id)purchasedTagIDs;
- (id)rankedAllSubscribedTagIDs;
- (id)rankedAllSubscriptionDates;
- (id)recentlyReadHistoryItems;
- (id)recentlySeenHistoryItems;
- (id)userEmbeddingData;

@end
