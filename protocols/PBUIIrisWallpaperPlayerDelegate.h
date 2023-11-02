
@protocol PBUIIrisWallpaperPlayerDelegate <NSObject>

@optional

- (void)irisWallpaperPlayer:(id <PBUIIrisWallpaperPlaying>)arg1 didReplaceGestureRecognizer:(UIGestureRecognizer *)arg2 withGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)irisWallpaperPlayerIsInteractingDidChange:(id <PBUIIrisWallpaperPlaying>)arg1;
- (void)irisWallpaperPlayerPlaybackStateDidChange:(id <PBUIIrisWallpaperPlaying>)arg1;

@end
