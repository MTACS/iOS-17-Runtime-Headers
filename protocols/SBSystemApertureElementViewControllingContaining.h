
@protocol SBSystemApertureElementViewControllingContaining <NSObject>

@required

- (UIViewController<SAUIElementViewControlling> *)elementViewController;
- (UIViewController<SAUIElementViewControlling> *)outgoingElementViewController;
- (void)setElementViewController:(UIViewController<SAUIElementViewControlling> *)arg1;

@end
