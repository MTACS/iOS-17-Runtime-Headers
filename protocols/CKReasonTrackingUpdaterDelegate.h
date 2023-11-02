
@protocol CKReasonTrackingUpdaterDelegate

@required

- (void)reasonTrackingUpdater:(CKReasonTrackingUpdater *)arg1 didBeginHoldingUpdatesWithInitialReason:(id)arg2;
- (void)reasonTrackingUpdater:(CKReasonTrackingUpdater *)arg1 didEndHoldingUpdatesWithFinalReason:(id)arg2;
- (void)reasonTrackingUpdater:(CKReasonTrackingUpdater *)arg1 needsUpdateForReasons:(NSCountedSet *)arg2 followingHoldForReason:(id)arg3;

@end
