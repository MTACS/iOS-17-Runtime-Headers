
@interface NWTCPListener : NSObject {
    <NWTCPListenerDelegate> * _delegate;
    NWEndpoint * _endpoint;
    NSError * _error;
    NSObject<OS_nw_listener> * _internalListener;
    NSString * _launchdKey;
    NWEndpoint * _localEndpoint;
    NWParameters * _parameters;
}

@property <NWTCPListenerDelegate> *delegate;
@property (retain) NWEndpoint *endpoint;
@property (retain) NSError *error;
@property (retain) NSObject<OS_nw_listener> *internalListener;
@property (retain) NSString *launchdKey;
@property (retain) NWEndpoint *localEndpoint;
@property (retain) NWParameters *parameters;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)endpoint;
- (id)error;
- (void)handleError:(id)arg1;
- (void)handleNewConnection:(id)arg1;
- (id)initWithBonjourServiceEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithLaunchdKey:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2 launchdKey:(id)arg3 bonjourEndpoint:(id)arg4;
- (id)internalListener;
- (id)launchdKey;
- (id)localEndpoint;
- (id)parameters;
- (void)setDelegate:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setError:(id)arg1;
- (void)setInternalListener:(id)arg1;
- (void)setLaunchdKey:(id)arg1;
- (void)setLocalEndpoint:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)startInternal;

@end
