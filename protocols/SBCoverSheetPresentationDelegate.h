
@protocol SBCoverSheetPresentationDelegate <NSObject>

@required

- (void)lockScreenViewControllerDidDismiss;
- (void)lockScreenViewControllerDidPresent;
- (void)lockScreenViewControllerRequestsUnlock;
- (void)lockScreenViewControllerWillDismiss;
- (void)lockScreenViewControllerWillPresent;

@end
