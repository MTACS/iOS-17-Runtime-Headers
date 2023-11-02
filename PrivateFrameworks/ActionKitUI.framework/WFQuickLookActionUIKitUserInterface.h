
@interface WFQuickLookActionUIKitUserInterface : WFActionUserInterface <QLPreviewControllerPrivateDelegate, WFQuickLookActionUserInterface> {
    id /* block */  _completionHandler;
    WFContentCollection * _dataSource;
    NSError * _exitError;
    QLPreviewController * _previewController;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) WFContentCollection *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *exitError;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) QLPreviewController *previewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (id)dataSource;
- (id)exitError;
- (void)finishWithError:(id)arg1;
- (id)previewController;
- (bool)previewController:(id)arg1 canShareItem:(id)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDataSource:(id)arg1;
- (void)setExitError:(id)arg1;
- (void)setPreviewController:(id)arg1;
- (void)showWithItems:(id)arg1 fullScreen:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
