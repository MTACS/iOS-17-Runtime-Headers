
@protocol FCSportsTheming

@required

- (FCColor *)sportsEventNavigationForegroundColor;
- (FCAssetHandle *)sportsLogoImageAssetHandle;
- (FCAssetHandle *)sportsLogoImageCompactAssetHandle;
- (FCAssetHandle *)sportsLogoImageLargeAssetHandle;
- (long long)sportsLogoMastheadHorizontalPaddingOffset;
- (long long)sportsLogoMastheadLeadingOffset;
- (unsigned long long)sportsLogoMastheadVisibility;
- (FCColor *)sportsPrimaryColor;
- (FCColor *)sportsSecondaryColor;

@end
