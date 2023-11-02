
@interface WLKContinueWatchingRequestOperation : WLKUTSNetworkRequestOperation {
    WLKContinueWatchingResponse * _response;
}

@property (nonatomic, retain) WLKContinueWatchingResponse *response;

+ (void)donateMediaItems:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCaller:(id)arg1 options:(long long)arg2;
- (id)initWithQueryParameters:(id)arg1;
- (void)processResponse;
- (id)response;
- (void)setResponse:(id)arg1;

@end
