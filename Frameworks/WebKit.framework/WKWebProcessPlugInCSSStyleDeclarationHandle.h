
@interface WKWebProcessPlugInCSSStyleDeclarationHandle : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleCSSStyleDeclarationHandle> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    }  _cssStyleDeclarationHandle;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly) void*_cssStyleDeclarationHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cssStyleDeclarationHandleWithJSValue:(id)arg1 inContext:(id)arg2;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void*)_cssStyleDeclarationHandle;
- (void)dealloc;

@end
