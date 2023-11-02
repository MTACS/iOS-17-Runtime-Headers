
@protocol SearchUICardViewDelegate <NSObject>

@optional

- (void)cardViewController:(UIViewController *)arg1 preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3;
- (NSArray *)customInteractionsForCardSection:(SFCardSection *)arg1;
- (CALayer *)customLayerForCardSection:(SFCardSection *)arg1;
- (UIViewController *)customViewControllerForCardSection:(SFCardSection *)arg1;
- (void)presentViewController:(UIViewController *)arg1;

@end
