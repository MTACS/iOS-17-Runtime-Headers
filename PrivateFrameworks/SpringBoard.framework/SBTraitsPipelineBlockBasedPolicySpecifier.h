
@interface SBTraitsPipelineBlockBasedPolicySpecifier : NSObject <BSInvalidatable, TRAPreferencesStageResolutionPolicySpecifying> {
    TRAArbiter * _arbiter;
    NSNumber * _componentOrder;
    bool  _isValid;
    id /* block */  _specifierBlock;
    NSString * _specifierDescription;
}

@property (nonatomic, readonly) TRAArbiter *arbiter;
@property (nonatomic, readonly) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ specifierBlock;
@property (nonatomic, copy) NSString *specifierDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)arbiter;
- (id)componentOrder;
- (void)dealloc;
- (id)description;
- (id)initWithPolicySpecifierBlock:(id /* block */)arg1 specifierDescription:(id)arg2 componentOrder:(id)arg3 arbiter:(id)arg4;
- (void)invalidate;
- (long long)preferencesType;
- (void)setSpecifierDescription:(id)arg1;
- (id /* block */)specifierBlock;
- (id)specifierDescription;
- (void)updateStageParticipantsResolutionPolicies:(id)arg1 context:(id)arg2;

@end
