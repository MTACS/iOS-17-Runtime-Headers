
@interface WFOpenInActionUIKitUserInterface : WFActionUserInterface <UIDocumentInteractionControllerDelegate, WFOpenInActionUserInterface> {
    id /* block */  _completionHandler;
    UIDocumentInteractionController * _documentController;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDocumentInteractionController *documentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (id)documentController;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDocumentController:(id)arg1;
- (void)showWithFile:(id)arg1 contentManaged:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
