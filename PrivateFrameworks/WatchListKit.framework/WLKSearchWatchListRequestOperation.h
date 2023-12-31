
@interface WLKSearchWatchListRequestOperation : WLKUTSNetworkRequestOperation {
    NSDictionary * _query;
    WLKSearchWatchListResponse * _response;
}

@property (nonatomic, readonly, copy) NSDictionary *query;
@property (nonatomic, readonly) WLKSearchWatchListResponse *response;

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 caller:(id)arg2;
- (void)processResponse;
- (id)query;
- (id)response;

@end
