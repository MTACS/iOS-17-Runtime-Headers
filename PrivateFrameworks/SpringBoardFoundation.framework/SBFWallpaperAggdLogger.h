
@interface SBFWallpaperAggdLogger : NSObject {
    long long  _aggd_homescreenWallpaperIdentifier;
    long long  _aggd_homescreenWallpaperType;
    long long  _aggd_irisWallpaperEnabled;
    long long  _aggd_lockscreenWallpaperIdentifier;
    long long  _aggd_lockscreenWallpaperType;
    long long  _aggd_sharedWallpaper;
    PBUIWallpaperDefaultsDomain * _wallpaperDefaults;
}

- (void).cxx_destruct;
- (unsigned long long)_bucketedPlayCount;
- (void)_clearAggdKeysForLocations:(long long)arg1;
- (void)_resetPlayCountDate;
- (id)_valueString;
- (void)incrementIrisPlayCount;
- (id)init;
- (void)saveWallpaperAggdCurrentValues;
- (void)updateWallpaperAggdKeysForLocations:(long long)arg1 withHasVideo:(bool)arg2 hasProcedural:(bool)arg3 name:(id)arg4;

@end
