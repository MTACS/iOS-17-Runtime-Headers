
@interface _WKDataTask : NSObject <WKObject> {
    struct ObjectStorage<API::DataTask> { 
        struct type { 
            unsigned char __lx[104]; 
        } data; 
    }  _dataTask;
    struct RetainPtr<id<_WKDataTaskDelegate>> { 
        void *m_ptr; 
    }  _delegate;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <_WKDataTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)webView;

@end
