
@interface QLErrorItemViewController : QLItemViewController {
    NSError * _error;
    QLItem * _previewItem;
}

@property (nonatomic, retain) NSError *error;
@property (retain) QLItem *previewItem;

- (void).cxx_destruct;
- (void)_updateLabelsWithCurrentErrorIfNeeded;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (id)error;
- (id)errorView;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadView;
- (id)previewItem;
- (void)setError:(id)arg1;
- (void)setPreviewItem:(id)arg1;

@end
