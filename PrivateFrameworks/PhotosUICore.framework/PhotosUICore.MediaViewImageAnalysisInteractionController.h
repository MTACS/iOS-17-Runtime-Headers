
@interface PhotosUICore.MediaViewImageAnalysisInteractionController : NSObject <VKCImageAnalysisInteractionDelegate> {
    void $__lazy_storage_$_observable;
    void _analysisInteractionHidden;
    void activeInteractionTypes;
    void analysisResult;
    void analysisTarget;
    void analyzer;
    void analyzerObservation;
    void automaticallyInvokedInteraction;
    void delegate;
    void error;
    void interaction;
    void shouldAnimateInteractionHideState;
}

- (void).cxx_destruct;
- (id)contentImageForImageAnalysisInteraction:(id)arg1;
- (void)imageAnalysisInteraction:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)imageAnalysisInteraction:(id)arg1 prepareForCalloutAction:(SEL)arg2 competion:(id /* block */)arg3;
- (bool)imageAnalysisInteraction:(id)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2 forAnalysisType:(unsigned long long)arg3;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id)arg1;
- (id)init;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)arg1;

@end
