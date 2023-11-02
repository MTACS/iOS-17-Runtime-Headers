
@interface SBExternalDisplayWindowSceneDelegate : SBAbstractWindowSceneDelegate {
    SBExternalDisplayCoverSheetController * _coverSheetController;
    FBSDisplayLayoutPublisher * _displayLayoutPublisher;
    <BSDefaultObserver> * _displayModeSettingsToken;
    SBWindowSceneStatusBarSettingsAssertion * _showStatusBarAssertion;
    SBTraitsExternalDisplayPipelineManager * _traitsExternalPipelineManager;
    SBTraitsWindowParticipantDelegate * _traitsWindowParticipantsDelegate;
    FBApplicationUpdateScenesTransaction * _transaction;
    SBExternalDisplayWallpaperController * _wallpaperController;
}

+ (id)_individuallyManagedRoles;

- (void).cxx_destruct;
- (void)_configureForConnectingWindowScene:(id)arg1 windowSceneContext:(id)arg2;
- (id)_pipelineManager;
- (bool)_shouldManageParticipantWithRole:(id)arg1;
- (id)_traitsDelegateForWindowRole:(id)arg1;
- (id)init;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidDisconnect:(id)arg1;

@end
