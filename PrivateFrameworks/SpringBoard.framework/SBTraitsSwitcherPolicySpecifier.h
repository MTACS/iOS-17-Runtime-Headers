
@interface SBTraitsSwitcherPolicySpecifier : SBAbstractTraitsSwitcherPolicySpecifier {
    NSString * _primaryElementParticipantIdentifier;
    long long  _resolutionPolicy;
}

@property (nonatomic, copy) NSString *primaryElementParticipantIdentifier;
@property (nonatomic) long long resolutionPolicy;

- (void).cxx_destruct;
- (id)_specifierDescription;
- (void)_updateAcquiredParticipantsPolicies:(id)arg1 context:(id)arg2;
- (id)initWithComponentOrder:(id)arg1 arbiter:(id)arg2;
- (id)primaryElementParticipantIdentifier;
- (long long)resolutionPolicy;
- (void)setPrimaryElementParticipantIdentifier:(id)arg1;
- (void)setResolutionPolicy:(long long)arg1;

@end
