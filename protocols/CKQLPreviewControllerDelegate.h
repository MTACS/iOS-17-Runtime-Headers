
@protocol CKQLPreviewControllerDelegate <QLPreviewControllerConformingDelegate>

@required

- (CKInvisibleInkEffectController *)invisibleInkEffectControllerForPreviewController:(CKQLPreviewController *)arg1;
- (void)previewControllerDidCancelDismiss:(id <QLPreviewControllerConforming>)arg1;

@optional

- (CKChatItem *)chatItemForMediaObject:(CKMediaObject *)arg1 previewController:(CKQLPreviewController *)arg2;
- (NSArray *)previewActionsForPreviewController:(CKQLPreviewController *)arg1;
- (bool)previewControllerIsInGroupConversation:(CKQLPreviewController *)arg1;
- (void)replyButtonTappedForMediaObject:(CKMediaObject *)arg1 previewController:(CKQLPreviewController *)arg2;
- (void)sendMessageAcknowledgment:(long long)arg1 chatItem:(CKMessagePartChatItem *)arg2 previewController:(CKQLPreviewController *)arg3;
- (bool)shouldHideInteractionOptions;

@end
