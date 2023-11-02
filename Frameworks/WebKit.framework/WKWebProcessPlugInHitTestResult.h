
@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleHitTestResult> { 
        struct type { 
            unsigned char __lx[152]; 
        } data; 
    }  _hitTestResult;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)dealloc;
- (id)nodeHandle;

@end
