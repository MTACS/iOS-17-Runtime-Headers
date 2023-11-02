
@interface DMMigrationPluginWrapperConnection : NSObject {
    DMXPCConnection * _connection;
    bool  _didReceivePid;
}

@property (nonatomic, readonly) bool didReceivePid;

+ (id)connection;

- (void).cxx_destruct;
- (int)_pid;
- (bool)didReceivePid;
- (void)handleMessage:(id)arg1;
- (id)init;
- (void)invalidate;
- (int)pidForWatchdog;
- (void)resume;
- (void)runPluginAtPath:(id)arg1 withIdentifier:(id)arg2 parameters:(id)arg3 completion:(id /* block */)arg4;

@end
