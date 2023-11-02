
@interface WFMarkupActionUIKitUserInterface : WFActionUserInterface <QLPreviewControllerDataSource, QLPreviewControllerDelegate, WFMarkupActionUserInterface> {
    id /* block */  _completionHandler;
    NSMutableDictionary * _editedPreviewItems;
    NSArray * _previewItems;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *editedPreviewItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *previewItems;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (id)editedItems;
- (id)editedPreviewItems;
- (void)finishWithError:(id)arg1;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)previewItems;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEditedPreviewItems:(id)arg1;
- (void)setPreviewItems:(id)arg1;
- (void)showWithPreviewItems:(id)arg1 completionHandler:(id /* block */)arg2;

@end
