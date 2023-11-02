
@protocol CNComposeHeaderViewDelegate <NSObject>

@optional

- (void)composeHeaderView:(CNComposeHeaderView *)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeHeaderViewClicked:(CNComposeHeaderView *)arg1;
- (void)composeHeaderViewDidChangeValue:(CNComposeHeaderView *)arg1;
- (void)composeHeaderViewDidConfirmValue:(CNComposeHeaderView *)arg1;

@end
