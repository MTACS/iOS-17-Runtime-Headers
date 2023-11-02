
@interface WKDownload : NSObject <NSProgressReporting, WKObject> {
    struct WeakObjCPtr<id<WKDownloadDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    struct ObjectStorage<WebKit::DownloadProxy> { 
        struct type { 
            unsigned char __lx[344]; 
        } data; 
    }  _download;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKDownloadDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURLRequest *originalRequest;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)cancel:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)originalRequest;
- (id)progress;
- (void)setDelegate:(id)arg1;
- (id)webView;

@end
