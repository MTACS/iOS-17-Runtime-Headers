
@protocol CSCoverSheetViewControllerDelegate <NSObject>

@required

- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 requestsTouchIDDisabled:(bool)arg2 forReason:(NSString *)arg3;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 requestsTransientOverlaysDismissedAnimated:(bool)arg2;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 startSpotlightInteractiveGestureTransactionForGesture:(SBSearchGesture *)arg2;
- (void)coverSheetViewController:(void *)arg1 unlockWithRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CSCoverSheetViewController *, SBLockScreenUnlockRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)coverSheetViewControllerDidDismissInlinePasscode:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerHandleUnlockAttemptSucceeded:(CSCoverSheetViewController *)arg1;
- (bool)coverSheetViewControllerHasBeenDismissedSinceKeybagLock:(CSCoverSheetViewController *)arg1;
- (bool)coverSheetViewControllerHasSecureApp:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerIrisPlayingDidFinish:(CSCoverSheetViewController *)arg1;
- (bool)coverSheetViewControllerIsPasscodeVisible:(CSCoverSheetViewController *)arg1;
- (bool)coverSheetViewControllerIsShowingSecureApp:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerShouldDismissContextMenu:(CSCoverSheetViewController *)arg1;
- (bool)coverSheetViewControllerShouldPreserveOrientationForExternalTransition:(CSCoverSheetViewController *)arg1;
- (bool)coverSheetViewControllerTraitsArbiterOrientationActuationEnabled:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerWillPresentInlinePasscode:(CSCoverSheetViewController *)arg1;
- (void)coverSheetWindowedAccessoryViewControllerDidDismiss:(CSCoverSheetViewController *)arg1;
- (void)coverSheetWindowedAccessoryViewControllerDidPresent:(CSCoverSheetViewController *)arg1;

@end
