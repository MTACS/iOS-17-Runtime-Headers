
@protocol SBLockScreenEmergencyCallViewControllerDelegate <NSObject>

@required

- (void)dismissEmergencyCallViewController:(SBLockScreenEmergencyCallViewController *)arg1;
- (void)emergencyCallViewController:(SBLockScreenEmergencyCallViewController *)arg1 didExitWithError:(NSError *)arg2;

@end
