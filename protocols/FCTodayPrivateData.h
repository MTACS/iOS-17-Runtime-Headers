
@protocol FCTodayPrivateData <NSObject, NFMutableCopying, FCPurchaseProviderType, FCBundleSubscriptionProviderType>

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
- (NSData *)userEmbeddingData;

@end
