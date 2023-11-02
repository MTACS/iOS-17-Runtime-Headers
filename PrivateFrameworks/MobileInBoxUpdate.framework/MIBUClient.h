
@interface MIBUClient : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (bool)_isActivated:(id*)arg1;
- (bool)_isOnLockScreen;
- (void)_setupConnection;
- (void)connectToWiFi:(id*)arg1;
- (id)connection;
- (void)dealloc;
- (void)eapConfigurationWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (bool)isInBoxUpdateMode:(id*)arg1;
- (void)setConnection:(id)arg1;
- (void)stopWiFiMonitor:(id*)arg1;
- (void)terminateInBoxUpdateWithCompletion:(id /* block */)arg1;

@end
