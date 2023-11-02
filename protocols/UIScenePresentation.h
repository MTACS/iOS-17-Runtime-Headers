
@protocol UIScenePresentation <NSObject>

@required

- (UIView *)backgroundView;
- (<UIScenePresenter> *)presenter;
- (void)setBackgroundView:(UIView *)arg1;

@end
