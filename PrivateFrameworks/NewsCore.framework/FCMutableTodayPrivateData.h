
@interface FCMutableTodayPrivateData : FCTodayPrivateData <FCMutableTodayPrivateData>

@property (nonatomic, copy) NSArray *autoFavoriteTagIDs;
@property (nonatomic, copy) FCBundleSubscription *bundleSubscription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) FCDerivedPersonalizationData *derivedPersonalizationData;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *dictionary;
@property (nonatomic, copy) NSSet *groupableTagIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localNewsTagID;
@property (nonatomic, copy) NSSet *mutedTagIDs;
@property (nonatomic, copy) NSNumber *onboardingVersion;
@property (nonatomic, copy) NSSet *purchasedTagIDs;
@property (nonatomic, copy) NSArray *rankedAllSubscribedTagIDs;
@property (nonatomic, copy) NSArray *rankedAllSubscriptionDates;
@property (nonatomic, copy) NSDictionary *recentlyReadHistoryItems;
@property (nonatomic, copy) NSArray *recentlySeenHistoryItems;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *userEmbeddingData;

- (void)_deleteObjectsForOldKeys;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setAutoFavoriteTagIDs:(id)arg1;
- (void)setBundleSubscription:(id)arg1;
- (void)setDerivedPersonalizationData:(id)arg1;
- (void)setGroupableTagIDs:(id)arg1;
- (void)setLocalNewsTagID:(id)arg1;
- (void)setMutedTagIDs:(id)arg1;
- (void)setOnboardingVersion:(id)arg1;
- (void)setPurchasedTagIDs:(id)arg1;
- (void)setRankedAllSubscribedTagIDs:(id)arg1;
- (void)setRankedAllSubscriptionDates:(id)arg1;
- (void)setRecentlyReadHistoryItems:(id)arg1;
- (void)setRecentlySeenHistoryItems:(id)arg1;
- (void)setUserEmbeddingData:(id)arg1;

@end
