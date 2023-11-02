
@interface AVVisualAnalysisView : UIView <VKCImageAnalysisInteractionDelegate> {
    VKCImageAnalysis * _analysis;
    double  _analysisButtonBottomInset;
    unsigned long long  _analysisTypes;
    <AVVisualAnalysisViewDelegate> * _delegate;
    bool  _hasVisualLookupResults;
    VKImageAnalysisInteraction * _imageAnalysisInteraction;
    bool  _interactionInProgress;
    bool  _subjectLiftGestureEnabled;
    bool  _wantsAnalysisButtonVisible;
}

@property (nonatomic, copy) VKCImageAnalysis *analysis;
@property (nonatomic) double analysisButtonBottomInset;
@property (nonatomic) unsigned long long analysisTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVVisualAnalysisViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasProminentText;
@property (nonatomic, readonly) bool hasSubjectToCopy;
@property (nonatomic) bool hasVisualLookupResults;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightsInteractableAreas;
@property (nonatomic, retain) VKImageAnalysisInteraction *imageAnalysisInteraction;
@property (getter=isInteractionInProgress, nonatomic) bool interactionInProgress;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsAnalysisButtonVisible;

- (void).cxx_destruct;
- (void)_addInteractionIfNeeded;
- (void)_removeInteractionIfNeeded;
- (id)analysis;
- (id)analysisButton;
- (double)analysisButtonBottomInset;
- (unsigned long long)analysisTypes;
- (void)copySubject;
- (id)delegate;
- (bool)hasActiveTextSelection;
- (void)hasActiveTextSelectionDidChangeForImageAnalysisInteraction:(id)arg1;
- (bool)hasProminentText;
- (bool)hasSubjectToCopy;
- (bool)hasVisualLookupResults;
- (bool)highlightsInteractableAreas;
- (bool)highlightsSelectableItems;
- (id)imageAnalysisInteraction;
- (void)imageAnalysisInteraction:(id)arg1 didRequestLiveTextButtonSelectedState:(bool)arg2;
- (void)imageAnalysisInteraction:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)imageAnalysisInteraction:(id)arg1 highlightSelectedItemsValueDidChange:(bool)arg2;
- (void)imageAnalysisInteraction:(id)arg1 imageAnalysisButtonPressed:(id)arg2;
- (void)imageAnalysisInteraction:(id)arg1 liveTextButtonDidChangeToVisible:(bool)arg2;
- (void)imageAnalysisInteraction:(id)arg1 prepareForCalloutAction:(SEL)arg2 competion:(id /* block */)arg3;
- (bool)imageAnalysisInteraction:(id)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2 forAnalysisType:(unsigned long long)arg3;
- (void)imageAnalysisInteractionDidCompleteSubjectAnalysis:(id)arg1;
- (void)imageAnalysisInteractionSubjectInteractionInProgressDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isInteractionInProgress;
- (void)resetSelection;
- (void)setAnalysis:(id)arg1;
- (void)setAnalysisButtonBottomInset:(double)arg1;
- (void)setAnalysisTypes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasVisualLookupResults:(bool)arg1;
- (void)setHighlightsInteractableAreas:(bool)arg1;
- (void)setImageAnalysisInteraction:(id)arg1;
- (void)setInteractionInProgress:(bool)arg1;
- (void)setWantsAnalysisButtonVisible:(bool)arg1;
- (bool)wantsAnalysisButtonVisible;

@end
