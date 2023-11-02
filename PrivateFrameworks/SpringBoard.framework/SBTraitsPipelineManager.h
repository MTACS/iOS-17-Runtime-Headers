
@interface SBTraitsPipelineManager : NSObject <TRAArbiterDrawingDataSource, TRAArbiterInputsDataSource, TRAArbiterStagesRolesProvider> {
    TRAArbiter * _arbiter;
    UIKBArbiterClientFocusContext * _keyboardFocusContext;
    SBMedusa1oSettings * _medusaSettings;
    <SBWindowSceneDelegate> * _sceneDelegate;
}

@property (nonatomic) TRAArbiter *arbiter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TRAArbitrationInputs *inputs;
@property (nonatomic, retain) UIKBArbiterClientFocusContext *keyboardFocusContext;
@property (nonatomic) <SBWindowSceneDelegate> *sceneDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ambientPresentationStageRoles;
- (id)arbiter;
- (id)defaultOrientationAnimationSettingsAnimatable:(bool)arg1;
- (id)init;
- (id)initWithArbiter:(id)arg1 sceneDelegate:(id)arg2;
- (id)inputs;
- (id)keyboardFocusContext;
- (id)newBlockBasedOrientationPolicySpecifier:(id /* block */)arg1 forParticipant:(id)arg2;
- (id)newBlockBasedOrientationPolicySpecifier:(id /* block */)arg1 forRole:(id)arg2;
- (id)orientationStageRoles;
- (id)sceneDelegate;
- (void)setArbiter:(id)arg1;
- (void)setKeyboardFocusContext:(id)arg1;
- (void)setSceneDelegate:(id)arg1;
- (void)setupDefaultPipelineForArbiter:(id)arg1;
- (void)userInterfaceStyleDidUpdateWithAnimationSettings:(id)arg1 fence:(id)arg2;
- (id)userInterfaceStyleStageRoles;
- (id)zOrderStageRoles;

@end
