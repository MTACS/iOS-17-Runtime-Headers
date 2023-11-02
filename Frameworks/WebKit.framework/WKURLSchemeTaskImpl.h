
@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate> {
    struct ObjectStorage<WebKit::WebURLSchemeTask> { 
        struct type { 
            unsigned char __lx[552]; 
        } data; 
    }  _urlSchemeTask;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) WKFrameInfo *_frame;
@property (nonatomic, readonly) bool _requestOnlyIfCached;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURLRequest *request;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)_didPerformRedirection:(id)arg1 newRequest:(id)arg2;
- (id)_frame;
- (bool)_requestOnlyIfCached;
- (void)_willPerformRedirection:(id)arg1 newRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)didFailWithError:(id)arg1;
- (void)didFinish;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (id)init;
- (id)request;

@end
