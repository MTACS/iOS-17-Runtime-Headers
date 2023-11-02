
@interface FCNotificationArticleHeadline : FCHeadline <FCFeedPersonalizingItem> {
    NSString * _accessoryText;
    NSArray * _allowedStorefrontIDs;
    NSString * _articleID;
    NSDictionary * _articlePayload;
    FCAssetHandle * _articleRecirculationConfigAssetHandle;
    FCAssetManager * _assetManager;
    long long  _backendArticleVersion;
    NSArray * _blockedStorefrontIDs;
    long long  _bodyTextLength;
    bool  _boundToContext;
    bool  _bundlePaid;
    NSString * _callToActionText;
    NSString * _changeEtag;
    NSNumber * _channelCohortScoresCTR;
    NSString * _clusterID;
    unsigned long long  _contentType;
    NSURL * _contentURL;
    FCCoverArt * _coverArt;
    bool  _deleted;
    bool  _disableBookmarking;
    bool  _disableTapToChannel;
    bool  _featureCandidate;
    NSData * _flintDocumentPrefetchedData;
    NSString * _flintDocumentUrlString;
    NSArray * _flintFontResourceIDs;
    NSNumber * _globalCohortScoresCTR;
    bool  _hasThumbnail;
    bool  _hiddenFromAutoFavorites;
    bool  _hiddenFromFeeds;
    bool  _hideModalCloseButton;
    NSArray * _iAdCategories;
    NSArray * _iAdKeywords;
    NSArray * _iAdSectionIDs;
    NSString * _identifier;
    bool  _isDraft;
    bool  _isLocalDraft;
    bool  _issueOnly;
    NSDate * _lastFetchedDate;
    NSDate * _lastModifiedDate;
    double  _layeredThumbnailAspectRatio;
    NSString * _layeredThumbnailJSON;
    NSArray * _linkedArticleIDs;
    NSArray * _linkedIssueIDs;
    long long  _minimumNewsVersion;
    NSArray * _moreFromPublisherArticleIDs;
    FCArticleAudioTrack * _narrativeTrack;
    FCArticleAudioTrack * _narrativeTrackSample;
    NSString * _narrativeTrackTextRanges;
    bool  _needsRapidUpdates;
    bool  _paid;
    bool  _pressRelease;
    NSString * _primaryAudience;
    NSDate * _publishDate;
    long long  _publisherArticleVersion;
    NSArray * _publisherSpecifiedArticleIDs;
    bool  _reduceVisibility;
    NSString * _referencedArticleID;
    NSArray * _relatedArticleIDs;
    unsigned long long  _role;
    NSURL * _routeURL;
    NSString * _shortExcerpt;
    bool  _showBundleSoftPaywall;
    <FCChannelProviding> * _sourceChannel;
    NSString * _sourceName;
    bool  _sponsored;
    FCTopStoriesStyleConfiguration * _storyStyle;
    unsigned long long  _storyType;
    NSString * _surfacedByArticleListID;
    FCHeadlineThumbnail * _thumbnail;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailFocalFrame;
    FCHeadlineThumbnail * _thumbnailHQ;
    FCHeadlineThumbnail * _thumbnailLQ;
    FCHeadlineThumbnail * _thumbnailMedium;
    FCHeadlineThumbnail * _thumbnailUltraHQ;
    NSString * _title;
    NSArray * _topicCohortScoresCTRs;
    NSArray * _topicIDs;
    NSArray * _topics;
    bool  _useTransparentNavigationBar;
    double  _videoDuration;
    NSURL * _videoURL;
    bool  _webConverted;
    bool  _webEmbedsEnabled;
}

@property (getter=isANF, nonatomic, readonly) bool anf;
@property (nonatomic, retain) NSDictionary *articlePayload;
@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, readonly) long long bodyTextLength;
@property (getter=isBundlePaid, nonatomic, readonly) bool bundlePaid;
@property (nonatomic, retain) NSString *changeEtag;
@property (nonatomic, retain) NSNumber *channelCohortScoresCTR;
@property (nonatomic, readonly, copy) NSString *clusterID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration *expirationData;
@property (nonatomic, retain) NSData *flintDocumentPrefetchedData;
@property (nonatomic, retain) NSString *flintDocumentUrlString;
@property (nonatomic, retain) NSArray *flintFontResourceIDs;
@property (nonatomic, readonly) NSData *float16FullBodyEncoding;
@property (nonatomic, readonly) NSData *float16TitleEncoding;
@property (nonatomic, retain) NSNumber *globalCohortScoresCTR;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (nonatomic, readonly) double globalUserFeedback;
@property (nonatomic, readonly) unsigned long long halfLife;
@property (nonatomic, readonly) unsigned long long halfLifeOverride;
@property (nonatomic, readonly) bool hasAudioTrack;
@property (nonatomic, readonly) bool hasGlobalUserFeedback;
@property (nonatomic, readonly) bool hasThumbnail;
@property (nonatomic, readonly) bool hasVideo;
@property (readonly) unsigned long long hash;
@property (getter=isHiddenFromAutoFavorites, nonatomic, readonly) bool hiddenFromAutoFavorites;
@property (nonatomic, readonly, copy) NSArray *iAdCategories;
@property (nonatomic, readonly) bool isEvergreen;
@property (nonatomic, readonly) bool isFeatureCandidate;
@property (nonatomic, readonly) bool isFeatured;
@property (nonatomic, readonly, copy) NSString *itemID;
@property (nonatomic, readonly, copy) NSString *language;
@property (getter=isPaid, nonatomic, readonly) bool paid;
@property (nonatomic, readonly, copy) NSDate *publishDate;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (nonatomic, readonly, copy) NSString *publisherID;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (nonatomic, readonly) bool reduceVisibility;
@property (retain) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property (nonatomic, readonly, copy) NSString *sourceFeedID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *thumbnailPerceptualHash;
@property (nonatomic, retain) NSArray *topicCohortScoresCTRs;
@property (nonatomic, readonly, copy) NSArray *topicIDs;
@property (nonatomic, readonly, copy) NSArray *topics;
@property (nonatomic, readonly) bool webConverted;

- (void).cxx_destruct;
- (id)accessoryText;
- (id)allowedStorefrontIDs;
- (id)articleID;
- (id)articlePayload;
- (id)articleRecirculationConfigAssetHandle;
- (id)assetManager;
- (long long)backendArticleVersion;
- (id)blockedStorefrontIDs;
- (long long)bodyTextLength;
- (id)callToActionText;
- (id)changeEtag;
- (id)channelCohortScoresCTR;
- (id)clusterID;
- (unsigned long long)contentType;
- (id)contentURL;
- (id)contentWithContext:(id)arg1;
- (id)coverArt;
- (bool)disableBookmarking;
- (bool)disableTapToChannel;
- (void)enumerateTopicCohortsWithBlock:(id /* block */)arg1;
- (void)enumerateTopicConversionStatsWithBlock:(id /* block */)arg1;
- (id)flintDocumentPrefetchedData;
- (id)flintDocumentUrlString;
- (id)flintFontResourceIDs;
- (id)generateFlintDocumentAssetHandleForUrlString:(id)arg1 prefetchedData:(id)arg2 withAssetManager:(id)arg3;
- (id)generateThumbnailAssetHandleForUrlString:(id)arg1 withAssetManager:(id)arg2;
- (id)globalCohortScoresCTR;
- (id)globalCohorts;
- (id)globalConversionStats;
- (unsigned long long)halfLife;
- (bool)hasGlobalUserFeedback;
- (bool)hasThumbnail;
- (bool)hasVideo;
- (bool)hideModalCloseButton;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)identifier;
- (id)initWithArticlePayload:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3;
- (bool)isANF;
- (bool)isBoundToContext;
- (bool)isBundlePaid;
- (bool)isDeleted;
- (bool)isDraft;
- (bool)isFeatureCandidate;
- (bool)isHiddenFromAutoFavorites;
- (bool)isHiddenFromFeeds;
- (bool)isIssueOnly;
- (bool)isLocalDraft;
- (bool)isPaid;
- (bool)isPressRelease;
- (bool)isSponsored;
- (bool)isValid;
- (id)itemID;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (double)layeredThumbnailAspectRatio;
- (id)layeredThumbnailJSON;
- (id)linkedArticleIDs;
- (id)linkedIssueIDs;
- (long long)minimumNewsVersion;
- (id)moreFromPublisherArticleIDs;
- (id)narrativeTrack;
- (id)narrativeTrackSample;
- (id)narrativeTrackTextRanges;
- (bool)needsRapidUpdates;
- (id)primaryAudience;
- (id)publishDate;
- (long long)publisherArticleVersion;
- (id)publisherCohorts;
- (id)publisherConversionStats;
- (id)publisherID;
- (id)publisherSpecifiedArticleIDs;
- (id)publisherTagMetadata;
- (bool)reduceVisibility;
- (id)referencedArticleID;
- (id)relatedArticleIDs;
- (unsigned long long)role;
- (id)routeURL;
- (void)setAccessoryText:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setArticlePayload:(id)arg1;
- (void)setAssetManager:(id)arg1;
- (void)setCallToActionText:(id)arg1;
- (void)setChangeEtag:(id)arg1;
- (void)setChannelCohortScoresCTR:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setFlintDocumentPrefetchedData:(id)arg1;
- (void)setFlintDocumentUrlString:(id)arg1;
- (void)setFlintFontResourceIDs:(id)arg1;
- (void)setGlobalCohortScoresCTR:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRole:(unsigned long long)arg1;
- (void)setShortExcerpt:(id)arg1;
- (void)setSourceChannel:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSponsored:(bool)arg1;
- (void)setStoryStyle:(id)arg1;
- (void)setStoryType:(unsigned long long)arg1;
- (void)setSurfacedByArticleListID:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailFocalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setThumbnailHQ:(id)arg1;
- (void)setThumbnailLQ:(id)arg1;
- (void)setThumbnailMedium:(id)arg1;
- (void)setThumbnailUltraHQ:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicCohortScoresCTRs:(id)arg1;
- (id)shortExcerpt;
- (bool)showBundleSoftPaywall;
- (id)sourceChannel;
- (id)sourceFeedID;
- (id)sourceName;
- (id)storyStyle;
- (unsigned long long)storyType;
- (id)surfacedByArticleListID;
- (id)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (id)thumbnailHQ;
- (id)thumbnailLQ;
- (id)thumbnailMedium;
- (id)thumbnailUltraHQ;
- (id)title;
- (id)topicCohortScoresCTRs;
- (id)topicIDs;
- (id)topics;
- (bool)useTransparentNavigationBar;
- (double)videoDuration;
- (id)videoURL;
- (bool)webConverted;
- (bool)webEmbedsEnabled;

@end