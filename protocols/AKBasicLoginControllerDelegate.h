
@protocol AKBasicLoginControllerDelegate <NSObject>

@required

- (void)basicLoginControllerDidDismiss:(UIViewController *)arg1;
- (void)basicLoginControllerDidPresent:(UIViewController *)arg1;
- (void)basicLoginControllerWillDismiss:(UIViewController *)arg1;

@end
