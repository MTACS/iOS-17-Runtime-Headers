
@protocol CKInlineReplyInteractionDelegate <NSObject>

@required

- (void)inlineReplyController:(CKInlineReplyChatController *)arg1 appCardDidChangeEntryViewAlignmentHeight:(double)arg2 animated:(bool)arg3;
- (bool)inlineReplyController:(CKInlineReplyChatController *)arg1 containerWidth:(double*)arg2 offset:(double*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inlineReplyController:(CKInlineReplyChatController *)arg1 gradientFrameWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)inlineReplyController:(CKInlineReplyChatController *)arg1 setIsShowingPreview:(bool)arg2;
- (void)inlineReplyController:(CKInlineReplyChatController *)arg1 setTargetFirstResponder:(long long)arg2;
- (bool)inlineReplyControllerBecomeFirstResponder:(CKInlineReplyChatController *)arg1;
- (CKChatInputController *)inlineReplyControllerChatInputController:(CKInlineReplyChatController *)arg1;
- (void)inlineReplyControllerDidSendComposition:(CKInlineReplyChatController *)arg1;
- (void)inlineReplyControllerRequestsDismissal:(CKInlineReplyChatController *)arg1 presentKeyboard:(bool)arg2;
- (void)inlineReplyControllerRequestsReloadInputViews:(CKInlineReplyChatController *)arg1;
- (long long)inlineReplyControllerTargetFirstResponder:(CKInlineReplyChatController *)arg1;
- (void)updateActiveEntryViewPositioningGuideForInlineReplyController:(CKInlineReplyChatController *)arg1;
- (double)visibleInputViewHeightForInlineReplyController:(CKInlineReplyChatController *)arg1;

@end
