
@interface FCProxyHeadline : NSProxy <FCHeadlineProviding> {
    bool  _hasOverriddenThumbnail;
    <FCHeadlineProviding> * _headline;
    <FCHeadlineMetadata> * _overrideMetadata;
    FCTopStoriesStyleConfiguration * _overrideStoryStyle;
    unsigned long long  _overrideStoryType;
}

@property (nonatomic, readonly, copy) NSString *accessoryText;
@property (nonatomic, readonly, copy) NSArray *allowedStorefrontIDs;
@property (getter=isANF, nonatomic, readonly) bool anf;
@property (nonatomic, readonly, copy) <FCHeadlineMetadata> *appliedOverrideMetadata;
@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, readonly) FCAssetHandle *articleRecirculationConfigAssetHandle;
@property (nonatomic, readonly) <FCNativeAdProviding> *associatedAd;
@property (nonatomic, readonly, copy) NSArray *authors;
@property (nonatomic, readonly) long long backendArticleVersion;
@property (nonatomic, readonly) NSData *backingArticleRecordData;
@property (nonatomic, readonly, copy) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly) long long bodyTextLength;
@property (getter=isBoundToContext, nonatomic, readonly) bool boundToContext;
@property (getter=isBundlePaid, nonatomic, readonly) bool bundlePaid;
@property (nonatomic, readonly, copy) NSString *callToActionText;
@property (nonatomic, readonly) bool canBePurchased;
@property (nonatomic, readonly, copy) NSString *clusterID;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, copy) NSURL *contentURL;
@property (nonatomic, readonly) FCCoverArt *coverArt;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableBookmarking;
@property (nonatomic, readonly) bool disablePrerollAds;
@property (nonatomic, readonly) bool disableTapToChannel;
@property (getter=isDisplayingAsNativeAd, nonatomic, readonly) bool displayAsNativeAd;
@property (nonatomic, readonly, copy) NSDate *displayDate;
@property (nonatomic, readonly, copy) NSString *excerpt;
@property (nonatomic, readonly, copy) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration *expirationData;
@property (getter=isExplicitContent, nonatomic, readonly) bool explicitContent;
@property (getter=isFeatureCandidate, nonatomic, readonly) bool featureCandidate;
@property (nonatomic, readonly) unsigned long long feedHalfLifeMilliseconds;
@property (nonatomic, readonly, copy) NSString *feedID;
@property (nonatomic, readonly) unsigned long long feedOrder;
@property (nonatomic, readonly) NSData *float16FullBodyEncoding;
@property (nonatomic, readonly) NSData *float16TitleEncoding;
@property (getter=isFromBlockedStorefront, nonatomic, readonly) bool fromBlockedStorefront;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (nonatomic, readonly) NSDate *globalExpirationTime;
@property (nonatomic, readonly) double globalUserFeedback;
@property (nonatomic, readonly) unsigned long long halfLife;
@property (nonatomic, readonly) unsigned long long halfLifeOverride;
@property (nonatomic, readonly) bool hasAudioTrack;
@property (nonatomic, readonly) bool hasGlobalUserFeedback;
@property (nonatomic, readonly) bool hasThumbnail;
@property (nonatomic, readonly) bool hasVideo;
@property (nonatomic, readonly) bool hasVideoStillImage;
@property (readonly) unsigned long long hash;
@property (getter=isHiddenFromAutoFavorites, nonatomic, readonly) bool hiddenFromAutoFavorites;
@property (getter=isHiddenFromFeeds, nonatomic, readonly) bool hiddenFromFeeds;
@property (nonatomic, readonly) bool hideModalCloseButton;
@property (nonatomic, readonly, copy) NSArray *iAdCategories;
@property (nonatomic, readonly, copy) NSArray *iAdKeywords;
@property (nonatomic, readonly, copy) NSArray *iAdSectionIDs;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isBlockedExplicitContent;
@property (nonatomic, readonly) bool isDraft;
@property (nonatomic, readonly) bool isEvergreen;
@property (nonatomic, readonly) bool isFeatureCandidate;
@property (nonatomic, readonly) bool isFeatured;
@property (nonatomic, readonly) bool isFullTrackAvailableToAll;
@property (nonatomic, readonly) bool isLocalDraft;
@property (nonatomic, readonly) bool isTopStory;
@property (getter=isIssueOnly, nonatomic, readonly) bool issueOnly;
@property (nonatomic, readonly, copy) NSString *itemID;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) NSDate *lastFetchedDate;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) double layeredThumbnailAspectRatio;
@property (nonatomic, readonly) NSString *layeredThumbnailJSON;
@property (nonatomic, readonly, copy) NSArray *linkedArticleIDs;
@property (nonatomic, readonly, copy) NSArray *linkedIssueIDs;
@property (nonatomic, readonly, copy) NSString *localDraftPath;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly, copy) NSArray *moreFromPublisherArticleIDs;
@property (nonatomic, readonly) FCArticleAudioTrack *narrativeTrack;
@property (nonatomic, readonly, copy) NSArray *narrativeTrackBuddyArticleIDs;
@property (nonatomic, readonly) NSString *narrativeTrackPreferredUpsellVariantID;
@property (nonatomic, readonly) FCArticleAudioTrack *narrativeTrackSample;
@property (nonatomic, readonly) NSString *narrativeTrackTextRanges;
@property (nonatomic, readonly, copy) NSArray *narrators;
@property (nonatomic, readonly, copy) NSString *nativeAdCampaignData;
@property (nonatomic, readonly) bool needsRapidUpdates;
@property (nonatomic, readonly) unsigned long long order;
@property (nonatomic, readonly, copy) <FCHeadlineProviding> *originalHeadline;
@property (getter=isPaid, nonatomic, readonly) bool paid;
@property (nonatomic, readonly, copy) FCIssue *parentIssue;
@property (getter=isPressRelease, nonatomic, readonly) bool pressRelease;
@property (nonatomic, readonly, copy) NSString *primaryAudience;
@property (nonatomic, readonly, copy) NSDate *publishDate;
@property (nonatomic, readonly) unsigned long long publishDateMilliseconds;
@property (nonatomic, readonly) long long publisherArticleVersion;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (nonatomic, readonly, copy) NSString *publisherID;
@property (nonatomic, readonly) NSArray *publisherSpecifiedArticleIDs;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (nonatomic, readonly) bool reduceVisibility;
@property (nonatomic, readonly, copy) NSString *referencedArticleID;
@property (nonatomic, readonly, copy) NSArray *relatedArticleIDs;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic, readonly) NSURL *routeURL;
@property (retain) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property (nonatomic, readonly, copy) NSString *shortExcerpt;
@property (nonatomic, readonly) bool showBundleSoftPaywall;
@property (nonatomic, readonly) bool showPublisherLogo;
@property (nonatomic, readonly) bool showSubscriptionRequiredText;
@property (nonatomic, readonly, copy) <FCChannelProviding> *sourceChannel;
@property (nonatomic, readonly, copy) NSString *sourceChannelID;
@property (nonatomic, readonly, copy) NSString *sourceFeedID;
@property (nonatomic, readonly, copy) NSString *sourceName;
@property (getter=isSponsored, nonatomic, readonly) bool sponsored;
@property (nonatomic, readonly, copy) NSString *sponsoredBy;
@property (nonatomic, readonly, copy) NSArray *sportsEventIDs;
@property (nonatomic, readonly) <FCHeadlineStocksFields> *stocksFields;
@property (nonatomic, readonly) FCTopStoriesStyleConfiguration *storyStyle;
@property (nonatomic, readonly) unsigned long long storyType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *surfacedByArticleListID;
@property (nonatomic, readonly, copy) NSString *surfacedByBinID;
@property (nonatomic, readonly, copy) NSString *surfacedByChannelID;
@property (nonatomic, readonly, copy) NSString *surfacedBySectionID;
@property (nonatomic, readonly, copy) NSString *surfacedByTopicID;
@property (nonatomic, readonly) NSArray *tagsExpiration;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnail;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailFocalFrame;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailHQ;
@property (nonatomic, readonly) FCColor *thumbnailImageAccentColor;
@property (nonatomic, readonly) FCColor *thumbnailImageBackgroundColor;
@property (nonatomic, readonly) FCColor *thumbnailImagePrimaryColor;
@property (nonatomic, readonly) FCColor *thumbnailImageTextColor;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailLQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailMedium;
@property (nonatomic, readonly) NSData *thumbnailPerceptualHash;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailUltraHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidget;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property (nonatomic, readonly) double tileProminenceScore;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *titleCompact;
@property (nonatomic, readonly) unsigned long long topStoryType;
@property (nonatomic, readonly, copy) NSArray *topicIDs;
@property (nonatomic, readonly, copy) NSArray *topics;
@property (nonatomic, readonly) bool useTransparentNavigationBar;
@property (nonatomic, readonly) bool usesImageOnTopLayout;
@property (nonatomic, readonly, copy) NSString *videoCallToActionTitle;
@property (nonatomic, readonly, copy) NSURL *videoCallToActionURL;
@property (nonatomic, readonly) double videoDuration;
@property (nonatomic, readonly) FCAssetHandle *videoStillImage;
@property (nonatomic, readonly, copy) NSString *videoType;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) bool webConverted;
@property (nonatomic, readonly) bool webEmbedsEnabled;

- (void).cxx_destruct;
- (id)appliedOverrideMetadata;
- (bool)conformsToProtocol:(id)arg1;
- (id)description;
- (id)displayDate;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)hasThumbnail;
- (id)initWithHeadline:(id)arg1 overrideMetadata:(id)arg2 configuration:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)originalHeadline;
- (id)publishDate;
- (bool)respondsToSelector:(SEL)arg1;
- (id)shortExcerpt;
- (id)storyStyle;
- (unsigned long long)storyType;
- (id)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (id)thumbnailHQ;
- (id)thumbnailImageAccentColor;
- (id)thumbnailImageBackgroundColor;
- (id)thumbnailImagePrimaryColor;
- (id)thumbnailImageTextColor;
- (id)thumbnailLQ;
- (id)thumbnailMedium;
- (id)thumbnailUltraHQ;
- (id)title;

@end
