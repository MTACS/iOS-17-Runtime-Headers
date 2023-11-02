
@interface PBUIWallpaperDefaultsDomain : BSAbstractDefaultDomain

@property (nonatomic, retain) NSDate *dateIrisWallpaperLastPlayed;
@property (nonatomic, retain) NSDate *dateWallpaperLastChanged;
@property (nonatomic) bool enableWallpaperDimming;
@property (nonatomic) NSDictionary *homeScreenWallpapers;
@property (nonatomic) unsigned long long irisWallpaperPlayCount;
@property (nonatomic, readonly) bool legacyUsesUniqueHomeScreenWallpaper;
@property (nonatomic) NSDictionary *lockScreenWallpapers;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;
- (id)init;

@end
