
@interface BTAirPodsControlRequest : NSObject {
    BTAirPodsControlServiceClient * _client;
    bool  _enabled;
    id /* block */  _getHandler;
    id /* block */  _setHandler;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, retain) BTAirPodsControlServiceClient *client;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ getHandler;
@property (nonatomic, copy) id /* block */ setHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (id)client;
- (bool)enabled;
- (id /* block */)getHandler;
- (void)setClient:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGetHandler:(id /* block */)arg1;
- (id /* block */)setHandler;
- (void)setSetHandler:(id /* block */)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end
