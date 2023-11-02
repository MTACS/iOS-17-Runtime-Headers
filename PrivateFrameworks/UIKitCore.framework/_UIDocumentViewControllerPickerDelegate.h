
@interface _UIDocumentViewControllerPickerDelegate : NSObject <UIDocumentPickerDelegate> {
    id /* block */  _completionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)delegateForPicker:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_attachToPicker:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (id)initWithCompletionHandler:(id /* block */)arg1;

@end
