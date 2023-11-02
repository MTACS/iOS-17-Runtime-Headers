
@interface SBAbstractTraitsSwitcherPolicySpecifier : NSObject <BSInvalidatable> {
    SBTraitsPipelineBlockBasedPolicySpecifier * _blockBasedPolicySpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_blockBasedPolicySpecifier;
- (id)_specifierDescription;
- (void)_updateAcquiredParticipantsPolicies:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithComponentOrder:(id)arg1 arbiter:(id)arg2;
- (void)invalidate;

@end
