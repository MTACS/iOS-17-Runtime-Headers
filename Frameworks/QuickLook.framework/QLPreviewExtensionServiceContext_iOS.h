
@interface QLPreviewExtensionServiceContext_iOS : NSExtensionContext <QLPreviewProviderContext, QLRemotePreviewHost, QLRemotePreviewService> {
    id  _contents;
    bool  _isObservingPreviewController;
    QLPreviewProvider<QLPreviewingController> * _previewProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) QLPreviewProvider<QLPreviewingController> *previewProvider;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)_startObservingPreviewControllerAttributeChanges;
- (void)_stopObservingPreviewControllerAttributeChanges;
- (void)dealloc;
- (void)generatePreviewForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)getARQLInlineProxy2WithCompletionHandler:(id /* block */)arg1;
- (void)getARQLInlineProxy3WithCompletionHandler:(id /* block */)arg1;
- (void)getARQLInlineProxyWithCompletionHandler:(id /* block */)arg1;
- (void)getPrinterProxyWithCompletionHandler:(id /* block */)arg1;
- (void)invalidateServiceWithCompletionHandler:(id /* block */)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)previewControllerWantsFullScreen:(bool)arg1;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (id)previewProvider;
- (id)previewViewController;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (id)protocolHost;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setHostViewControllerProxy:(id)arg1;
- (void)setPreviewProvider:(id)arg1;

@end
