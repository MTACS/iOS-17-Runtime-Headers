
@interface IMURLRequestService : IMBaseStoreService {
    NSURLRequest * _mutableRequest;
}

@property (nonatomic, retain) NSURLRequest *mutableRequest;
@property (nonatomic, retain) <NSURLSessionDelegate><AMSURLProtocolDelegate> *urlSessionDelegate;

- (void).cxx_destruct;
- (id)mutableRequest;
- (void)performRequest:(id /* block */)arg1;
- (void)setMutableRequest:(id)arg1;
- (void)setUrlSessionDelegate:(id)arg1;
- (id)urlSessionDelegate;

@end
