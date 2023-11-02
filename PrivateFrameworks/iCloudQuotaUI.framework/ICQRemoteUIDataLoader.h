
@interface ICQRemoteUIDataLoader : NSObject <NSURLSessionTaskDelegate> {
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addHeadersForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)loadDataFromURL:(id)arg1 completion:(id /* block */)arg2;
- (id)session;
- (void)setSession:(id)arg1;

@end
