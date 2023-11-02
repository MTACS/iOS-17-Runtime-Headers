
@interface SBFWallpaperConfigurationManager : PBUIWallpaperConfigurationManager

@property (nonatomic, readonly, copy) NSArray *dataStores;

- (id)dataStores;
- (id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2;
- (id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2 wallpaperMode:(long long)arg3;

@end
