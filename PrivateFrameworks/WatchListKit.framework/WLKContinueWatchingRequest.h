
@interface WLKContinueWatchingRequest : WLKRequest {
    bool  _allowAuthentication;
    WLKContinueWatchingResponse * _response;
}

@property (nonatomic) bool allowAuthentication;
@property (nonatomic, readonly) WLKContinueWatchingResponse *response;

- (void).cxx_destruct;
- (bool)allowAuthentication;
- (id)init;
- (void)makeRequestWithCompletion:(id /* block */)arg1;
- (id)response;
- (void)setAllowAuthentication:(bool)arg1;

@end
