
@protocol PBUIWallpaperConfigurationManagerDelegate <NSObject>

@required

- (void)wallpaperConfigurationManager:(PBUIWallpaperConfigurationManager *)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2;

@optional

- (bool)wallpaperConfigurationManager:(PBUIWallpaperConfigurationManager *)arg1 isVideoSupportedForVariant:(long long)arg2;
- (_UILegibilitySettings *)wallpaperConfigurationManager:(PBUIWallpaperConfigurationManager *)arg1 legibilitySettingsForVariant:(long long)arg2;

@end
