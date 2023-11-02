
@interface SBHideSharePlayContentFromSharedScreenController : NSObject <SBBannerManagerTransitionObserver, SBDraggingSystemObserver, SBMousePointerHardwareConnectionObserver> {
    NSMutableSet * _activeAssertions;
    CALayer * _cloneTerminatingLayer;
    UIWindow * _cloneTerminatingWindow;
    bool  _isControlCenterFullyPresentedOnMainDisplay;
    bool  _isObservingPIPWindowLevelsAndVisibility;
    long long  _numberOfActiveDragSessions;
    UIViewController * _pipViewControllerBeingHiddenWithDisableUpdateMask;
    <BSInvalidatable> * _simulatedAssertion;
    NSHashTable * _trackedPresentables;
    NSHashTable * _viewControllersWithDisableUpdateMasks;
    NSHashTable * _windowsBeingHiddenWithDisableUpdateMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAssertion:(id)arg1;
- (bool)_canShareDaemonScenes;
- (double)_coverSheetWindowLevel;
- (bool)_deviceHasDaemonSceneThatShouldBeShared;
- (bool)_deviceHasDaemonSceneThatShouldBeSharedIfPossible;
- (void)_handleControlCenterDidPresent;
- (void)_handleControlCenterWillDismiss;
- (bool)_isCoverSheetFullyPresented;
- (bool)_isCoverSheetVisible;
- (bool)_isPipViewControllerToHideOnMainDisplay;
- (id)_pipViewControllerToHide;
- (void)_removeAssertion:(id)arg1;
- (void)_resolveHidingBehavior;
- (void)_startHidingViewControllerFromClonedDisplaysIfNeeded:(id)arg1;
- (void)_startHidingWindowFromClonedDisplaysIfNeeded:(id)arg1;
- (void)_startObservingForActiveHideAssertionIfNeeded;
- (void)_startTrackingPresentable:(id)arg1;
- (void)_stopHidingViewControllerFromClonedDisplaysIfNeeded:(id)arg1;
- (void)_stopHidingWindowFromClonedDisplaysIfNeeded:(id)arg1;
- (void)_stopObservingForActiveHideAssertionIfNeeded;
- (void)_stopTrackingPresentable:(id)arg1;
- (id)_systemNotesWindow;
- (void)_windowVisibilityDidChange:(id)arg1;
- (id)acquireHideSharePlayContentFromClonedDisplaysAssertionForReason:(id)arg1;
- (void)bannerManager:(id)arg1 willDismissPresentable:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)bannerManager:(id)arg1 willPresentPresentable:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)bannerManagerDidUpdateWindowLevel:(id)arg1;
- (void)dealloc;
- (void)dragSessionDidBegin:(id)arg1;
- (void)dragSessionDidEnd:(id)arg1;
- (id)init;
- (void)mousePointerManager:(id)arg1 hardwarePointingDeviceAttachedDidChange:(bool)arg2;

@end
