
@interface LNQuickLook : NSObject <QLPreviewControllerDataSource, QLPreviewControllerPrivateDelegate> {
    id /* block */  _completionHandler;
    NSMutableDictionary * _editedPreviewItems;
    long long  _editingMode;
    NSArray * _items;
    QLPreviewController * _previewController;
    UIViewController * _viewControllerForPresenting;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *editedPreviewItems;
@property (nonatomic) long long editingMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) QLPreviewController *previewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewControllerForPresenting;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (id)editedItems;
- (id)editedPreviewItems;
- (long long)editingMode;
- (void)finishWithError:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)items;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)presentOverViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)previewController;
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEditedPreviewItems:(id)arg1;
- (void)setEditingMode:(long long)arg1;
- (void)setItems:(id)arg1;
- (void)setPreviewController:(id)arg1;
- (void)setViewControllerForPresenting:(id)arg1;
- (id)viewControllerForPresenting;

@end
