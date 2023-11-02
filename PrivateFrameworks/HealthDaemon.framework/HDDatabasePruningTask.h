
@interface HDDatabasePruningTask : NSObject {
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (void)enqueueMaintenanceOperationOnCoordinator:(id)arg1 takeAccessibilityAssertion:(bool)arg2 nowDate:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithProfile:(id)arg1;
- (bool)pruneDatabaseWithAccessibilityAssertion:(id)arg1 nowDate:(id)arg2 error:(id*)arg3;
- (bool)pruneDatabaseWithAccessibilityAssertion:(id)arg1 nowDate:(id)arg2 prunedObjectLimit:(unsigned long long)arg3 prunedObjectTransactionLimit:(unsigned long long)arg4 error:(id*)arg5;

@end
