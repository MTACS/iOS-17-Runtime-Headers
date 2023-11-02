
@protocol ICBaseTextViewDelegate <UITextViewDelegate>

@required

- (bool)allowsNewTextLength:(unsigned long long)arg1;

@optional

- (void)didInvokeAnalyticsCalloutBarButtonActionOfType:(long long)arg1;
- (void)didInvokeAnalyticsChecklistActionChecked:(bool)arg1;
- (void)didInvokePasteWithAttributedString:(NSAttributedString *)arg1;
- (bool)handleTapGestureForAttribution:(UITapGestureRecognizer *)arg1;
- (bool)isEditingOnSystemPaper;
- (bool)isPaperLinkBarShowing;
- (bool)shouldBlockHitTestOnTextView:(ICBaseTextView *)arg1 event:(UIEvent *)arg2;
- (bool)shouldInsertNewDrawingsAsPaper;
- (bool)shouldLockTextViewContentOffset;
- (bool)shouldShowMenuItems;
- (bool)shouldStartEditingForTapGesture:(UITapGestureRecognizer *)arg1;
- (void)startBlockingMerge;
- (void)stopBlockingMerge;

@end
