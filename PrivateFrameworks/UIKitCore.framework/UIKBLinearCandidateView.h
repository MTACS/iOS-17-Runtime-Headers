
@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView

- (unsigned long long)focusableVariantCount;
- (id)getConfiguration;
- (void)refreshSelectedCandidate;
- (void)refreshSelectedCandidateAnimated:(bool)arg1;
- (void)updateCandidateKey;

@end
