
@interface AKAppleIDServerUIContextController : NSObject {
    AKServerRequestConfiguration * _configuration;
    NSURL * _initiatingURL;
    NSHTTPURLResponse * _latestReadResponse;
    AKAppleIDServerUIDataHarvester * _serverDataHarvester;
    id /* block */  _serverUICompletion;
    AKAppleIDServerResourceLoadDelegate * _serverUIDelegate;
}

@property (nonatomic, readonly, copy) NSURL *initiatingURL;
@property (nonatomic, readonly) AKAppleIDServerUIDataHarvester *serverDataHarvester;
@property (nonatomic, readonly) AKAppleIDServerResourceLoadDelegate *serverUIDelegate;

- (void).cxx_destruct;
- (void)_completeWithResponse:(id)arg1 additionalData:(id)arg2 error:(id)arg3;
- (id)_headerValueFromType:(unsigned long long)arg1;
- (void)completeWithError:(id)arg1;
- (void)completeWithError:(id)arg1 additionalData:(id)arg2;
- (void)completeWithFinalResponse:(id)arg1;
- (bool)handleAuthKitActionAttribute:(id)arg1;
- (id)initWithRequestConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)initiatingURL;
- (void)processResponse:(id)arg1;
- (id)serverDataHarvester;
- (id)serverUIDelegate;
- (void)signRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)tearDownContext;

@end
