
@interface WFSaveDropboxFileActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIAdaptivePresentationControllerDelegate, WFSaveDropboxFileActionUserInterface> {
    id /* block */  _completionHandler;
    <WFFileStorageServiceOperation> * _saveOperation;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <WFFileStorageServiceOperation> *saveOperation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)saveOperation;
- (id)selectedStorageServiceForName:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setSaveOperation:(id)arg1;
- (void)showWithServiceName:(id)arg1 input:(id)arg2 managedLevel:(unsigned long long)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;

@end
