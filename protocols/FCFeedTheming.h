
@protocol FCFeedTheming <NSObject, NFCopying>

@required

- (FCColor *)adBackgroundColor;
- (FCColorGradient *)adBackgroundGradient;
- (bool)allowCustomBottomStyle;
- (FCColor *)backgroundColor;
- (double)bannerImageBaselineOffsetPercentage;
- (FCTagBanner *)bannerImageForMask;
- (FCTagBanner *)bannerImageForThemeBackground;
- (FCTagBanner *)bannerImageForWhiteBackground;
- (double)bannerImageScale;
- (FCTagBanner *)compactBannerImage;
- (FCContentColorMap *)contentColorMap;
- (FCColor *)darkStyleAdBackgroundColor;
- (FCColorGradient *)darkStyleAdBackgroundGradient;
- (FCColor *)darkStyleBackgroundColor;
- (FCColor *)darkStyleFeedBackgroundColor;
- (FCColorGradient *)darkStyleFeedBackgroundGradient;
- (FCColor *)darkStyleFeedControlColor;
- (FCColor *)darkStyleForegroundColor;
- (FCColor *)darkStyleNavigationChromeBackgroundColor;
- (FCColorGradient *)darkStyleNavigationChromeBackgroundGradient;
- (FCAssetHandle *)darkStyleNavigationChromeBackgroundImage;
- (FCAssetHandle *)darkStyleNavigationChromeBackgroundImageCompact;
- (FCAssetHandle *)darkStyleNavigationChromeBackgroundImageLarge;
- (FCColor *)darkStyleNavigationChromeSeparatorColor;
- (FCTagBanner *)defaultBannerImage;
- (FCHeadlineTemplate *)defaultHeadlineTemplate;
- (FCColor *)feedBackgroundColor;
- (FCColorGradient *)feedBackgroundGradient;
- (FCColor *)feedControlColor;
- (NSString *)feedMastheadType;
- (long long)feedType;
- (FCColor *)foregroundColor;
- (FCTextInfo *)headlineBylineTextInfo;
- (FCTextInfo *)headlineExcerptTextInfo;
- (FCTextInfo *)headlineTitleTextInfo;
- (bool)isDark;
- (bool)isWhite;
- (NSArray *)loadableFonts;
- (FCAssetHandle *)logoImageAssetHandle;
- (NSString *)name;
- (FCAssetHandle *)nameImageAssetHandle;
- (FCAssetHandle *)nameImageCompactAssetHandle;
- (FCAssetHandle *)nameImageForDarkBackgroundAssetHandle;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageForDarkBackgroundInsets;
- (struct CGSize { double x1; double x2; })nameImageForDarkBackgroundSize;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageInsets;
- (FCAssetHandle *)nameImageMaskAssetHandle;
- (struct FCEdgeInsets { double x1; double x2; double x3; double x4; })nameImageMaskInsets;
- (struct CGSize { double x1; double x2; })nameImageMaskSize;
- (struct CGSize { double x1; double x2; })nameImageSize;
- (FCColor *)navigationChromeBackgroundColor;
- (FCColorGradient *)navigationChromeBackgroundGradient;
- (FCAssetHandle *)navigationChromeBackgroundImage;
- (FCAssetHandle *)navigationChromeBackgroundImageCompact;
- (unsigned long long)navigationChromeBackgroundImageContentMode;
- (unsigned long long)navigationChromeBackgroundImageContentModeCompact;
- (unsigned long long)navigationChromeBackgroundImageContentModeLarge;
- (FCAssetHandle *)navigationChromeBackgroundImageLarge;
- (FCColor *)navigationChromeSeparatorColor;

@end
