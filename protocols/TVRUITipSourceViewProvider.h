
@protocol TVRUITipSourceViewProvider <NSObject>

@required

- (bool)canPresentTip;
- (bool)tipSourceSupportsSiri;
- (UIView *)tipSourceView;

@end
