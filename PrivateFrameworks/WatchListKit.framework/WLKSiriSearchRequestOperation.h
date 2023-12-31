
@interface WLKSiriSearchRequestOperation : WLKUTSNetworkRequestOperation {
    NSDictionary * _query;
    WLKSiriSearchResponse * _response;
}

@property (nonatomic, readonly, copy) NSDictionary *query;
@property (nonatomic, readonly) WLKSiriSearchResponse *response;

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 caller:(id)arg2;
- (void)processResponse;
- (id)query;
- (id)response;

@end
