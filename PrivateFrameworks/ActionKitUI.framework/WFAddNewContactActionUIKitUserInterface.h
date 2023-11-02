
@interface WFAddNewContactActionUIKitUserInterface : WFEmbeddableActionUserInterface <CNContactViewControllerDelegate, UIAdaptivePresentationControllerDelegate, WFAddNewContactActionUserInterface> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)finishWithContactIdentifier:(id)arg1 error:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithContactParameters:(id)arg1 completionHandler:(id /* block */)arg2;

@end
