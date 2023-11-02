
@interface WFSelectFilesUIKitUserInterface : WFEmbeddableActionUserInterface <UIDocumentPickerDelegate, WFFilePickerUserInterface> {
    id /* block */  _completionHandler;
    NSString * _consumingBundleID;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *consumingBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (id)consumingBundleID;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)finishWithResults:(id)arg1 error:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)retrieveFilesWithConsumingBundleID:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConsumingBundleID:(id)arg1;
- (id)supportedPickerContentTypesWithOptions:(unsigned long long)arg1;

@end
