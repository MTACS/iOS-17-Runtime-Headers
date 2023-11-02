
@protocol QLPreviewControllerPrivateDelegate <QLPreviewControllerDelegate>

@optional

- (NSArray *)additionalActivitiesTypesForPreviewController:(QLPreviewController *)arg1;
- (NSArray *)dismissActionsForPreviewController:(QLPreviewController *)arg1;
- (NSArray *)excludedActivityTypesForPreviewController:(QLPreviewController *)arg1;
- (bool)previewController:(QLPreviewController *)arg1 canEditItem:(id <QLPreviewItem>)arg2;
- (bool)previewController:(QLPreviewController *)arg1 canShareItem:(id <QLPreviewItem>)arg2;
- (NSString *)previewController:(QLPreviewController *)arg1 customActionButtonTittleForPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewController:(QLPreviewController *)arg1 customActionButtonWasTappedForPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewController:(QLPreviewController *)arg1 didDismissPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 didFailToSaveEditedItem:(id <QLPreviewItem>)arg2 withError:(NSError *)arg3;
- (void)previewController:(QLPreviewController *)arg1 didFinishPlayingPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewController:(QLPreviewController *)arg1 didLoadPreviewItemAtIndex:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)previewController:(QLPreviewController *)arg1 didPresentPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 didTransitionToState:(long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 didUpdateDisplayStateOfPreviewItem:(id <QLPreviewItem>)arg2;
- (bool)previewController:(QLPreviewController *)arg1 shouldAllowKeyCommandWithIdentifier:(unsigned long long)arg2;
- (bool)previewController:(QLPreviewController *)arg1 shouldSaveEditedItem:(id <QLPreviewItem>)arg2;
- (UIView *)previewController:(QLPreviewController *)arg1 transitionViewForPreviewItem:(id <QLPreviewItem>)arg2 uncroppedSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (UIView *)previewController:(QLPreviewController *)arg1 transitionViewForPreviewItem:(id <QLPreviewItem>)arg2 uncroppedSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 realSize:(struct CGSize { double x1; double x2; }*)arg4;
- (void)previewController:(QLPreviewController *)arg1 updatedContentsURL:(NSURL *)arg2 forEditedItem:(id <QLPreviewItem>)arg3;
- (void)previewController:(QLPreviewController *)arg1 willLoadPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 willPresentPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 willSaveEditedItem:(id <QLPreviewItem>)arg2;
- (void)previewController:(QLPreviewController *)arg1 willTransitionToState:(long long)arg2;
- (bool)shouldAppendDefaultDismissActionsForPreviewController:(QLPreviewController *)arg1;
- (bool)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(QLPreviewController *)arg1;

@end
