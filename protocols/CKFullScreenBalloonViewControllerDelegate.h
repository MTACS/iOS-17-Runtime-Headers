
@protocol CKFullScreenBalloonViewControllerDelegate <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 balloonFrameForChatItem:(CKChatItem *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(CKMessagePartChatItem *)arg3;

@optional

- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 deleteSentStickerForChatItem:(CKAssociatedStickerChatItem *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 deleteStickerWithTransferGUID:(NSString *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 didAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 downloadStickerForChatItem:(CKAssociatedStickerChatItem *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 replyButtonPressedForChatItem:(CKChatItem *)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 sendMessageHighlight:(bool)arg2 forChatItem:(CKMessagePartChatItem *)arg3;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 stickerPackTappedWithAdamID:(NSNumber *)arg2;
- (void)fullScreenBalloonViewController:(void *)arg1 verticallyScrollTranscriptByAmount:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: CKFullScreenBalloonViewController *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 willAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 willDisappearWithSendAnimation:(bool)arg2;
- (BOOL)fullScreenBalloonViewControllerAnchorVertialOrientation:(CKFullScreenBalloonViewController *)arg1 withBalloonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)fullScreenBalloonViewControllerDidDisappear:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerMessageHighlightButtonDidFinishAnimating:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerRequestDismissKeyboardSnapshot:(CKFullScreenBalloonViewController *)arg1;
- (void)fullScreenBalloonViewControllerRequestShowKeyboardSnapshot:(CKFullScreenBalloonViewController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenBalloonViewControllerSafeAreaLayoutFrame:(CKFullScreenBalloonViewController *)arg1;
- (bool)fullScreenBalloonViewControllerShouldShowHightlightButton:(CKFullScreenBalloonViewController *)arg1 forChatItem:(CKMessagePartChatItem *)arg2;
- (bool)fullScreenBalloonViewControllerShouldShowReplyButton:(CKFullScreenBalloonViewController *)arg1;
- (bool)shouldDismissKeyboardWhenShowingFullScreenAcknowledgmentPickerForBalloonChatItem:(CKChatItem *)arg1;

@end
