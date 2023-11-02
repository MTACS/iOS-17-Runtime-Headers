
@interface SBFWallpaperConfiguration : PBUIWallpaperConfiguration

@property (nonatomic, readonly) SBFWallpaperImage *wallpaperImage;
@property (nonatomic, readonly, copy) SBFWallpaperOptions *wallpaperOptions;

- (id)wallpaperImage;
- (id)wallpaperOptions;

@end
