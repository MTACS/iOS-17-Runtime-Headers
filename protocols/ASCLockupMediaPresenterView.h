
@protocol ASCLockupMediaPresenterView <NSObject>

@required

- (struct CGSize { double x1; double x2; })preferredScreenshotSize;
- (void)setImage:(UIImage *)arg1 atIndex:(long long)arg2;
- (void)setScreenshots:(ASCScreenshots *)arg1 andTrailers:(ASCTrailers *)arg2;
- (void)setVideoView:(ASCVideoView *)arg1;

@end
