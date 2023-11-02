
@protocol SBDeviceApplicationSceneOverlayViewProviderDelegate

@required

- (void)activateOverlayForViewProvider:(SBDeviceApplicationSceneOverlayViewProvider *)arg1;
- (void)deactivateOverlayForViewProvider:(SBDeviceApplicationSceneOverlayViewProvider *)arg1;
- (TRAParticipant *)initialTraitsParticipantForOverlayViewProvider:(SBDeviceApplicationSceneOverlayViewProvider *)arg1;
- (bool)overlayViewProviderIsHostedInNonrotatingWindow:(SBDeviceApplicationSceneOverlayViewProvider *)arg1;
- (bool)overlayViewProviderIsHostedInSecureWindow:(SBDeviceApplicationSceneOverlayViewProvider *)arg1;
- (bool)overlayViewProviderRendersWhileLocked:(SBDeviceApplicationSceneOverlayViewProvider *)arg1;
- (SBWindowScene *)windowSceneForOverlayViewProvider:(SBDeviceApplicationSceneOverlayViewProvider *)arg1;

@end
