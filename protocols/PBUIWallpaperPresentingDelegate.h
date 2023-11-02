
@protocol PBUIWallpaperPresentingDelegate <NSObject>

@required

- (void)wallpaperPresenter:(id <PBUIWallpaperPresenting>)arg1 didChangeWallpaperForLocations:(long long)arg2 withConfiguration:(PBUIWallpaperConfiguration *)arg3;
- (long long)wallpaperPresenter:(id <PBUIWallpaperPresenting>)arg1 requestsOrientationWithRefresh:(bool)arg2;
- (void)wallpaperPresenterDidCompleteWallpaperChange:(id <PBUIWallpaperPresenting>)arg1;

@end
