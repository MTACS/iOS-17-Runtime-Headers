
@protocol _SBHUDHostViewControllerDelegate <NSObject>

@optional

- (void)hudViewController:(_SBHUDHostViewController *)arg1 didDismissHUD:(_SBHUDModel *)arg2;
- (void)hudViewController:(_SBHUDHostViewController *)arg1 didPresentHUD:(_SBHUDModel *)arg2;
- (void)hudViewController:(_SBHUDHostViewController *)arg1 willDismissHUD:(_SBHUDModel *)arg2;
- (void)hudViewController:(_SBHUDHostViewController *)arg1 willPresentHUD:(_SBHUDModel *)arg2;

@end
