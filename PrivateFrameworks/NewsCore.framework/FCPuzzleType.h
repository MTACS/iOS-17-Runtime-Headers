
@interface FCPuzzleType : NSObject <FCPuzzleTypeProviding> {
    NSArray * _allowedStorefrontIDs;
    NSArray * _blockedStorefrontIDs;
    FCAssetHandle * _coverImageAssetHandle;
    FCAssetHandle * _darkStyleNavigationChromeBackgroundImage;
    FCAssetHandle * _darkStyleNavigationChromeBackgroundImageCompact;
    FCAssetHandle * _darkStyleNavigationChromeBackgroundImageLarge;
    FCColor * _darkStylePuzzlePrimaryColor;
    FCColor * _darkStyleThemeColor;
    bool  _disableBlock;
    bool  _disableFollow;
    NSString * _engineResourceID;
    FCAssetHandle * _exploreTileImageAssetHandle;
    NSString * _feedMastheadType;
    FCAssetHandle * _feedNavImageAssetHandle;
    FCAssetHandle * _feedNavImageHQAssetHandle;
    NSDate * _fetchDate;
    FCColor * _groupDarkStyleTitleColor;
    FCColor * _groupTitleColor;
    NSString * _identifier;
    FCInterestToken * _interestToken;
    NSString * _language;
    NSDate * _lastModifiedDate;
    NSArray * _latestPuzzleIDs;
    NSDate * _loadDate;
    long long  _minimumNewsVersion;
    NSString * _name;
    FCAssetHandle * _nameImageAssetHandle;
    FCAssetHandle * _nameImageCompactAssetHandle;
    FCAssetHandle * _nameImageForDarkBackgroundAssetHandle;
    FCAssetHandle * _nameImageMaskAssetHandle;
    FCAssetHandle * _navigationChromeBackgroundImage;
    FCAssetHandle * _navigationChromeBackgroundImageCompact;
    FCAssetHandle * _navigationChromeBackgroundImageLarge;
    NSArray * _promotedPuzzleIDs;
    FCColor * _puzzlePrimaryColor;
    NSString * _superfeedConfigResourceID;
    FCColor * _themeColor;
    <FCPuzzleTypeThumbnailDirectoryType> * _thumbnailDirectory;
    NSString * _titleDisplayPrefix;
    NSString * _titleDisplaySuffix;
    NSString * _versionKey;
}

@property (nonatomic, readonly) FCColor *adBackgroundColor;
@property (nonatomic, readonly) FCColorGradient *adBackgroundGradient;
@property (nonatomic, readonly) bool allowCustomBottomStyle;
@property (nonatomic, readonly) FCColor *backgroundColor;
@property (nonatomic, readonly) double bannerImageBaselineOffsetPercentage;
@property (nonatomic, readonly) FCTagBanner *bannerImageForMask;
@property (nonatomic, readonly) FCTagBanner *bannerImageForThemeBackground;
@property (nonatomic, readonly) FCTagBanner *bannerImageForWhiteBackground;
@property (nonatomic, readonly) double bannerImageScale;
@property (nonatomic, readonly) FCTagBanner *compactBannerImage;
@property (nonatomic, readonly) FCContentColorMap *contentColorMap;
@property (nonatomic, readonly) FCColor *darkStyleAdBackgroundColor;
@property (nonatomic, readonly) FCColorGradient *darkStyleAdBackgroundGradient;
@property (nonatomic, readonly) FCColor *darkStyleBackgroundColor;
@property (nonatomic, readonly) FCColor *darkStyleFeedBackgroundColor;
@property (nonatomic, readonly) FCColorGradient *darkStyleFeedBackgroundGradient;
@property (nonatomic, readonly) FCColor *darkStyleFeedControlColor;
@property (nonatomic, readonly) FCColor *darkStyleForegroundColor;
@property (nonatomic, readonly) FCColor *darkStyleNavigationChromeBackgroundColor;
@property (nonatomic, readonly) FCColorGradient *darkStyleNavigationChromeBackgroundGradient;
@property (nonatomic, readonly) FCAssetHandle *darkStyleNavigationChromeBackgroundImage;
@property (nonatomic, readonly) FCAssetHandle *darkStyleNavigationChromeBackgroundImageCompact;
@property (nonatomic, readonly) FCAssetHandle *darkStyleNavigationChromeBackgroundImageLarge;
@property (nonatomic, readonly) FCColor *darkStyleNavigationChromeSeparatorColor;
@property (nonatomic, readonly) FCColor *darkStylePuzzlePrimaryColor;
@property (nonatomic, readonly) FCColor *darkStyleThemeColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) FCTagBanner *defaultBannerImage;
@property (nonatomic, readonly) FCHeadlineTemplate *defaultHeadlineTemplate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *engineResourceID;
@property (nonatomic, readonly) FCAssetHandle *exploreTileImageAssetHandle;
@property (nonatomic, readonly) FCColor *feedBackgroundColor;
@property (nonatomic, readonly) FCColorGradient *feedBackgroundGradient;
@property (nonatomic, readonly) FCColor *feedControlColor;
@property (nonatomic, readonly) NSString *feedMastheadType;
@property (nonatomic, readonly) long long feedType;
@property (nonatomic, readonly) FCColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FCTextInfo *headlineBylineTextInfo;
@property (nonatomic, readonly, copy) FCTextInfo *headlineExcerptTextInfo;
@property (nonatomic, readonly, copy) FCTextInfo *headlineTitleTextInfo;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) FCInterestToken *interestToken;
@property (nonatomic, readonly) bool isDark;
@property (nonatomic, readonly) bool isWhite;
@property (nonatomic, readonly, copy) NSArray *latestPuzzleIDs;
@property (nonatomic, readonly) NSArray *loadableFonts;
@property (nonatomic, readonly) FCAssetHandle *logoImageAssetHandle;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nameForSharing;
@property (nonatomic, readonly) FCAssetHandle *nameImageAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageCompactAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageForDarkBackgroundAssetHandle;
@property (nonatomic, readonly) struct FCEdgeInsets { double x1; double x2; double x3; double x4; } nameImageForDarkBackgroundInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } nameImageForDarkBackgroundSize;
@property (nonatomic, readonly) struct FCEdgeInsets { double x1; double x2; double x3; double x4; } nameImageInsets;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskAssetHandle;
@property (nonatomic, readonly) struct FCEdgeInsets { double x1; double x2; double x3; double x4; } nameImageMaskInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } nameImageMaskSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } nameImageSize;
@property (nonatomic, readonly) FCColor *navigationChromeBackgroundColor;
@property (nonatomic, readonly) FCColorGradient *navigationChromeBackgroundGradient;
@property (nonatomic, readonly) FCAssetHandle *navigationChromeBackgroundImage;
@property (nonatomic, readonly) FCAssetHandle *navigationChromeBackgroundImageCompact;
@property (nonatomic, readonly) unsigned long long navigationChromeBackgroundImageContentMode;
@property (nonatomic, readonly) unsigned long long navigationChromeBackgroundImageContentModeCompact;
@property (nonatomic, readonly) unsigned long long navigationChromeBackgroundImageContentModeLarge;
@property (nonatomic, readonly) FCAssetHandle *navigationChromeBackgroundImageLarge;
@property (nonatomic, readonly) FCColor *navigationChromeSeparatorColor;
@property (nonatomic, readonly, copy) NSArray *promotedPuzzleIDs;
@property (nonatomic, readonly) FCColor *puzzlePrimaryColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FCColor *themeColor;
@property (nonatomic, readonly) <FCPuzzleTypeThumbnailDirectoryType> *thumbnailDirectory;

+ (bool)isPuzzleTypeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)adBackgroundColor;
- (id)adBackgroundGradient;
- (id)adTargetingKeywords;
- (bool)allowCustomBottomStyle;
- (id)allowedStorefrontIDs;
- (id)articleRecirculationConfigJSON;
- (id)asChannel;
- (id)asPuzzleType;
- (id)asSection;
- (id)asSports;
- (id)asSportsEvent;
- (id)asTopic;
- (id)authorizationURL;
- (id)backgroundColor;
- (double)bannerImageBaselineOffsetPercentage;
- (id)bannerImageForMask;
- (id)bannerImageForThemeBackground;
- (id)bannerImageForWhiteBackground;
- (double)bannerImageScale;
- (id)blockedStorefrontIDs;
- (id)compactBannerImage;
- (id)compactDisplayName;
- (id)contentColorMap;
- (long long)contentProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverImageAssetHandle;
- (id)darkStyleAdBackgroundColor;
- (id)darkStyleAdBackgroundGradient;
- (id)darkStyleBackgroundColor;
- (id)darkStyleFeedBackgroundColor;
- (id)darkStyleFeedBackgroundGradient;
- (id)darkStyleFeedControlColor;
- (id)darkStyleForegroundColor;
- (id)darkStyleNavigationChromeBackgroundColor;
- (id)darkStyleNavigationChromeBackgroundGradient;
- (id)darkStyleNavigationChromeBackgroundImage;
- (id)darkStyleNavigationChromeBackgroundImageCompact;
- (id)darkStyleNavigationChromeBackgroundImageLarge;
- (id)darkStyleNavigationChromeSeparatorColor;
- (id)darkStylePuzzlePrimaryColor;
- (id)darkStyleThemeColor;
- (id)defaultBannerImage;
- (id)defaultHeadlineTemplate;
- (bool)disableBlock;
- (bool)disableFollow;
- (id)displayName;
- (id)engineResourceID;
- (id)exploreTileImageAssetHandle;
- (id)feedBackgroundColor;
- (id)feedBackgroundGradient;
- (id)feedControlColor;
- (id)feedIDForBin:(long long)arg1;
- (id)feedMastheadType;
- (id)feedNavImageAssetHandle;
- (id)feedNavImageHQAssetHandle;
- (long long)feedType;
- (id)fetchDate;
- (id)foregroundColor;
- (id)freeFeedIDForBin:(long long)arg1;
- (id)groupDarkStyleTitleColor;
- (id)groupName;
- (id)groupTitleColor;
- (unsigned long long)groupingEligibility;
- (id)headlineBylineTextInfo;
- (id)headlineExcerptTextInfo;
- (id)headlineTitleTextInfo;
- (bool)hideAccessoryText;
- (id)highlightsArticleListID;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 engineResourceID:(id)arg3 superfeedConfigResourceID:(id)arg4 latestPuzzleIDs:(id)arg5 promotedPuzzleIDs:(id)arg6 nameImageAssetHandle:(id)arg7 nameImageCompactAssetHandle:(id)arg8 nameImageMaskAssetHandle:(id)arg9 nameImageForDarkBackgroundAssetHandle:(id)arg10 feedNavImageAssetHandle:(id)arg11 coverImageAssetHandle:(id)arg12 navigationChromeBackgroundImageHandle:(id)arg13 navigationChromeBackgroundImageCompactHandle:(id)arg14 navigationChromeBackgroundImageLargeHandle:(id)arg15 navigationChromeBackgroundDarkModeImageHandle:(id)arg16 navigationChromeBackgroundDarkModeImageCompactHandle:(id)arg17 navigationChromeBackgroundDarkModeImageLargeHandle:(id)arg18 language:(id)arg19 allowedStorefrontIDs:(id)arg20 blockedStorefrontIDs:(id)arg21 minimumNewsVersion:(long long)arg22 loadDate:(id)arg23 fetchDate:(id)arg24 lastModifiedDate:(id)arg25 exploreTileImageAssetHandle:(id)arg26 versionKey:(id)arg27 titleDisplayPrefix:(id)arg28 titleDisplaySuffix:(id)arg29 themeColor:(id)arg30 puzzlePrimaryColor:(id)arg31 darkStyleThemeColor:(id)arg32 darkStylePuzzlePrimaryColor:(id)arg33 groupTitleColor:(id)arg34 groupDarkStyleTitleColor:(id)arg35 thumbnailDirectory:(id)arg36;
- (id)initWithPuzzleType:(id)arg1 overrides:(id)arg2;
- (id)initWithPuzzleTypeRecord:(id)arg1 assetManager:(id)arg2 context:(id)arg3 interestToken:(id)arg4;
- (id)interestToken;
- (bool)isArticleReadCountReportingEnabled;
- (bool)isAuthenticationSetup;
- (bool)isAutoDarkModeEnabled;
- (bool)isBlockedExplicitContent;
- (bool)isDark;
- (bool)isDeprecated;
- (bool)isEqualToTag:(id)arg1;
- (bool)isExplicitContent;
- (bool)isHidden;
- (bool)isInternal;
- (bool)isLocal;
- (bool)isMagazine;
- (bool)isMySports;
- (bool)isNewspaper;
- (bool)isNoLongerAvailable;
- (bool)isNotificationEnabled;
- (bool)isPublic;
- (bool)isPurchaseSetup;
- (bool)isPuzzleHub;
- (bool)isPuzzleType;
- (bool)isRealTimeTrackingEnabled;
- (bool)isSandbox;
- (bool)isSensitiveTopic;
- (bool)isSports;
- (bool)isSportsEvent;
- (bool)isSubscribable;
- (bool)isWhite;
- (id)language;
- (id)lastModifiedDate;
- (id)latestPuzzleIDs;
- (id)loadDate;
- (id)loadableFonts;
- (id)logoImageAssetHandle;
- (id)magazineGenre;
- (long long)minimumNewsVersion;
- (id)name;
- (id)nameCompact;
- (id)nameForSharing;
- (id)nameImageAssetHandle;
- (id)nameImageCompactAssetHandle;
- (id)nameImageForDarkBackgroundAssetHandle;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageForDarkBackgroundInsets;
- (struct CGSize { double x1; double x2; })nameImageForDarkBackgroundSize;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageInsets;
- (id)nameImageLargeAssetHandle;
- (id)nameImageLargeMaskAssetHandle;
- (id)nameImageMaskAssetHandle;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageMaskInsets;
- (struct CGSize { double x1; double x2; })nameImageMaskSize;
- (id)nameImageMaskWidgetHQAssetHandle;
- (id)nameImageMaskWidgetLQAssetHandle;
- (struct CGSize { double x1; double x2; })nameImageSize;
- (id)navigationChromeBackgroundColor;
- (id)navigationChromeBackgroundGradient;
- (id)navigationChromeBackgroundImage;
- (id)navigationChromeBackgroundImageCompact;
- (unsigned long long)navigationChromeBackgroundImageContentMode;
- (unsigned long long)navigationChromeBackgroundImageContentModeCompact;
- (unsigned long long)navigationChromeBackgroundImageContentModeLarge;
- (id)navigationChromeBackgroundImageLarge;
- (id)navigationChromeSeparatorColor;
- (id)paidBundlePaywallConfiguration;
- (id)paidFeedIDForBin:(long long)arg1;
- (id)personalizedPaywallName;
- (void)ppt_overrideFeedID:(id)arg1;
- (id)prefetchPurchaseOffer;
- (id)primaryAudience;
- (id)promotedPuzzleIDs;
- (id)publisherPaidAuthorizationURL;
- (id)publisherPaidBundlePurchaseIDs;
- (id)publisherPaidDescriptionStrings;
- (id)publisherPaidFeldsparablePurchaseIDs;
- (bool)publisherPaidLeakyPaywallOptOut;
- (id)publisherPaidOfferableConfigurations;
- (id)publisherPaidVerificationURL;
- (bool)publisherPaidWebAccessOptIn;
- (id)publisherPaidWebAccessURL;
- (id)publisherSpecifiedArticleIDs;
- (id)publisherSpecifiedArticleIDsModifiedDate;
- (id)publisherSpecifiedArticles;
- (id)puzzlePrimaryColor;
- (id)replacementID;
- (long long)score;
- (void)setTitleDisplayPrefix:(id)arg1;
- (id)setTitleDisplayPrefixOverride:(id)arg1;
- (void)setTitleDisplaySuffix:(id)arg1;
- (id)setTitleDisplaySuffixOverride:(id)arg1;
- (id)sportsRecommendationMappings;
- (id)sportsRecommendationMappingsJSON;
- (id)stocksFields;
- (double)subscriptionRate;
- (id)subtitle;
- (id)superfeedConfigResourceID;
- (id)supergroupConfigJson;
- (id)supergroupKnobs;
- (id)supergroupKnobsJson;
- (unsigned long long)tagType;
- (id)theme;
- (id)themeColor;
- (id)thumbnailDirectory;
- (id)titleDisplayPrefix;
- (id)titleDisplaySuffix;
- (bool)useCompactNameForPersonalizedPaywall;
- (unsigned long long)userFacingTagType;
- (id)versionKey;

@end
