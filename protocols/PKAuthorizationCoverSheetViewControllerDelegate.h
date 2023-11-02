
@protocol PKAuthorizationCoverSheetViewControllerDelegate <NSObject>

@required

- (void)authorizationCoverSheetViewControllerDidCompleteWithSuccess:(bool)arg1;
- (void)authorizationCoverSheetViewControllerDidGetBiometricUnavailableOrFailure;

@end
