
@interface SpotlightDaemonClientConnection : CSXPCConnection {
    NSObject<SpotlightDaemonClient> * _spotlightDaemonClient;
}

@property (nonatomic, readonly) NSObject<SpotlightDaemonClient> *spotlightDaemonClient;

- (void).cxx_destruct;
- (bool)addClientConnectionIfAllowedForConnection:(id)arg1;
- (bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (id)initWithClient:(id)arg1 forServiceName:(id)arg2;
- (bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (id)spotlightDaemonClient;

@end
