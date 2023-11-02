
@interface SBInCallTransientOverlayManager : NSObject

- (id)_newAlertDefinition;
- (id)_remoteTransientOverlaySessionManager;
- (void)presentTransientOverlay;
- (void)presentTransientOverlayForActivityContinuationWithActivityIdentifier:(id)arg1;
- (void)presentTransientOverlayForUILock;

@end
