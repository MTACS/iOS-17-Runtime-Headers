
@interface WebDownload : NSURLDownload {
    WebDownloadInternal * _webInternal;
}

- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (void)_setRealDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;

@end
