
@interface _WKWebExtensionController : NSObject <WKObject> {
    <_WKWebExtensionControllerDelegate> * _delegate;
    struct ObjectStorage<WebKit::WebExtensionController> { 
        struct type { 
            unsigned char __lx[120]; 
        } data; 
    }  _webExtensionController;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) void*_webExtensionController;
@property (nonatomic, readonly, copy) _WKWebExtensionControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_WKWebExtensionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *extensionContexts;
@property (nonatomic, readonly, copy) NSSet *extensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void*)_webExtensionController;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id)extensionContextForExtension:(id)arg1;
- (id)extensionContexts;
- (id)extensions;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)loadExtensionContext:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)unloadExtensionContext:(id)arg1 error:(id*)arg2;

@end
