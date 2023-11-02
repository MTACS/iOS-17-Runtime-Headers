
@interface _WKInspector : NSObject <WKObject, _WKInspectorExtensionHost, _WKInspectorIBActions> {
    struct WeakObjCPtr<id<_WKInspectorDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    struct ObjectStorage<WebKit::WebInspectorUIProxy> { 
        struct type { 
            unsigned char __lx[88]; 
        } data; 
    }  _inspector;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_WKInspectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WKWebView *extensionHostWebView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, readonly) bool isElementSelectionActive;
@property (nonatomic, readonly) bool isFront;
@property (nonatomic, readonly) bool isProfilingPage;
@property (nonatomic, readonly) bool isVisible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)_fetchURLForTesting:(id)arg1;
- (void)_openURLExternallyForTesting:(id)arg1 useFrontendAPI:(bool)arg2;
- (void)_setDiagnosticLoggingDelegate:(id)arg1;
- (void)attach;
- (void)close;
- (void)connect;
- (void)dealloc;
- (id)delegate;
- (void)detach;
- (id)extensionHostWebView;
- (void)hide;
- (id)inspectorWebView;
- (bool)isConnected;
- (bool)isElementSelectionActive;
- (bool)isFront;
- (bool)isProfilingPage;
- (bool)isVisible;
- (void)navigateExtensionTabWithIdentifier:(id)arg1 toURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)printErrorToConsole:(id)arg1;
- (void)registerExtensionWithID:(id)arg1 extensionBundleIdentifier:(id)arg2 displayName:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)show;
- (void)showConsole;
- (void)showExtensionTabWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showMainResourceForFrame:(id)arg1;
- (void)showResources;
- (void)toggleElementSelection;
- (void)togglePageProfiling;
- (void)unregisterExtension:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)webView;

@end
