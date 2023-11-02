
@interface TIWordSearchHandwriting : TIWordSearch

- (void)acceptCandidate:(void*)arg1;
- (struct __MecabraContext { }*)createMecabraContextFromCandidateContext:(id)arg1 stringContext:(id)arg2;
- (id)generateConversionsForCandidate:(id)arg1 candidateContext:(id)arg2 stringContext:(id)arg3;
- (id)generatePredictionsWithCandidateContext:(id)arg1 stringContext:(id)arg2 option:(unsigned long long)arg3;
- (id)mecabraCreationOptionsDictionary;
- (void)updateMecabraState;

@end
