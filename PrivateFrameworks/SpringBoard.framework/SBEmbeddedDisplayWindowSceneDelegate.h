
@interface SBEmbeddedDisplayWindowSceneDelegate : SBAbstractWindowSceneDelegate {
    SBProductivityGestureController * _productivityGestureController;
    SBTraitsEmbeddedDisplayPipelineManager * _traitsEmbeddedPipelineManager;
    SBTraitsWindowParticipantDelegate * _traitsWindowParticipantsDelegate;
}

+ (id)_individuallyManagedRoles;
+ (id)_windowWillBecomeHiddenExemptRoles;

- (void).cxx_destruct;
- (void)_configureForConnectingWindowScene:(id)arg1 windowSceneContext:(id)arg2;
- (id)_pipelineManager;
- (bool)_shouldHandleWindowWillBecomeHiddenForRole:(id)arg1;
- (bool)_shouldManageParticipantWithRole:(id)arg1;
- (id)_traitsDelegateForWindowRole:(id)arg1;
- (id)init;
- (void)initializeProductivityGestureControllerIfNecessary;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;

@end
