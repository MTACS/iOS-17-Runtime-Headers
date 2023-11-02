
@interface PBFPosterRoleProcessor : NSObject <BSInvalidatable> {
    _PBFPosterRoleProcessorTransaction * _activeTransaction;
    <PBFPosterExtensionDataStorage> * _dataStorage;
    BSAtomicFlag * _invalidationFlag;
    NSObject<OS_os_log> * _log;
    NSString * _logIdentifier;
    NSHashTable * _observers;
    NSArray * _roleCoordinators;
    NSOrderedSet * _roleOrderedSet;
    NSDictionary * _roleToRoleCoordinator;
}

@property (readonly) <PBFPosterExtensionDataStorage> *dataStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property NSObject<OS_os_log> *log;
@property (copy) NSString *logIdentifier;
@property (readonly) NSArray *roleCoordinators;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_executeChange:(id)arg1 roleCoordinator:(id)arg2 changeHandler:(id)arg3 recursiveDepth:(unsigned long long)arg4 transaction:(id)arg5 error:(out id*)arg6;
- (bool)_executeTransaction:(id)arg1 block:(id /* block */)arg2 error:(out id*)arg3;
- (void)_fireDidBeginTransaction:(id)arg1;
- (void)_fireDidCommitTransaction:(id)arg1;
- (void)_fireDidEvaluateEvent:(id)arg1 transaction:(id)arg2;
- (void)_fireDidExecuteChange:(id)arg1 transaction:(id)arg2;
- (void)_fireDidFinalizeTransaction:(id)arg1;
- (void)_fireTransactionFinished:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)_fireWasInvalidated:(id)arg1;
- (void)_fireWillBeginTransaction:(id)arg1;
- (void)_fireWillCommitTransaction:(id)arg1;
- (void)_fireWillEvaluateEvent:(id)arg1 transaction:(id)arg2;
- (void)_fireWillExecuteChange:(id)arg1 transaction:(id)arg2;
- (void)_fireWillFinalizeTransaction:(id)arg1;
- (bool)_processEvent:(id)arg1 changeHandler:(id)arg2 recursiveDepth:(unsigned long long)arg3 transaction:(id)arg4 error:(out id*)arg5;
- (void)addObserver:(id)arg1;
- (id)dataStorage;
- (id)initWithDataStorage:(id)arg1 roleCoordinators:(id)arg2;
- (void)invalidate;
- (id)log;
- (id)logIdentifier;
- (void)noteTransactionWasInvalidated:(id)arg1;
- (id)processChanges:(id)arg1 context:(id)arg2 reason:(id)arg3 userInfo:(id)arg4 error:(id*)arg5;
- (id)processEvents:(id)arg1 context:(id)arg2 reason:(id)arg3 userInfo:(id)arg4 error:(out id*)arg5;
- (void)removeObserver:(id)arg1;
- (id)roleCoordinators;
- (void)setLog:(id)arg1;
- (void)setLogIdentifier:(id)arg1;

@end
