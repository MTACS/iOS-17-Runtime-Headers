
@interface GTMTLTelemetryServiceXPCProxy : NSObject <GTMTLTelemetryService> {
    GTServiceConnection * _connection;
    NSSet * _ignoreMethods;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _observerIdToPort;
}

- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)arg1;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (id)query:(id)arg1;
- (unsigned long long)registerObserver:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)update:(id)arg1;

@end
