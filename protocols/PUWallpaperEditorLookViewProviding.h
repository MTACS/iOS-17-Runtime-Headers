
@protocol PUWallpaperEditorLookViewProviding <NSObject>

@required

- (UIView *)backgroundView;
- (UIView *)floatingView;
- (UIView *)foregroundView;

@end
