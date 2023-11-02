
@interface PXBadgeHelper : NSObject

+ (id)_favoriteBadgeImageWithSymbolConfiguration:(id)arg1;
+ (id)autoReframingImage;
+ (id)cloudBadgeImage;
+ (id)cloudBadgeImageMini;
+ (id)contentSyndicationBadgeImage;
+ (id)contentSyndicationBadgeImageMini;
+ (id)contentSyndicationGuestAssetBadgeImage;
+ (id)debugBackgroundImageWithBadges:(unsigned long long)arg1;
+ (id)favoriteBadgeImage;
+ (id)favoriteBadgeImageMini;
+ (id)favoritesCollectionBadgeImage;
+ (id)gradientImage;
+ (id)imageForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1 style:(long long)arg2 isOverContent:(bool)arg3;
+ (id)largeSymbolConfiguration;
+ (id)leadingCornerGradientBackgroundImageForLayoutDirection:(long long)arg1;
+ (id)livePhotoBadgeShadowedImage;
+ (id)loopingBadgeImage;
+ (id)loopingBadgeTemplateImage;
+ (id)mediumBodySymbolConfiguration;
+ (id)mediumSymbolConfiguration;
+ (id)miniSymbolConfiguration;
+ (id)ocrAssetBadgeImage;
+ (id)panoramaBadgeImage;
+ (id)panoramaBadgeImageMini;
+ (id)sharedLibraryBadgeImage;
+ (id)sharedLibraryBadgeImageMini;
+ (id)smallBodySymbolConfiguration;
+ (id)smallSymbolConfiguration;
+ (id)spatialBadgeImage;
+ (id)textForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1 style:(long long)arg2;
+ (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })topLeftPrimaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1;
+ (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })topLeftSecondaryBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1;
+ (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })topRightBadgeInfoForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1;
+ (id)trailingCornerGradientBackgroundImageForLayoutDirection:(long long)arg1;

@end
