
@interface SBSwitcherTraitsAssistant : NSObject <SBTraitsParticipantDelegate> {
    SBTraitsPipelineBlockBasedPolicySpecifier * _blockBasedPolicySpecifier;
    <SBSwitcherTraitsAssistantDelegate> * _delegate;
    TRAParticipant * _guidingLandscapeOnlyParticipant;
    TRAParticipant * _guidingPortraitOnlyParticipant;
    NSMutableDictionary * _guidingSceneOrientationRequestParticipantsMap;
    SBTraitsSwitcherLiveOverlayPolicySpecifier * _liveOverlaysPolicySpecifier;
    NSMutableDictionary * _participantUniqueIDToAssociatedParticipantMap;
    <BSInvalidatable> * _stateCaptureInvalidatable;
    TRAParticipant * _switcherParticipant;
    SBTraitsSwitcherPolicySpecifier * _switcherPolicySpecifier;
    TRAArbiter * _traitsArbiter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBSwitcherTraitsAssistantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TRAParticipant *switcherParticipant;
@property (nonatomic, readonly) TRAArbiter *traitsArbiter;

- (void).cxx_destruct;
- (void)_addGuidingParticpantsIdentifiersToArray:(id)arg1;
- (void)_addGuidingSpecifierIfNeeded;
- (void)_evaluateIfGuidingSpecifierIsSillNeeded;
- (id)_guidingLandscapeOnlyLiveOverlay;
- (id)_guidingPortraitOnlyLiveOverlay;
- (id)_guidingSceneOrientationRequestParticipantWithMask:(unsigned long long)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (bool)_isContentContainerAspectRatioPortrait;
- (void)_setupGuidingRelationshipIfNeededForParticipant:(id)arg1 withSceneHandle:(id)arg2;
- (void)_setupPolicySpecifierIfNeeded;
- (void)_setupStateCapture;
- (id)_stateCaptureDescription;
- (void)_updateAcquiredParticipantsPolicies:(id)arg1;
- (void)_updateArbitrationForElementsParticipants:(id)arg1 sceneHandleProviderBlock:(id /* block */)arg2 forceResolution:(bool)arg3 reason:(id)arg4;
- (bool)_updateGuidingSpecifiersIfNeededForParticipants:(id)arg1 sceneHandleProviderBlock:(id /* block */)arg2;
- (void)createTraitsParticipantsForLayoutElements:(id)arg1 outParticipantsByElementIdentifier:(out id*)arg2 outDelegatesByParticipant:(out id*)arg3 outPrimaryDelegate:(out id*)arg4;
- (void)dealloc;
- (id)delegate;
- (void)didChangeSettingsForParticipant:(id)arg1 context:(id)arg2;
- (id)initWithTraitsArbiter:(id)arg1 switcherParticipant:(id)arg2 delegate:(id)arg3;
- (id)switcherParticipant;
- (id)traitsArbiter;
- (void)updateAllParticipants:(id)arg1 withPrimaryDelegate:(id)arg2 nonPrimaryPolicy:(long long)arg3 primaryPolicy:(long long)arg4 ownPolicy:(long long)arg5;
- (void)updatePreferencesForParticipant:(id)arg1 updater:(id)arg2;

@end
