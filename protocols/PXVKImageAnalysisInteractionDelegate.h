
@protocol PXVKImageAnalysisInteractionDelegate <NSObject>

@optional

- (UIImage *)contentImageForImageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1;
- (UIView *)contentViewForImageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRectForImageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1;
- (void)imageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)imageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1 livePhotoShouldPlay:(bool)arg2;
- (void)imageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1 liveTextButtonDidChangeToVisible:(bool)arg2;
- (bool)imageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2 forAnalysisType:(unsigned long long)arg3;
- (bool)imageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1 shouldShowLookupForItemFromCallout:(id)arg2;
- (void)imageAnalysisInteractionDidBeginSubjectAnalysis:(id <PXVKImageAnalysisInteraction>)arg1;
- (void)imageAnalysisInteractionDidCompleteSubjectAnalysis:(id <PXVKImageAnalysisInteraction>)arg1;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id <PXVKImageAnalysisInteraction>)arg1;
- (bool)isShowingLivePhotoForImageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1;
- (UIViewController *)presentingViewControllerForImageAnalysisInteraction:(id <PXVKImageAnalysisInteraction>)arg1;

@end
