
@interface SBFWallpaperCoreAnalyticsLogger : NSObject {
    unsigned long long  _ageOfWallpaper;
    NSString * _homeName;
    NSString * _homeType;
    bool  _irisEnabled;
    NSString * _lockName;
    NSString * _lockType;
    bool  _sharedWallpaper;
    PBUIWallpaperDefaultsDomain * _wallpaperDefaultsDomain;
}

@property (nonatomic) unsigned long long ageOfWallpaper;

- (void).cxx_destruct;
- (unsigned long long)ageOfWallpaper;
- (id)init;
- (id)initWithWallpaperDefaultsDomain:(id)arg1;
- (void)saveStateOfWallpaperToCoreAnalytics:(long long)arg1 withHasVideo:(bool)arg2 hasProcedural:(bool)arg3 name:(id)arg4;
- (void)sendStateOfWallpaperToCoreAnalytics;
- (void)setAgeOfWallpaper:(unsigned long long)arg1;

@end
