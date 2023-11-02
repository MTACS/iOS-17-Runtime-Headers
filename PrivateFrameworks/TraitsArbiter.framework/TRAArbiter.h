
@interface TRAArbiter : NSObject <BSDescriptionProviding> {
    NSMutableDictionary * _acquiredParticipantsByPreferencesType;
    NSMutableDictionary * _acquiredParticipantsByUniqueIdentifier;
    NSSet * _allStagesRoles;
    NSSet * _ambientPresentationStageRoles;
    NSMutableArray * _arbiterNeedsUpdateReasons;
    <TRAArbiterDrawingDataSource> * _drawingDataSource;
    <TRAArbiterInputsDataSource> * _inputsDataSource;
    TRAArbitrationInputsValidationStage * _inputsValidationStage;
    TRAArbitrationInputs * _lastRawInputs;
    TRAArbitrationInputs * _lastValidatedInputs;
    NSMutableDictionary * _liveRolesCounter;
    NSHashTable * _observers;
    NSSet * _orientationStageRoles;
    NSMutableSet * _participantsNeedingUpdate;
    NSArray * _preferencesResolutionStages;
    TRAArbiterUpdateOrientationResolutionPolicySpecifier * _resolutionUpdateOrientationSpecifier;
    <BSInvalidatable> * _stateDumpHandle;
    NSMutableSet * _updatedParticipants;
    NSSet * _userInterfaceStyleStageRoles;
    NSSet * _zOrderStageRoles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <TRAArbiterDrawingDataSource> *drawingDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <TRAArbiterInputsDataSource> *inputsDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addOrientationResolutionPolicySpecifierForClientContext:(id)arg1;
- (id)_defaultUpdateContextWithReason:(id)arg1 animatable:(bool)arg2;
- (void)_inputsValidationStageDidUpdateValidators:(id)arg1;
- (void)_invalidateParticipant:(id)arg1;
- (id)_newOrderedPreferencesResolutionStagesWithRolesProvider:(id)arg1;
- (id)_newUniqueIdentifierForRole:(id)arg1;
- (void)_participantDidUpdatePreferences:(id)arg1;
- (void)_participantDidUpdateSettings:(id)arg1;
- (void)_preferencesResolutionStageDidUpdateComponents:(id)arg1 animate:(bool)arg2;
- (void)_removeForceResolutionSpecifier;
- (id)_resolutionStageWithType:(long long)arg1;
- (void)_setNeedsUpdateArbitrationWithClientContext:(id)arg1 defaultContext:(id)arg2;
- (void)_setNeedsUpdateArbitrationWithReason:(id)arg1 animated:(bool)arg2;
- (id)_setupStateDump;
- (void)_updateArbitrationWithClientContext:(id)arg1 defaultContext:(id)arg2;
- (id)acquireParticipantWithRole:(id)arg1 delegate:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)ambientPresentationResolutionStage;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)drawingDataSource;
- (id)initWithRolesProvider:(id)arg1 inputsDataSource:(id)arg2 drawingDataSource:(id)arg3;
- (id)inputsDataSource;
- (id)inputsValidationStage;
- (void)noteArbiterDidCompleteTransitionWithContext:(id)arg1;
- (void)noteArbiterWillBeginTransitionWithContext:(id)arg1;
- (id)orientationResolutionStage;
- (void)removeObserver:(id)arg1;
- (void)setNeedsUpdateArbitrationWithContext:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateArbitrationIfNeeded;
- (id)userInterfaceStyleResolutionStage;
- (id)zOrderResolutionStage;

@end
