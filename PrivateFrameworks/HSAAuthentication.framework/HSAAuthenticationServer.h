
@interface HSAAuthenticationServer : NSObject {
    NSMutableArray * _clients;
    NSObject<OS_xpc_object> * _connection;
    bool  _hasRegistered;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_cleanupClient:(id)arg1;
- (void)_clientConnected;
- (void)_configureWithClient:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)parseIncomingMessageFromNumber:(id)arg1 forService:(id)arg2 messageBody:(id)arg3;

@end
