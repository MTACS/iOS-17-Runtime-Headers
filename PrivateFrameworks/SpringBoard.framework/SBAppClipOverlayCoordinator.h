
@interface SBAppClipOverlayCoordinator : NSObject {
    NSMutableSet * _overlayViewControllers;
    NSMapTable * _participantForViewController;
}

- (void).cxx_destruct;
- (id)_existingOverlayViewControllerForWebClipIdentifier:(id)arg1;
- (id)init;
- (id)overlayViewControllerForBundleIdentifier:(id)arg1 webClipIdentifier:(id)arg2 participant:(id)arg3;
- (void)participant:(id)arg1 didSurrenderViewController:(id)arg2;

@end
