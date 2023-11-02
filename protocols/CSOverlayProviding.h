
@protocol CSOverlayProviding <NSObject>

@required

- (bool)dismissModalContentIfVisibleAnimated:(bool)arg1;
- (<SBFOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling> *)newOverlayController;
- (bool)wantsHomeScreenOverlay;

@end
