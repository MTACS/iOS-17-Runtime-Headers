
@protocol WLCardViewDelegate <NSObject>

@optional

- (void)faceFrameDidChangeForPassView:(PKPassView *)arg1;
- (bool)passView:(PKPassView *)arg1 deleteButtonEnabledForPass:(PKPass *)arg2;
- (void)passView:(PKPassView *)arg1 deleteButtonPressedForPass:(PKPass *)arg2;
- (void)passView:(PKPassView *)arg1 didPresentPassDetailsViewController:(UIViewController *)arg2;
- (void)passView:(PKPassView *)arg1 willPresentPassDetailsViewController:(UIViewController *)arg2;
- (void)passViewDidResize:(PKPassView *)arg1 animated:(bool)arg2;
- (void)passViewExpandButtonTapped:(PKPassView *)arg1;
- (void)passViewTapped:(PKPassView *)arg1;

@end
