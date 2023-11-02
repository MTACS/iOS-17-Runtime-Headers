
@interface QLWebLocationItemViewController : QLItemViewController {
    NSLayoutConstraint * _leftConstraint;
    id /* block */  _loadingHandler;
    UIView * _locationView;
    UIView * _locationViewContainer;
    NSLayoutConstraint * _rightConstraint;
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (void)_updateConstraintConstants:(bool)arg1;
- (id)accessoryView;
- (bool)automaticallyUpdateScrollViewContentInset;
- (bool)automaticallyUpdateScrollViewContentOffset;
- (bool)automaticallyUpdateScrollViewIndicatorInset;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (void)dealloc;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)previewDidAppear:(bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (id)scrollView;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (id)toolbarButtonsForTraitCollection:(id)arg1;

@end
