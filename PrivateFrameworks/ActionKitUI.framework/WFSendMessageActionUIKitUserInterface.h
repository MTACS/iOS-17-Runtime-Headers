
@interface WFSendMessageActionUIKitUserInterface : WFEmbeddableActionUserInterface <MFMessageComposeViewControllerDelegate, WFSendMessageActionUserInterface> {
    id /* block */  _completionHandler;
    NSArray * _files;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *files;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (id)files;
- (void)finishWithError:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setFiles:(id)arg1;
- (void)showWithRecipients:(id)arg1 content:(id)arg2 attachments:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)showWithRecipients:(id)arg1 content:(id)arg2 files:(id)arg3 completionHandler:(id /* block */)arg4;

@end
