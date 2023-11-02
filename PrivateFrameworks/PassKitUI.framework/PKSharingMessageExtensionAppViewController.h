
@interface PKSharingMessageExtensionAppViewController : MSMessagesAppViewController <PKMessageExtensionMessageBubbleViewControllerDelegate, PKSharingMessageExtensionRenderer> {
    MSMessage * _currentMessage;
    PKMessageExtensionMessageBubbleViewController * _messageBubbleViewController;
    <PKSharingMessageExtensionPresenter> * _presenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *presentationSceneIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCurrentStateForMessage:(id)arg1;
- (void)_requestResizeIfNeeded;
- (void)_setContentViewController:(id)arg1;
- (void)_validateMessageForSending:(id)arg1 conversation:(id)arg2 associatedText:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_viewControllerForPresentationStyle:(unsigned long long)arg1 withConversation:(id)arg2;
- (struct CGSize { double x1; double x2; })contentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (void)messageDidUpdate;
- (void)messageExtensionMessageBubbleViewControllerDidTapMessage:(id)arg1;
- (void)openAppURL:(id)arg1;
- (id)presentationSceneIdentifier;
- (id)presenterForMessage:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 button:(id)arg3;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 button:(id)arg3 destructiveButton:(id)arg4 completion:(id /* block */)arg5;
- (void)viewWillAppear:(bool)arg1;
- (void)willBecomeActiveWithConversation:(id)arg1;

@end
