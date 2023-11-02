
@interface SBPIPSceneContentAdapter : NSObject <SBLayoutStateTransitionObserver, SBPIPControllerAdapter> {
    SBFloatingDockWindowLevelAssertion * _dockWindowLevelAssertion;
    long long  _effectiveEnvironmentMode;
    NSMutableSet * _interruptingBundleIdentifiersSinceLastTransition;
    long long  _pipContentType;
    SBPIPController<SBPIPControllerAdapterContextProviding> * _pipController;
    SBMainDisplaySceneManager * _sceneManager;
    NSMutableSet * _trackedPIPBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_recalculateLevelAssertions;
- (long long)contentTypeForPIPController:(id)arg1;
- (id)initWithPIPContentType:(long long)arg1 sceneManager:(id)arg2;
- (bool)isPresentingPictureInPictureForPIPController:(id)arg1 applicationBundleIdentifier:(id)arg2;
- (bool)isStartingStoppingOrCancellingPictureInPictureForPIPController:(id)arg1;
- (bool)isStoppingOrCancellingPictureForPIPController:(id)arg1 applicationWithBundleIdentifier:(id)arg2 scenePersistenceIdentifier:(id)arg3;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)pipController:(id)arg1 didAddContainerViewController:(id)arg2;
- (void)pipController:(id)arg1 didUpdateEnhancedWindowingModeEnabled:(bool)arg2 windowScene:(id)arg3;
- (bool)pipController:(id)arg1 willBeginPIPInterruptionForAssertion:(id)arg2;
- (void)pipController:(id)arg1 willRemoveContainerViewController:(id)arg2;
- (void)setPIPController:(id)arg1;
- (bool)shouldStartPictureInPictureForPIPController:(id)arg1 applicationWithProcessIdentifierEnteringBackground:(int)arg2 scenePersistenceIdentifier:(id)arg3;
- (long long)tetheringModeForScenePersistenceIdentifier:(id)arg1;
- (void)windowLevelDidChangeForPIPController:(id)arg1;
- (void)windowVisibilityDidChangeForPIPController:(id)arg1;

@end
