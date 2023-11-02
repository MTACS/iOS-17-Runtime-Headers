
@interface SXMetadata : SXJSONObject

@property (nonatomic, readonly) SXJSONDictionary *campaignData;
@property (nonatomic, readonly) NSString *canonicalURL;
@property (nonatomic, readonly) NSString *documentVersion;
@property (nonatomic, readonly) SXFeedNavigationAppearance *feedNavigationAppearance;
@property (nonatomic, readonly) bool showNewsSubscribe;
@property (nonatomic, readonly) bool suppressMoreFromPublisher;
@property (nonatomic, readonly) long long suppressRecommendedReads;
@property (nonatomic, readonly) bool suppressRelatedArticles;
@property (nonatomic, readonly) SXTabBarAppearance *tabBarAppearance;
@property (nonatomic, readonly) NSString *thumbnailImageIdentifier;
@property (nonatomic, readonly) bool transparentToolbar;

- (long long)suppressRecommendedReadsWithValue:(id)arg1 withType:(int)arg2;

@end
