
@protocol VKCImageAnalysisBaseViewDelegate <NSObject>

@required

- (bool)automaticallyShowVisualSearchResults;
- (void)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 analyticsEventDidOccur:(VKAnalyticsEvent *)arg2;
- (void)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 didFinishTransitionToNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 didUpdateToNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 livePhotoShouldPlay:(bool)arg2;
- (void)baseOverlayView:(void *)arg1 prepareForCalloutAction:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: VKCImageAnalysisBaseView *, SEL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 shouldBeginInteractionAtPoint:(struct CGPoint { double x1; double x2; })arg2 withTypes:(unsigned long long)arg3;
- (bool)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 shouldHandleShareWithRanges:(NSArray *)arg2 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 selectedText:(NSString *)arg4 selectedAttributedText:(NSAttributedString *)arg5;
- (bool)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 shouldShowLookupForItemFromCallout:(VKCVisualSearchResultItem *)arg2;
- (NSAttributedString *)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 updateAttributedStringForCopy:(NSAttributedString *)arg2;
- (NSString *)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 updateStringForCopy:(NSString *)arg2;
- (void)baseOverlayViewDidBeginSubjectAnalysis:(VKCImageAnalysisBaseView *)arg1;
- (void)baseOverlayViewDidCompleteSubjectAnalysis:(VKCImageAnalysisBaseView *)arg1;
- (void)baseOverlayViewDidRequestButtonStateUpdate:(VKCImageAnalysisBaseView *)arg1;
- (void)baseOverlayViewDismissVisualSearchController:(VKCImageAnalysisBaseView *)arg1;
- (void)baseOverlayViewSubjectInteractionInProgressDidChange:(VKCImageAnalysisBaseView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRectForImageRecognitionBaseView:(VKCImageAnalysisBaseView *)arg1;
- (void)generateTextualVisualSearchResultForQueryInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: <RVTextQueryProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, MADVITextLookupResult *, NSError *, void*
- (void)generateVisualSearchResultForItems:(void *)arg1 queryID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, VKCVisualSearchResult *, NSError *, void*
- (void)hasActiveTextSelectionDidChangeForBaseOverlayView:(VKCImageAnalysisBaseView *)arg1;
- (void)highlightSelectableItemsDidChangeForBaseOverlayView:(VKCImageAnalysisBaseView *)arg1;
- (UIImage *)imageForImageSnapshotForBaseView:(VKCImageAnalysisBaseView *)arg1;
- (bool)isBaseOverlayViewShowingLivePhoto:(VKCImageAnalysisBaseView *)arg1 delegateHasImplementation:(bool*)arg2;
- (UIViewController *)presentingViewControllerForImageAnalysisInteraction;
- (UIView *)previewForDataDetectorElementView:(VKCDataDetectorElementView *)arg1;
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(NSString *)arg1 userFeedbackPayload:(NSData *)arg2 sfReportData:(NSData *)arg3;
- (void)textSelectionDidChangeForBaseOverlayView:(VKCImageAnalysisBaseView *)arg1;
- (bool)topLevelImplementsContentsRectDelegateForBaseView:(VKCImageAnalysisBaseView *)arg1;
- (void)triggerTapToRadar;
- (void)videoPreviewAvailableForBaseOverlayView:(VKCImageAnalysisBaseView *)arg1;
- (UIView *)viewForImageSnapshotForBaseView:(VKCImageAnalysisBaseView *)arg1;

@end
