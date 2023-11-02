
@interface WLKTopShelfUpNextRequestOperation : WLKUTSNetworkRequestOperation {
    WLKContinueWatchingResponse * _response;
}

@property (nonatomic, retain) WLKContinueWatchingResponse *response;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueryParameters:(id)arg1 options:(long long)arg2;
- (void)processResponse;
- (id)response;
- (void)setResponse:(id)arg1;

@end
