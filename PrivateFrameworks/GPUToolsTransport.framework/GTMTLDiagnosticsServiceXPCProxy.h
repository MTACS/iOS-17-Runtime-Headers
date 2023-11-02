
@interface GTMTLDiagnosticsServiceXPCProxy : NSObject <GTMTLDiagnosticsService> {
    GTServiceConnection * _connection;
    NSSet * _ignoreMethods;
    NSMutableDictionary * _observerIdToPort;
}

- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)arg1;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (void)raiseRuntimeIssue:(id)arg1;
- (unsigned long long)registerObserver:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
