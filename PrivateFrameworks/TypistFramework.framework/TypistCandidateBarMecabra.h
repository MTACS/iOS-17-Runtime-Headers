
@interface TypistCandidateBarMecabra : TypistCandidateBar

- (id)candidateUIInformation:(id)arg1;
- (id)getAllCandidates;
- (long long)getIndexOfCandidate:(id)arg1;
- (long long)getIndexOfCandidate:(id)arg1 withAlternativeText:(id)arg2;
- (id)getVisibleCandidates;
- (bool)hasCandidate:(id)arg1 withAlternativeText:(id)arg2;
- (bool)hasCandidate:(id)arg1 withAlternativeText:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)hasVisibleCandidate:(id)arg1;
- (void)hideExtendedCandidateView;
- (id)init;
- (bool)isExtendedCandidateViewMode;
- (bool)scrollCandidateBar:(int)arg1;
- (bool)scrollCandidateBarByOneScreen;
- (bool)scrollToCandidateOnBar:(id)arg1;
- (bool)scrollToCandidateOnBarByPosition:(long long)arg1;
- (long long)selectCandidate:(id)arg1;
- (long long)selectCandidateAtIndex:(long long)arg1;
- (void)showExtendedCandidateView;
- (void)toggleExtendedCandidateViewMode;

@end
