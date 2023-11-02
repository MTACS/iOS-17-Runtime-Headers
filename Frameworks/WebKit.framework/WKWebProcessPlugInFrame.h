
@interface WKWebProcessPlugInFrame : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebFrame> { 
        struct type { 
            unsigned char __lx[120]; 
        } data; 
    }  _frame;
}

@property (nonatomic, readonly) NSURL *URL;
@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) NSArray *appleTouchIconURLs;
@property (nonatomic, readonly) NSArray *childFrames;
@property (nonatomic, readonly) bool containsAnyFormElements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *faviconURLs;
@property (nonatomic, readonly) _WKFrameHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMainFrame;
@property (readonly) Class superclass;

+ (id)lookUpContentFrameFromWindowOrFrameElement:(id)arg1;
+ (id)lookUpFrameFromHandle:(id)arg1;
+ (id)lookUpFrameFromJSContext:(id)arg1;

- (id)URL;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_browserContextController;
- (id)_certificateChain;
- (bool)_hasCustomContentProvider;
- (id)_parentFrame;
- (id)_provisionalURL;
- (id)_securityOrigin;
- (struct __SecTrust { }*)_serverTrust;
- (id)appleTouchIconURLs;
- (id)childFrames;
- (bool)containsAnyFormElements;
- (void)dealloc;
- (id)faviconURLs;
- (id)handle;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(unsigned long long)arg2;
- (bool)isMainFrame;
- (id)jsCSSStyleDeclarationForCSSStyleDeclarationHandle:(id)arg1 inWorld:(id)arg2;
- (id)jsContextForServiceWorkerWorld:(id)arg1;
- (id)jsContextForWorld:(id)arg1;
- (id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2;
- (id)jsRangeForRangeHandle:(id)arg1 inWorld:(id)arg2;

@end
