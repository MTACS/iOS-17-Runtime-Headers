
@interface STSetupClient : NSObject {
    NSXPCConnection * _connection;
}

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void).cxx_destruct;
- (bool)applyUpdatedConfiguration:(id)arg1 error:(id*)arg2;
- (void)collectPasscodeFromUserWithCompletionHandler:(id /* block */)arg1;
- (id)connection;
- (id)currentConfigurationForUser:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;

@end
