
@interface _HDMaintenanceWorkCoordinatorProtectedDatabaseOperation : HDMaintenanceOperation {
    HDAssertion * _accessibilityAssertion;
    HDDatabase * _database;
    id /* block */  _operationBlock;
    HDDaemonTransaction * _transaction;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1 database:(id)arg2 operationBlock:(id /* block */)arg3;
- (void)main;

@end
