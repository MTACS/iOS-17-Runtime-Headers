
@interface _SFSafariSharingExtensionController : NSObject {
    <SFSharingExtensionWebProcessController> * _extensionControllerProxy;
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (id)_extensionControllerProxy;
- (void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2;
- (id)initWithWebView:(id)arg1;
- (void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2;
- (void)runJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completion:(id /* block */)arg3;

@end
