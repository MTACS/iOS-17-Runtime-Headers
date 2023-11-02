
@protocol AVVisualAnalysisViewDelegate <NSObject>

@required

- (bool)shouldBeginTouchInteractionForVisualAnalysisView:(AVVisualAnalysisView *)arg1;
- (void)visualAnalysisView:(AVVisualAnalysisView *)arg1 didToggleAnalysisButtonVisibilityToVisible:(bool)arg2;
- (void)visualAnalysisView:(void *)arg1 prepareForCalloutAction:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: AVVisualAnalysisView *, SEL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)visualAnalysisViewDidBeginInteraction:(bool)arg1;
- (void)visualAnalysisViewDidPressAnalysisButton:(AVVisualAnalysisView *)arg1;
- (void)visualAnalysisViewDidTapVisualLookupIndicator:(AVVisualAnalysisView *)arg1;
- (void)visualAnalysisViewDidUpdateSubjectAvailability:(AVVisualAnalysisView *)arg1;
- (void)visualAnalysisViewDidUpdateVisualLookupAvailability:(AVVisualAnalysisView *)arg1;

@end
