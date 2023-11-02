
@interface SBTraitsRoleAFollowsRoleBOrientationPolicySpecifier : SBTraitsOrientationStageComponent <TRAPreferencesStageResolutionPolicySpecifying> {
    bool  _animate;
    bool  _force;
    NSString * _roleA;
    NSString * _roleB;
}

@property (nonatomic, readonly) bool animate;
@property (nonatomic, readonly) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool force;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *roleA;
@property (nonatomic, readonly) NSString *roleB;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)animate;
- (bool)force;
- (id)initWithComponentOrder:(id)arg1;
- (id)roleA;
- (id)roleB;
- (void)updateStageParticipantsResolutionPolicies:(id)arg1 context:(id)arg2;

@end
