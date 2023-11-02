
@protocol SiriSharedUICompactResultViewHosting <SiriSharedUIStackableContent, SiriSharedUIStackableContentActionOffering, SiriSharedUIDarkening>

@required

- (<SiriSharedUICompactResultViewDelegate> *)delegate;
- (SiriSharedUIPanDismissalGestureRecognizer *)dismissalGestureRecognizer;
- (SiriSharedUIStandardView<SiriSharedUIStackableContent><SiriSharedUIStackableContentActionOffering> *)hostingView;
- (void)setDarkenIntensity:(double)arg1 animated:(bool)arg2;
- (void)setDelegate:(id <SiriSharedUICompactResultViewDelegate>)arg1;
- (void)setDismissalGestureRecognizer:(SiriSharedUIPanDismissalGestureRecognizer *)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setIsInAmbientInteractivity:(bool)arg1;
- (void)setShowDimmingView:(bool)arg1 animated:(bool)arg2;
- (void)setShowSnippetView:(bool)arg1 animated:(bool)arg2;
- (void)setSnippetView:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: SiriSharedUIContentPlatterView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)snippetContentDidUpdate;
- (SiriSharedUIContentPlatterView *)snippetView;

@end
