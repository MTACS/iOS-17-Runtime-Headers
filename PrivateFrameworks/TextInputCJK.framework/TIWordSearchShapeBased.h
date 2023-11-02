
@interface TIWordSearchShapeBased : TIWordSearch

- (bool)addTopCandidateForCode:(id)arg1 option:(unsigned long long)arg2 autoconvertedCandidates:(id)arg3 candidateRefsDictionary:(id)arg4;
- (id)autoconvertLongestValidPrefixes:(id)arg1 option:(unsigned long long)arg2 candidateResultSet:(id)arg3 autoconvertedCandidateArray:(id*)arg4;
- (bool)canHandleKeyHitTest;
- (void)updateMecabraState;
- (bool)validateCode:(id)arg1 withOption:(unsigned long long)arg2;

@end
