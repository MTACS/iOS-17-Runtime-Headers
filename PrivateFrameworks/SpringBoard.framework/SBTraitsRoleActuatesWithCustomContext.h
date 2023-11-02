
@interface SBTraitsRoleActuatesWithCustomContext : SBTraitsOrientationStageComponent <TRAPreferencesStageResolutionPolicySpecifying> {
    TRASettingsActuationContext * _actuationContext;
    NSString * _role;
}

@property (nonatomic, readonly, copy) TRASettingsActuationContext *actuationContext;
@property (nonatomic, readonly) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *role;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actuationContext;
- (id)initWithComponentOrder:(id)arg1;
- (id)initWithComponentOrder:(id)arg1 actuationContext:(id)arg2;
- (id)role;
- (void)updateStageParticipantsResolutionPolicies:(id)arg1 context:(id)arg2;

@end
