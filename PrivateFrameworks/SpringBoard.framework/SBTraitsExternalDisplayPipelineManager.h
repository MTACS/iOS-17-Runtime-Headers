
@interface SBTraitsExternalDisplayPipelineManager : SBTraitsPipelineManager <SBTraitsParticipantDelegate, TRAArbiterInputsDataSource> {
    TRAParticipant * _activeOrientationParticipant;
    TRAArbitrationInputs * _inputs;
    SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider * _rolesAndDefaultPoliciesProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TRAArbitrationInputs *inputs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_noteInputsNeedUpdateWithAnimationSettings:(id)arg1 fence:(id)arg2 reason:(id)arg3;
- (void)_updateInputsForCurrentUserInterfaceStyle;
- (id)ambientPresentationStageRoles;
- (void)didChangeSettingsForParticipant:(id)arg1 context:(id)arg2;
- (id)init;
- (id)inputs;
- (id)orientationStageRoles;
- (void)setupDefaultPipelineForArbiter:(id)arg1;
- (void)updatePreferencesForParticipant:(id)arg1 updater:(id)arg2;
- (void)userInterfaceStyleDidUpdateWithAnimationSettings:(id)arg1 fence:(id)arg2;
- (id)userInterfaceStyleStageRoles;
- (id)zOrderStageRoles;

@end
