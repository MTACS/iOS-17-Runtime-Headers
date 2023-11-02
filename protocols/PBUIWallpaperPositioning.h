
@protocol PBUIWallpaperPositioning <NSObject>

@required

- (bool)isFullscreen;
- (void)setFullscreen:(bool)arg1;
- (void)setShouldMatchWallpaperPosition:(bool)arg1;
- (bool)shouldMatchWallpaperPosition;

@end
