
@interface WFGetDropboxFileActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIAdaptivePresentationControllerDelegate, WFGetDropboxFileActionUserInterface> {
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
- (void)finishWithResults:(id)arg1 error:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)selectedStorageServiceForName:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithServiceName:(id)arg1 directoryPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;

@end
