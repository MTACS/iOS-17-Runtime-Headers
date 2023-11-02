
@protocol AAUIBadgeViewDrawable <NSObject>

@required

- (UIImage *)backTextureImage;
- (void)cleanupAfterSnapshot;
- (AAUIBadgeModelConfiguration *)configuration;
- (id)initUsingEarnedShader:(bool)arg1 delegate:(id <AAUIBadgeViewDrawableDelegate>)arg2;
- (bool)isPaused;
- (void)resizeBadgeForCurrentViewSize;
- (void)setBackTextureImage:(UIImage *)arg1;
- (void)setConfiguration:(AAUIBadgeModelConfiguration *)arg1;
- (void)setPaused:(bool)arg1;
- (UIImage *)snapshot;
- (UIView *)view;

@end
