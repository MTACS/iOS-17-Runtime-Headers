
@protocol SBFOverlayObserving

@required

- (void)overlayController:(id <SBFOverlayControlling>)arg1 didChangePresentationProgress:(double)arg2 newPresentationProgress:(double)arg3 fromLeading:(bool)arg4;
- (void)overlayController:(id <SBFOverlayControlling>)arg1 visibilityDidChange:(bool)arg2;
- (void)overlayControllerDidBeginChangingPresentationProgress:(id <SBFOverlayControlling>)arg1;

@end
