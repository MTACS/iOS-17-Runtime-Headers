
@interface QLPasswordItemViewController : QLItemViewController <UIDocumentPasswordViewDelegate> {
    id /* block */  _completionBlock;
    QLPreviewContext * _context;
}

- (void).cxx_destruct;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (void)invalidate;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadView;
- (id)passwordView;
- (void)previewDidAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;

@end
