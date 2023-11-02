
@interface CKSocialLayerChatController : CKChatController {
    NSString * _attachmentGUID;
    NSString * _messageGUID;
    CKFullScreenBalloonViewControllerPhone * _socialLayerFullScreenBalloonController;
}

@property (nonatomic, retain) NSString *attachmentGUID;
@property (nonatomic, retain) NSString *messageGUID;
@property (nonatomic) CKFullScreenBalloonViewControllerPhone *socialLayerFullScreenBalloonController;

+ (id)chatIdentifierForMessageWithGUID:(id)arg1;
+ (id)chatItemForMessageGUID:(id)arg1 attachmentGUID:(id)arg2 chatItems:(id)arg3;

- (void).cxx_destruct;
- (bool)_controllerEligibleForSetConversation;
- (id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1;
- (void)_setConversationDeferredSetup;
- (id)attachmentGUID;
- (long long)attachmentIndex;
- (void)dealloc;
- (void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 replyButtonPressedForChatItem:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;
- (void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(bool)arg2;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)messageGUID;
- (void)prewarmAttachmentChatItemSize;
- (void)scrollToAndHighlightMessage;
- (id)selectedChatItems;
- (void)setAttachmentGUID:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setSocialLayerFullScreenBalloonController:(id)arg1;
- (void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg1;
- (void)showTapBackPicker;
- (id)socialLayerFullScreenBalloonController;

@end
