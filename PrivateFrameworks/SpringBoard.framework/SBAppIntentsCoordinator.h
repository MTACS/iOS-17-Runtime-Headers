
@interface SBAppIntentsCoordinator : NSObject <SBINAppIntentsCoordinatorDelegate, SBSystemActionDataSourceOverriding, SBSystemActionPreviewProviding> {
    NSArray * _allPreviewingActionIdentifiers;
    SBCameraActivationManager * _cameraActivationManager;
    SBINAppIntentsCoordinator * _clientCoordinator;
    SBFlashlightActivityManager * _flashlightActivityManager;
    SBFocusActivityManager * _focusActivityManager;
    SBRingerControl * _ringerControl;
    NSDictionary * _systemImageNamesForDefaultPreviewsForActionIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appIntentsCoordinator:(id)arg1 performAppIntent:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)showPreviewForAction:(id)arg1 withContext:(id)arg2;
- (id)soundForPerformingActionWithIdentifier:(id)arg1;
- (id)systemActionDataSource:(id)arg1 overrideActionForAction:(id)arg2;
- (id)systemImageNameForDefaultPreviewForActionWithIdentifier:(id)arg1;
- (bool)wantsPreviewForActionWithIdentifier:(id)arg1;

@end
