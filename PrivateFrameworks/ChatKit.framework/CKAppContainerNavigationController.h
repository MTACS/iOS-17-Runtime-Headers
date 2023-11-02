
@interface CKAppContainerNavigationController : UINavigationController <CKBrowserViewControllerSendDelegate, UISheetPresentationControllerDelegate> {
    UIViewController<CKBrowserViewControllerProtocol> * _browserVC;
}

@property (nonatomic, retain) UIViewController<CKBrowserViewControllerProtocol> *browserVC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sheetPresentationController:(id)arg1 didChangeIndexOfCurrentDetent:(long long)arg2;
- (id)browserVC;
- (void)closeButtonPressed:(id)arg1;
- (void)commitPayload:(id)arg1;
- (void)commitSticker:(id)arg1 stickerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2 draggedSticker:(id)arg3;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(bool)arg1;
- (void)dismissToKeyboard:(bool)arg1;
- (id)dragControllerTranscriptDelegate;
- (id)initWithRemoteViewController:(id)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(id /* block */)arg4;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)setBrowserVC:(id)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)startEditingPayload:(id)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(bool)arg2;
- (void)transitionBrowserToLargeDetent;
- (void)transitionBrowserToMediumDetent;

@end
