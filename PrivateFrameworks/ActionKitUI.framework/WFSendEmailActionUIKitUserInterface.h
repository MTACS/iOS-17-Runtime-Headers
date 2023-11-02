
@interface WFSendEmailActionUIKitUserInterface : WFEmbeddableActionUserInterface <MFMailComposeViewControllerDelegate, WFSendEmailActionUserInterface> {
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
- (void)finishWithError:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithEmailContent:(id)arg1 preferredSendingEmailAddress:(id)arg2 isManaged:(bool)arg3 completionHandler:(id /* block */)arg4;

@end
