
@protocol WKWallpaperRepresenting <WKThumbnailRepresentable, WKHashable>

@required

- (WKWallpaperAdjustmentTraits *)adjustmentTraits;
- (NSNumber *)contentVersion;
- (NSURL *)copyWallpaperRepresentingToDestinationDirectoryURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)disableModifyingLegibilityBlur;
- (bool)disableParallax;
- (<WKFileBasedWallpaper> *)fileBasedWallpaperForLocation:(NSString *)arg1;
- (<WKFileBasedWallpaper> *)fileBasedWallpaperForLocation:(NSString *)arg1 andAppearance:(NSString *)arg2;
- (bool)hasDistinctWallpapersForLocations;
- (NSString *)identifierString;
- (bool)isAppearanceAware;
- (bool)isOffloaded;
- (NSString *)logicalScreenClass;
- (NSString *)name;
- (bool)supportsCopying;
- (<WKThumbnailRepresentable> *)thumbnailRepresentableForLocation:(NSString *)arg1;
- (<WKThumbnailRepresentable> *)thumbnailRepresentableForLocation:(NSString *)arg1 andAppearance:(NSString *)arg2;
- (<WKValueBasedWallpaper> *)valueBasedWallpaperForLocation:(NSString *)arg1;
- (<WKValueBasedWallpaper> *)valueBasedWallpaperForLocation:(NSString *)arg1 andAppearance:(NSString *)arg2;
- (unsigned long long)wallpaperBackingTypeForLocation:(NSString *)arg1;

@end
