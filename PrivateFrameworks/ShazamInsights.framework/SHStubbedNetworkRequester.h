
@interface SHStubbedNetworkRequester : NSObject <SHNetworkRequester> {
    NSURL * _downloadFileURL;
    NSHTTPURLResponse * _httpResponse;
    NSData * _requestData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *downloadFileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHTTPURLResponse *httpResponse;
@property (nonatomic, readonly) NSData *requestData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)downloadFileURL;
- (void)downloadResourceFromRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)httpResponse;
- (id)initWithHTTPResponse:(id)arg1 requestData:(id)arg2 downloadFileURL:(id)arg3;
- (void)performRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestData;

@end
