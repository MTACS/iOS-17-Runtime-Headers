
@protocol PBUIWallpaperViewInternalObserver <NSObject>

@required

- (void)wallpaperView:(PBUIWallpaperView *)arg1 didChangeZoomFactor:(double)arg2;
- (void)wallpaperViewDidChangeWantsRasterization:(PBUIWallpaperView *)arg1;
- (void)wallpaperViewDidInvalidateBlurs:(PBUIWallpaperView *)arg1;

@end
