
@protocol UserTransparencyViewControllerDelegate <NSObject>

@optional

- (void)userTransparencyViewController:(UserTransparencyViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)userTransparencyViewControllerDidDismiss:(UserTransparencyViewController *)arg1;
- (void)userTransparencyViewControllerDidLoad:(UserTransparencyViewController *)arg1;

@end
