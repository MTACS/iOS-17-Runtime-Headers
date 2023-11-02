
@protocol MTFeedPodcast

@required

- (NSString *)artworkPrimaryColor;
- (NSString *)artworkTemplateURL;
- (NSString *)artworkTextPrimaryColor;
- (NSString *)artworkTextQuaternaryColor;
- (NSString *)artworkTextSecondaryColor;
- (NSString *)artworkTextTertiaryColor;
- (NSString *)author;
- (NSString *)category;
- (<MTFeedChannel> *)channelItem;
- (NSString *)displayType;
- (NSString *)feedDescription;
- (NSString *)globalImageURL;
- (bool)hasEpisodes;
- (NSString *)imageURL;
- (bool)isExplicit;
- (bool)isNotSubscribable;
- (NSArray *)offers;
- (NSString *)podcastStoreId;
- (NSString *)provider;
- (NSString *)resolvedFeedURL;
- (NSString *)shareURL;
- (NSString *)showSpecificUpsellCopy;
- (NSString *)showType;
- (NSString *)title;
- (NSString *)uberArtworkTextPrimaryColor;
- (NSString *)uberArtworkTextQuaternaryColor;
- (NSString *)uberArtworkTextSecondaryColor;
- (NSString *)uberArtworkTextTertiaryColor;
- (NSString *)uberBackgroundImageURL;
- (NSString *)uberBackgroundJoeColor;
- (NSString *)updatedFeedURL;
- (NSString *)webpageURL;

@end
