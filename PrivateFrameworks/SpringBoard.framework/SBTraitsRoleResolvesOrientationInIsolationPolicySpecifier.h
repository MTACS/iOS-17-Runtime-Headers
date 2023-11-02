
@interface SBTraitsRoleResolvesOrientationInIsolationPolicySpecifier : SBTraitsOrientationStageComponent <TRAPreferencesStageResolutionPolicySpecifying> {
    NSString * _targetRole;
}

@property (nonatomic, readonly) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *targetRole;

- (void).cxx_destruct;
- (id)initWithComponentOrder:(id)arg1;
- (id)targetRole;
- (void)updateStageParticipantsResolutionPolicies:(id)arg1 context:(id)arg2;

@end
