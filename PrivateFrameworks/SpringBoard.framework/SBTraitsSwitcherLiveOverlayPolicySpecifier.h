
@interface SBTraitsSwitcherLiveOverlayPolicySpecifier : SBAbstractTraitsSwitcherPolicySpecifier {
    long long  _nonPrimaryResolutionPolicy;
    NSString * _primaryElementParticipantIdentifier;
    long long  _primaryElementResolutionPolicy;
}

@property (nonatomic) long long nonPrimaryResolutionPolicy;
@property (nonatomic, copy) NSString *primaryElementParticipantIdentifier;
@property (nonatomic) long long primaryElementResolutionPolicy;

- (void).cxx_destruct;
- (id)_specifierDescription;
- (void)_updateAcquiredParticipantsPolicies:(id)arg1 context:(id)arg2;
- (void)_updateParticipant:(id)arg1 withPolicy:(long long)arg2 context:(id)arg3;
- (id)initWithComponentOrder:(id)arg1 arbiter:(id)arg2;
- (long long)nonPrimaryResolutionPolicy;
- (id)primaryElementParticipantIdentifier;
- (long long)primaryElementResolutionPolicy;
- (void)setNonPrimaryResolutionPolicy:(long long)arg1;
- (void)setPrimaryElementParticipantIdentifier:(id)arg1;
- (void)setPrimaryElementResolutionPolicy:(long long)arg1;

@end
