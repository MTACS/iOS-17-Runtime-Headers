
@interface CKTranscriptExtensionViewController : UINavigationController <CKChatControllerDelegate> {
    CKDetailsNavigationController * _detailsNavigationController;
    NSUUID * _requestUUID;
    NSExtension * _weakExtension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CKDetailsNavigationController *detailsNavigationController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *requestUUID;
@property (readonly) Class superclass;
@property (nonatomic) NSExtension *weakExtension;

+ (void)initialize;

- (void).cxx_destruct;
- (void)chatController:(id)arg1 didFinishDismissAnimationForSendMenuViewController:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)chatController:(id)arg1 requestDeleteJunkConversation:(id)arg2;
- (void)chatController:(id)arg1 requestPresentSendMenu:(id)arg2 withPresentationContext:(id)arg3 completion:(id /* block */)arg4;
- (void)chatController:(id)arg1 requestRecoverJunkConversation:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)chatControllerDidChangeDeferringSystemNavigationPopGestureForPlusButton:(id)arg1;
- (id)detailsNavigationController;
- (void)doneButtonPressedForChatController:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })initialSystemMinimumLayoutMarginsForChatController:(id)arg1;
- (void)presentConversationWithMessageGUID:(id)arg1 attachmentGUID:(id)arg2;
- (void)presentDetailsNavigationController:(id)arg1;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (id)requestUUID;
- (void)setDetailsNavigationController:(id)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setWeakExtension:(id)arg1;
- (void)viewDidLoad;
- (id)weakExtension;

@end
