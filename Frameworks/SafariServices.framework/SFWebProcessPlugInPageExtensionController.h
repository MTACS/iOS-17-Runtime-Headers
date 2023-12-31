
@interface SFWebProcessPlugInPageExtensionController : NSObject {
    WKWebProcessPlugInBrowserContextController * _browserContextController;
    _WKRemoteObjectInterface * _extensionControllerInterface;
    NSMutableDictionary * _extensionToScriptWorldMap;
}

- (void).cxx_destruct;
- (void)_clearExtensionControllerInterface;
- (void)_setUpExtensionControllerInterface;
- (void)clearExtensionScriptWorlds;
- (void)dealloc;
- (void)evaluateJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2;
- (id)initWithBrowserContextController:(id)arg1;
- (void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2;

@end
