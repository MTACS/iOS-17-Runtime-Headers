
@protocol CKMessageEntryViewDelegate <NSObject>

@required

- (void)messageEntryView:(CKMessageEntryView *)arg1 didInsertPluginPayload:(IMPluginPayload *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didMoveToWindow:(UIWindow *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (bool)messageEntryView:(CKMessageEntryView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (CKSendMenuPresentation *)messageEntryViewActiveSendMenuPresentation:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidBeginEditingNotAlreadyActive:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidChange:(CKMessageEntryView *)arg1 isTextChange:(bool)arg2 isShelfChange:(bool)arg3;
- (void)messageEntryViewDidEndEditing:(CKMessageEntryView *)arg1;
- (double)messageEntryViewMaxHeight:(CKMessageEntryView *)arg1;
- (struct CGSize { double x1; double x2; })messageEntryViewMaxShelfPluginViewSize:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPlusButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRecordingDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSafeAreaInsetsDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(CKMessageEntryView *)arg1;
- (bool)messageEntryViewShouldBeginEditing:(CKMessageEntryView *)arg1;
- (UIViewController *)parentViewControllerForPluginViewControllerInMessageEntryView:(CKMessageEntryView *)arg1;

@optional

- (void)disableRotationWhileRecordingAudioMessage;
- (void)enableRotationAfterRecording;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })messageEntryView:(CKMessageEntryView *)arg1 frameInChatControllerCoordinatesForView:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 shouldShowAppStrip:(bool)arg2 animated:(bool)arg3;
- (void)messageEntryViewDidBeginEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidTakeFocus:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPopulateNextSentMessage:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPopulatePreviousSentMessage:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSwipeDownGestureRecognized:(CKMessageEntryView *)arg1;
- (void)messageEntryViewWantsEffectPicker:(CKMessageEntryView *)arg1;
- (bool)messageEntryViewWidth:(double*)arg1 andOffset:(double*)arg2;
- (void)sendCurrentLocationMessage:(CKMessageEntryView *)arg1;
- (bool)shouldMessageEntryViewReportBrowserButtonHitToInputDelegate:(CKMessageEntryView *)arg1;
- (UITextView *)textViewOnscreenWithEntryView;

@end
