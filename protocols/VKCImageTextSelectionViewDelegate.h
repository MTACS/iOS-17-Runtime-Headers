
@protocol VKCImageTextSelectionViewDelegate <NSObject>

@required

- (VKCBaseDataDetectorElement *)dataDetectorElementAtPoint:(struct CGPoint { double x1; double x2; })arg1 fromTextSelectionView:(VKCImageTextSelectionView *)arg2;
- (void)generateTextualVisualSearchResultForQueryInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: <RVTextQueryProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, MADVITextLookupResult *, NSError *, void*
- (NSArray *)nonTextNormalizedHighlightAllQuadsForTextSelectionView:(VKCImageTextSelectionView *)arg1;
- (UIViewController *)presentingViewControllerForTextSelectionView:(VKCImageTextSelectionView *)arg1;
- (void)textSelectionView:(VKCImageTextSelectionView *)arg1 analyticsEventOccured:(VKAnalyticsEvent *)arg2;
- (void)textSelectionView:(VKCImageTextSelectionView *)arg1 boundsDidChangeFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (VKCVisualSearchResultItem *)textSelectionView:(VKCImageTextSelectionView *)arg1 closestVisualSearchItemForRange:(VKTextRange *)arg2;
- (bool)textSelectionView:(VKCImageTextSelectionView *)arg1 dataDetectorExistsAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)textSelectionView:(void *)arg1 prepareForCalloutAction:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: VKCImageTextSelectionView *, SEL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)textSelectionView:(VKCImageTextSelectionView *)arg1 requestsDataDetectorActivationAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)textSelectionView:(VKCImageTextSelectionView *)arg1 selectionDidChange:(VKTextRange *)arg2;
- (bool)textSelectionView:(VKCImageTextSelectionView *)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)textSelectionView:(VKCImageTextSelectionView *)arg1 shouldHandleShareWithRanges:(NSArray *)arg2 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 selectedText:(NSString *)arg4 selectedAttributedText:(NSAttributedString *)arg5;
- (NSAttributedString *)textSelectionView:(VKCImageTextSelectionView *)arg1 updateAttributedStringForCopy:(NSAttributedString *)arg2;
- (NSString *)textSelectionView:(VKCImageTextSelectionView *)arg1 updateStringForCopy:(NSString *)arg2;
- (void)triggerTapToRadar;
- (UIView *)viewForImageSnapshotForTextSelectionView:(VKCImageTextSelectionView *)arg1;

@end
