
@protocol CNUIObjectViewController <NSObject>

@required

- (<CNUIObjectViewControllerDelegate> *)objectViewControllerDelegate;
- (void)setObjectViewControllerDelegate:(id <CNUIObjectViewControllerDelegate>)arg1;
- (UIView *)view;

@end
