
@interface TRAArbitrationPreferencesResolutionStage : NSObject <BSDescriptionProviding> {
    TRAArbiter * _arbiter;
    NSMutableArray * _nodesSpecsSpecifiers;
    NSMutableArray * _participantsRoles;
    long long  _preferencesType;
    NSMutableArray * _resolutionPolicySpecifiers;
    TRAPreferencesTree * _stagePreferencesTree;
    NSMutableArray * _stageResolvers;
    <BSInvalidatable> * _stateDumpHandle;
}

@property (nonatomic, readonly) TRAArbiter *arbiter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *participantsRoles;
@property (nonatomic, readonly) long long preferencesType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addStageComponent:(id)arg1 toArray:(id)arg2 update:(bool)arg3 animate:(bool)arg4;
- (void)_removeComponent:(id)arg1 fromArray:(id)arg2 update:(bool)arg3 animate:(bool)arg4;
- (id)_setupStateDump;
- (void)addNodesSpecificationsSpecifier:(id)arg1;
- (void)addResolutionPolicySpecifier:(id)arg1;
- (void)addResolutionPolicySpecifier:(id)arg1 animate:(bool)arg2;
- (void)addResolutionPolicySpecifier:(id)arg1 update:(bool)arg2;
- (void)addStageResolver:(id)arg1;
- (id)arbiter;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithParticipantsRoles:(id)arg1 preferencesType:(long long)arg2 arbiter:(id)arg3;
- (id)participantsRoles;
- (long long)preferencesType;
- (void)removeNodesSpecificationsSpecifier:(id)arg1;
- (void)removeResolutionPolicySpecifier:(id)arg1;
- (void)removeResolutionPolicySpecifier:(id)arg1 animate:(bool)arg2;
- (void)removeResolutionPolicySpecifier:(id)arg1 update:(bool)arg2;
- (void)removeStageResolver:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateResolutionWithContext:(id)arg1;

@end
