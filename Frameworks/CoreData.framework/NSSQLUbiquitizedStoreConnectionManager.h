
@interface NSSQLUbiquitizedStoreConnectionManager : NSSQLConnectionManager {
    NSSQLiteConnection * _connection;
}

- (void)dealloc;
- (void)disconnectAllConnections;
- (bool)handleStoreRequest:(id)arg1;
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;
- (void)scheduleBarrierBlock:(id /* block */)arg1;
- (void)scheduleConnectionsBarrier:(id /* block */)arg1;
- (void)setExclusiveLockingMode:(bool)arg1;

@end
