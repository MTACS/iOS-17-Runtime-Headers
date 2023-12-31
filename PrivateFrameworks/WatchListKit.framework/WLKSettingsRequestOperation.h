
@interface WLKSettingsRequestOperation : WLKNetworkRequestOperation {
    NSDictionary * _response;
}

@property (nonatomic, readonly) NSDictionary *response;

+ (id)_requestURL:(id*)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)prepareURLRequest:(id /* block */)arg1;
- (void)processResponse;
- (id)response;

@end
