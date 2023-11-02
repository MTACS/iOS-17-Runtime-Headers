
@interface SKCaptiveContext : NSObject {
    id /* block */  _responseHandler;
    SKSetupCaptiveNetworkJoinServer * _server;
}

@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) SKSetupCaptiveNetworkJoinServer *server;

- (void).cxx_destruct;
- (id /* block */)responseHandler;
- (id)server;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setServer:(id)arg1;

@end
