
@protocol FCSharedCoreConfiguration <NSObject, NFCopying>

@required

- (long long)articleRapidUpdatesTimeout;
- (NSString *)experimentalizableFieldPostfix;
- (NSArray *)externalAnalyticsConfigurations;
- (NSArray *)hiddenFeedIDs;
- (bool)isOrderFeedEndpointEnabled;
- (FCPersonalizationTreatment *)personalizationTreatment;
- (FCTopStoriesConfiguration *)topStoriesConfig;
- (bool)useSecureConnectionForAssets;

@optional

- (bool)articleEmbeddingsEnabled;
- (bool)articleEmbeddingsScoringEnabled;
- (bool)clientSideEngagementBoostEnabled;
- (NSString *)conversionCohortsExpField;
- (NSString *)engagementCohortsExpField;
- (long long)maximumRetryAfterForCK;
- (FCPersonalizationPublisherDampeningConfig *)publisherDampeningConfig;
- (FCPersonalizationPublisherDampeningConfig *)shadowPublisherDampeningConfig;
- (bool)shouldShowAlternateHeadlines;

@end
