
@protocol CKSendMenuPresentationDelegate <NSObject>

@required

- (void)didDismissSendMenu:(CKSendMenuPresentation *)arg1 usingPresentationContext:(id <CKSceneOverlayPresentationContext>)arg2;
- (void)requestDismissKeyboardSnapshotForSendMenu;
- (void)requestShowKeyboardSnapshotForSendMenu;
- (void)sendMenuPresentationWillDismiss:(CKSendMenuPresentation *)arg1;

@end
