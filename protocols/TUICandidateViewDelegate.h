
@protocol TUICandidateViewDelegate <NSObject>

@optional

- (void)candidateView:(TUICandidateView *)arg1 didAcceptCandidate:(TIKeyboardCandidate *)arg2 atIndexPath:(NSIndexPath *)arg3 inGridType:(long long)arg4;
- (void)candidateViewDidTapArrowButton:(TUICandidateView *)arg1;
- (void)candidateViewDidTapInlineText:(TUICandidateView *)arg1;
- (void)candidateViewNeedsToExpand:(TUICandidateView *)arg1;
- (void)candidateViewSelectionDidChange:(TUICandidateView *)arg1 inGridType:(long long)arg2;
- (void)candidateViewWillBeginDragging:(TUICandidateView *)arg1;

@end
