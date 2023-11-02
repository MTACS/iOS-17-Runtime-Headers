
@interface SCLInterruptBehaviorResolution : NSObject {
    NSString * _clientIdentifier;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
}

+ (id)resolutionForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)arg1;
- (id)resolveBehaviorForEvent:(id)arg1 error:(out id*)arg2;
- (id)serverConnection;
- (void)setServerConnection:(id)arg1;

@end
