
@protocol APPCPromotableNewsSupplementalContext <APPCSecureCodable, NSCopying>

@required

- (NSString *)advertisementType;
- (NSDictionary *)anfComponentMetadata;
- (NSString *)contentEnvironment;
- (NSString *)creativeType;
- (NSString *)currentArticleArticleId;
- (NSNumber *)currentArticleIsSponsored;
- (NSDictionary *)currentArticlePublicationMetadata;
- (NSString *)currentArticleRating;
- (NSString *)currentArticleSourceChannel;
- (NSString *)currentArticleSourceChannelRating;
- (NSNumber *)currentArticleSourceContentProviderId;
- (NSArray *)currentArticleSourceSections;
- (NSString *)currentIssueId;
- (long long)currentIssueIsCurrent;
- (long long)currentIssueIsDraft;
- (NSArray *)feedMetadataCategories;
- (NSString *)feedMetadataChannelId;
- (NSNumber *)feedMetadataContentProviderID;
- (NSArray *)feedMetadataKeywords;
- (NSArray *)feedMetadataLanguages;
- (NSString *)feedMetadataRating;
- (NSString *)feedMetadataSectionId;
- (NSString *)feedMetadataTagId;
- (NSArray *)groupContextAboveCategories;
- (NSString *)groupContextAboveChannelId;
- (NSNumber *)groupContextAboveContentProviderId;
- (NSString *)groupContextAboveId;
- (NSArray *)groupContextAboveKeywords;
- (NSArray *)groupContextAboveLanguages;
- (NSString *)groupContextAboveTagId;
- (NSString *)groupContextAboveType;
- (NSArray *)groupContextBelowCategories;
- (NSString *)groupContextBelowChannelId;
- (NSNumber *)groupContextBelowContentProviderId;
- (NSString *)groupContextBelowId;
- (NSArray *)groupContextBelowKeywords;
- (NSArray *)groupContextBelowLanguages;
- (NSString *)groupContextBelowTagId;
- (NSString *)groupContextBelowType;
- (NSArray *)groupContextCategories;
- (NSNumber *)groupContextContentProviderId;
- (NSString *)groupContextId;
- (NSArray *)groupContextKeywords;
- (NSArray *)groupContextLanguages;
- (NSString *)groupContextType;
- (NSNumber *)isDraft;
- (NSString *)nextArticleArticleId;
- (NSNumber *)nextArticleIsSponsored;
- (NSDictionary *)nextArticlePublicationMetadata;
- (NSString *)nextArticleRating;
- (NSString *)nextArticleSourceChannel;
- (NSString *)nextArticleSourceChannelRating;
- (NSNumber *)nextArticleSourceContentProviderId;
- (NSArray *)nextArticleSourceSections;
- (NSNumber *)numOfArticlesSeenSinceLastInterstitial;
- (NSNumber *)onboardStatus;
- (NSString *)placement;
- (NSNumber *)playerAspectRatio;
- (NSString *)referralLocation;
- (NSNumber *)referralPublisherInventory;
- (long long)requestedAdType;
- (NSString *)subscriptionType;
- (NSArray *)superFeedMetadata;

@end
