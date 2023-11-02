
@interface GTLoopbackServiceXPCProxy : NSObject <GTLoopbackService> {
    GTServiceConnection * _connection;
}

- (void).cxx_destruct;
- (id)echo:(id)arg1;
- (void)echo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)echo:(id)arg1 repeat:(unsigned long long)arg2 callback:(id /* block */)arg3;
- (void)echo:(id)arg1 repeat:(unsigned long long)arg2 callback:(id /* block */)arg3 complete:(id /* block */)arg4;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;

@end
