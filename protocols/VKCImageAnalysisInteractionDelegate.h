
@protocol VKCImageAnalysisInteractionDelegate <NSObject>

@optional

- (UIImage *)contentImageForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (UIView *)contentViewForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRectForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (NSDictionary *)feedbackMetadataForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (unsigned long long)feedbackOptionsForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (unsigned long long)feedbackTypeForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (void)hasActiveTextSelectionDidChangeForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (void)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 didRequestLiveTextButtonSelectedState:(bool)arg2;
- (void)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 highlightSelectedItemsValueDidChange:(bool)arg2;
- (void)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 imageAnalysisBarItemPressed:(UIBarButtonItem *)arg2;
- (void)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 imageAnalysisButtonPressed:(UIButton *)arg2;
- (void)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 livePhotoShouldPlay:(bool)arg2;
- (void)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 liveTextButtonDidChangeToVisible:(bool)arg2;
- (void)imageAnalysisInteraction:(void *)arg1 prepareForCalloutAction:(void *)arg2 competion:(void *)arg3; // needs 3 arg types, found 7: VKCImageAnalysisInteraction *, SEL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2 forAnalysisType:(unsigned long long)arg3;
- (bool)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 shouldHandleShareWithRanges:(NSArray *)arg2 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 selectedText:(NSString *)arg4 selectedAttributedText:(NSAttributedString *)arg5;
- (bool)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 shouldShowLookupForItemFromCallout:(id)arg2;
- (NSAttributedString *)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 updateAttributedStringForCopy:(NSAttributedString *)arg2;
- (NSString *)imageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 updateStringForCopy:(NSString *)arg2;
- (void)imageAnalysisInteractionDidBeginSubjectAnalysis:(VKCImageAnalysisInteraction *)arg1;
- (void)imageAnalysisInteractionDidCompleteSubjectAnalysis:(VKCImageAnalysisInteraction *)arg1;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(VKCImageAnalysisInteraction *)arg1;
- (void)imageAnalysisInteractionSubjectInteractionInProgressDidChange:(VKCImageAnalysisInteraction *)arg1;
- (bool)isShowingLivePhotoForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (UIViewController *)presentingViewControllerForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (NSArray *)promisedFeedbackAttachementsForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (void)textSelectionDidChangeForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (void)videoPreviewAvailableForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (void)writeFeedbackAttachementForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1 to:(NSURL *)arg2;

@end
