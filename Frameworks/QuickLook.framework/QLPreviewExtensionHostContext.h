
@interface QLPreviewExtensionHostContext : NSExtensionContext <QLRemotePreviewService> {
    QLRemoteItemViewController * _remoteItemViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) QLRemoteItemViewController *remoteItemViewController;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)generatePreviewForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)getARQLInlineProxy2WithCompletionHandler:(id /* block */)arg1;
- (void)getARQLInlineProxy3WithCompletionHandler:(id /* block */)arg1;
- (void)getARQLInlineProxyWithCompletionHandler:(id /* block */)arg1;
- (void)getPrinterProxyWithCompletionHandler:(id /* block */)arg1;
- (void)invalidateServiceWithCompletionHandler:(id /* block */)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)previewControllerWantsFullScreen:(bool)arg1;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (id)protocolService;
- (id)protocolServiceWithErrorHandler:(id /* block */)arg1;
- (id)remoteItemViewController;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setHostViewControllerProxy:(id)arg1;
- (void)setRemoteItemViewController:(id)arg1;

@end
