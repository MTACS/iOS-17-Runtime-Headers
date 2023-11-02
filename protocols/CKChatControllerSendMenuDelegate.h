
@protocol CKChatControllerSendMenuDelegate <NSObject>

@required

- (CKSendMenuPresentation *)activeSendMenuPresentationForChatController:(CKChatController *)arg1;
- (void)chatController:(CKChatController *)arg1 didFinishDismissAnimationForSendMenuViewController:(UIViewController *)arg2;
- (void)chatController:(void *)arg1 requestPresentSendMenu:(void *)arg2 withPresentationContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: CKChatController *, UIViewController *, <CKSceneOverlayPresentationContext> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
