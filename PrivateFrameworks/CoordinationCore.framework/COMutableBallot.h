
@interface COMutableBallot : COBallot

- (void)addCandidate:(id)arg1;
- (bool)addDiscoveryRecord:(id)arg1;
- (void)clearInsignificantCandidates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)mergeBallot:(id)arg1;
- (void)removeCandidate:(id)arg1;

@end
