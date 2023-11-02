
@protocol UIKeyboardCandidateListDelegate <NSObject>

@optional

- (void)candidateListAcceptCandidate:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListInvalidateSelection:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListSelectionDidChange:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListShouldBeDismissed:(id <UIKeyboardCandidateList>)arg1;
- (void)setCandidateList:(id <UIKeyboardCandidateList>)arg1;

@end
