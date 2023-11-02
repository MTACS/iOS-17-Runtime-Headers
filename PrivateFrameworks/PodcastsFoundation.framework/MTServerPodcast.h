
@interface MTServerPodcast : PodcastsFoundation.ServerPodcastBase <MTFeedPodcast, PodcastsFoundation.MediaObject> {
    void episodes;
}

@property (nonatomic, readonly) NSString *artworkPrimaryColor;
@property (nonatomic, readonly) NSString *artworkTemplateURL;
@property (nonatomic, readonly) NSString *artworkTextPrimaryColor;
@property (nonatomic, readonly) NSString *artworkTextQuaternaryColor;
@property (nonatomic, readonly) NSString *artworkTextSecondaryColor;
@property (nonatomic, readonly) NSString *artworkTextTertiaryColor;
@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) <MTFeedChannel> *channelItem;
@property (nonatomic, readonly) NSString *displayType;
@property (nonatomic, readonly) NSString *feedDescription;
@property (nonatomic, readonly) NSString *globalImageURL;
@property (nonatomic, readonly) bool hasEpisodes;
@property (nonatomic, readonly) NSString *imageURL;
@property (nonatomic, readonly) bool isExplicit;
@property (nonatomic, readonly) bool isNotSubscribable;
@property (nonatomic, readonly) NSArray *offers;
@property (nonatomic, readonly) NSString *podcastStoreId;
@property (nonatomic, readonly) NSString *provider;
@property (nonatomic, readonly) NSString *resolvedFeedURL;
@property (nonatomic, readonly) NSString *shareURL;
@property (nonatomic, readonly) NSString *showSpecificUpsellCopy;
@property (nonatomic, readonly) NSString *showType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uberArtworkTextPrimaryColor;
@property (nonatomic, readonly) NSString *uberArtworkTextQuaternaryColor;
@property (nonatomic, readonly) NSString *uberArtworkTextSecondaryColor;
@property (nonatomic, readonly) NSString *uberArtworkTextTertiaryColor;
@property (nonatomic, readonly) NSString *uberBackgroundImageURL;
@property (nonatomic, readonly) NSString *uberBackgroundJoeColor;
@property (nonatomic, readonly) NSString *updatedFeedURL;
@property (nonatomic, readonly) NSString *webpageURL;

- (void).cxx_destruct;
- (id)artworkPrimaryColor;
- (id)artworkTemplateURL;
- (id)artworkTextPrimaryColor;
- (id)artworkTextQuaternaryColor;
- (id)artworkTextSecondaryColor;
- (id)artworkTextTertiaryColor;
- (id)author;
- (id)category;
- (id)channelItem;
- (id)displayType;
- (id)feedDescription;
- (id)globalImageURL;
- (bool)hasEpisodes;
- (id)imageURL;
- (bool)isExplicit;
- (bool)isNotSubscribable;
- (id)offers;
- (id)podcastStoreId;
- (id)provider;
- (id)resolvedFeedURL;
- (id)shareURL;
- (id)showSpecificUpsellCopy;
- (id)showType;
- (id)title;
- (id)toFeed;
- (id)uberArtworkTextPrimaryColor;
- (id)uberArtworkTextQuaternaryColor;
- (id)uberArtworkTextSecondaryColor;
- (id)uberArtworkTextTertiaryColor;
- (id)uberBackgroundImageURL;
- (id)uberBackgroundJoeColor;
- (id)updatedFeedURL;
- (id)webpageURL;

@end
