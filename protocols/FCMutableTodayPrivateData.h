
@protocol FCMutableTodayPrivateData <FCTodayPrivateData>

@required

- (NSArray *)autoFavoriteTagIDs;
- (FCBundleSubscription *)bundleSubscription;
- (FCDerivedPersonalizationData *)derivedPersonalizationData;
- (NSSet *)groupableTagIDs;
- (NSString *)localNewsTagID;
- (NSSet *)mutedTagIDs;
- (NSNumber *)onboardingVersion;
- (NSSet *)purchasedTagIDs;
- (NSArray *)rankedAllSubscribedTagIDs;
- (NSArray *)rankedAllSubscriptionDates;
- (NSDictionary *)recentlyReadHistoryItems;
- (NSArray *)recentlySeenHistoryItems;
- (void)setAutoFavoriteTagIDs:(NSArray *)arg1;
- (void)setBundleSubscription:(FCBundleSubscription *)arg1;
- (void)setDerivedPersonalizationData:(FCDerivedPersonalizationData *)arg1;
- (void)setGroupableTagIDs:(NSSet *)arg1;
- (void)setLocalNewsTagID:(NSString *)arg1;
- (void)setMutedTagIDs:(NSSet *)arg1;
- (void)setOnboardingVersion:(NSNumber *)arg1;
- (void)setPurchasedTagIDs:(NSSet *)arg1;
- (void)setRankedAllSubscribedTagIDs:(NSArray *)arg1;
- (void)setRankedAllSubscriptionDates:(NSArray *)arg1;
- (void)setRecentlyReadHistoryItems:(NSDictionary *)arg1;
- (void)setRecentlySeenHistoryItems:(NSArray *)arg1;
- (void)setUserEmbeddingData:(NSData *)arg1;
- (NSData *)userEmbeddingData;

@end
