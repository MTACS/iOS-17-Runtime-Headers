
@protocol SBPowerDownViewControllerDelegate <NSObject>

@optional

- (void)powerDownViewControllerDidDisappear:(SBPowerDownViewController *)arg1;
- (void)powerDownViewControllerRequestsDismissal:(SBPowerDownViewController *)arg1;
- (void)powerDownViewControllerRequestsPowerDown:(SBPowerDownViewController *)arg1;

@end
