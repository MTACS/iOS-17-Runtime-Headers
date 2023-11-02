
@interface CKQLPreviewController : QLPreviewController <CKFullScreenBalloonViewControllerDelegate, IMPhotoLibraryPersistenceManagerListener> {
    <CKQLPreviewControllerDelegate> * _chatControllerPreviewDelegate;
    CKChatItem * _chatItem;
    bool  _controllerWasDismissed;
    bool  _currentPreviewItemIsSaved;
    bool  _suppressRefetchingCurrentHighQualityImage;
    UIBarButtonItem * _tapbackButton;
}

@property (nonatomic) <CKQLPreviewControllerDelegate> *chatControllerPreviewDelegate;
@property (nonatomic) CKChatItem *chatItem;
@property (nonatomic) bool controllerWasDismissed;
@property (nonatomic) bool currentPreviewItemIsSaved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressRefetchingCurrentHighQualityImage;
@property (nonatomic, retain) UIBarButtonItem *tapbackButton;

- (void).cxx_destruct;
- (void)_dismissFullScreenBubbleViewController:(id)arg1 animated:(bool)arg2 withSendAnimation:(bool)arg3 completion:(id /* block */)arg4;
- (bool)canCurrentPreviewItemQuickSave;
- (id)chatControllerPreviewDelegate;
- (id)chatItem;
- (bool)controllerWasDismissed;
- (id)currentPreviewItem;
- (void)currentPreviewItemDidChange;
- (bool)currentPreviewItemIsSaved;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenBalloonViewController:(id)arg1 balloonFrameForChatItem:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 deleteStickerWithTransferGUID:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 replyButtonPressedForChatItem:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;
- (void)fullScreenBalloonViewController:(id)arg1 sendMessageHighlight:(bool)arg2 forChatItem:(id)arg3;
- (void)fullScreenBalloonViewController:(id)arg1 stickerPackTappedWithAdamID:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(bool)arg2;
- (BOOL)fullScreenBalloonViewControllerAnchorVertialOrientation:(id)arg1 withBalloonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1;
- (void)fullScreenBalloonViewControllerMessageHighlightButtonDidFinishAnimating:(id)arg1;
- (void)fullScreenBalloonViewControllerRequestDismissKeyboardSnapshot:(id)arg1;
- (void)fullScreenBalloonViewControllerRequestShowKeyboardSnapshot:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenBalloonViewControllerSafeAreaLayoutFrame:(id)arg1;
- (bool)fullScreenBalloonViewControllerShouldShowHightlightButton:(id)arg1 forChatItem:(id)arg2;
- (bool)fullScreenBalloonViewControllerShouldShowReplyButton:(id)arg1;
- (id)init;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)photoLibraryPersistedSyndicatedAssetSetDidChange;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredStatusBarStyle;
- (id)previewActions;
- (void)replyTapped:(id)arg1;
- (void)saveTapped:(id)arg1;
- (void)setChatControllerPreviewDelegate:(id)arg1;
- (void)setChatItem:(id)arg1;
- (void)setControllerWasDismissed:(bool)arg1;
- (void)setCurrentPreviewItemIsSaved:(bool)arg1;
- (void)setSuppressRefetchingCurrentHighQualityImage:(bool)arg1;
- (void)setTapbackButton:(id)arg1;
- (bool)suppressRefetchingCurrentHighQualityImage;
- (id)tapbackButton;
- (void)tapbackTapped:(id)arg1;
- (void)updateBarButtonItems;
- (void)updateCurrentPreviewItemIsSaved:(bool)arg1 valueDidChange:(bool*)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
