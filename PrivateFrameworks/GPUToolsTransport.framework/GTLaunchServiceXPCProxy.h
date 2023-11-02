
@interface GTLaunchServiceXPCProxy : NSObject <GTLaunchService> {
    <GTXPCConnection> * _connection;
    NSSet * _ignoreMethods;
}

- (void).cxx_destruct;
- (bool)foregroundService:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (bool)launchReplayService:(id)arg1 error:(id*)arg2;
- (void)processStateForService:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)resumeService:(unsigned long long)arg1 error:(id*)arg2;
- (void)symbolicatorForService:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;

@end
