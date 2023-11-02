
@interface TPSDuetDataProvider : NSObject {
    _CDClientContext * _context;
    NSMutableDictionary * _contextualRegistrations;
    NSObject<OS_dispatch_queue> * _registrationQueue;
    <_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> * _systemStore;
    <_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> * _userStore;
}

@property (nonatomic, readonly) <_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *systemStore;
@property (nonatomic, readonly) <_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *userStore;

- (void).cxx_destruct;
- (void)_deregisterWakingDuetRegistration:(id)arg1;
- (void)_executeHistogramQueryWithPredicate:(id)arg1 stream:(id)arg2 interval:(id)arg3 groupByKeyPaths:(id)arg4 userStore:(bool)arg5 completion:(id /* block */)arg6;
- (id)_executeQueryWithPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 userStore:(bool)arg5 deviceIDs:(id)arg6 error:(id*)arg7;
- (void)_executeQueryWithPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 userStore:(bool)arg5 deviceIDs:(id)arg6 withCompletion:(id /* block */)arg7;
- (id)_executeQueryWithPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 userStore:(bool)arg5 error:(id*)arg6;
- (void)_executeQueryWithPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 userStore:(bool)arg5 withCompletion:(id /* block */)arg6;
- (id)_initWithDirectory:(id)arg1;
- (id)_initWithStore:(id)arg1 context:(id)arg2;
- (void)countsForPredicate:(id)arg1 stream:(id)arg2 interval:(id)arg3 groupByKeyPaths:(id)arg4 userStore:(bool)arg5 completion:(id /* block */)arg6;
- (void)deleteEvents:(id)arg1 userStore:(bool)arg2 completion:(id /* block */)arg3;
- (void)deleteEventsWithPredicate:(id)arg1 streams:(id)arg2 userStore:(bool)arg3 completion:(id /* block */)arg4;
- (bool)deregisterWakingForAllRegistrations;
- (bool)deregisterWakingForRegistrationID:(id)arg1;
- (id)init;
- (void)observationDatesForPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 userStore:(bool)arg4 completion:(id /* block */)arg5;
- (void)observationDatesForPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 userStore:(bool)arg4 deviceIDs:(id)arg5 completion:(id /* block */)arg6;
- (bool)registerWakingForPredicate:(id)arg1 registrationID:(id)arg2 clientIdentifier:(id)arg3 callback:(id /* block */)arg4;
- (void)saveEvents:(id)arg1 userStore:(bool)arg2 completion:(id /* block */)arg3;
- (id)systemStore;
- (id)userStore;

@end
