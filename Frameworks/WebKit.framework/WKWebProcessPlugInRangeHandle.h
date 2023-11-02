
@interface WKWebProcessPlugInRangeHandle : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleRangeHandle> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    }  _rangeHandle;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly) void*_rangeHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)rangeHandleWithJSValue:(id)arg1 inContext:(id)arg2;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void*)_rangeHandle;
- (void)dealloc;
- (id)detectDataWithTypes:(unsigned long long)arg1 context:(id)arg2;
- (id)frame;
- (id)text;

@end
