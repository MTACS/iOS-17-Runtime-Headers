
@interface QLLoadingItemViewController : QLItemViewController {
    UILabel * _loadingLabel;
    UIActivityIndicatorView * _spinner;
}

- (void).cxx_destruct;
- (void)_updateLoadingLabel;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;

@end
