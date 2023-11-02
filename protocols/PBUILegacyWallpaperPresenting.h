
@protocol PBUILegacyWallpaperPresenting <PBUIWallpaperPresenting>

@required

- (<PBUIIrisWallpaperPlaying> *)irisWallpaperPlayer;
- (UIView<PBUIFakeBluring> *)newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3;
- (void)preheatWallpaperForVariant:(long long)arg1;
- (void)setLockscreenOnlyWallpaperAlpha:(double)arg1;
- (void)setWallpaperHidden:(bool)arg1 variant:(long long)arg2 reason:(NSString *)arg3;
- (void)updateIrisWallpaperForInteractiveMode;
- (bool)updateIrisWallpaperForStaticMode;
- (void)updateWallpaperForLocations:(void *)arg1 wallpaperMode:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 7: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateWallpaperForLocations:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
