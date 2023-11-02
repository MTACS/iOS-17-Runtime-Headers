
@interface _DKKnowledgeStore : NSObject <_DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeSynchronizing> {
    NSObject<OS_dispatch_queue> * _defaultQueue;
    NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> * _knowledgeStoreHandle;
    _DKPrivacyPolicyEnforcer * _privacyEnforcer;
    _DKRateLimitPolicyEnforcer * _rateLimitEnforcer;
}

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)knowledgeStore;
+ (id)knowledgeStoreWithDirectReadOnlyAccess;
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)arg1 storeDirectory:(id)arg2;
+ (id)knowledgeStoreWithDirectReadWriteAccess;
+ (id)userKnowledgeStore;
+ (id)userKnowledgeStoreWithDirectReadOnlyAccess;
+ (id)userKnowledgeStoreWithDirectReadWriteAccess;

- (void).cxx_destruct;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2;
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)deleteObjects:(id)arg1 error:(id*)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)deleteRemoteState:(id*)arg1;
- (id)deviceUUID;
- (id)executeQuery:(id)arg1 error:(id*)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)init;
- (id)initWithKnowledgeStoreHandle:(id)arg1 readOnly:(bool)arg2;
- (bool)saveObjects:(id)arg1 error:(id*)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)saveObjects:(id)arg1 tracker:(id /* block */)arg2 responseQueue:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2;
- (id)sourceDeviceIdentityWithError:(id*)arg1;
- (bool)synchronizeWithError:(id*)arg1;
- (bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/TipKitCore.framework/TipKitCore

- (void)deleteObjects:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)executeQuery:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)saveObjects:(id)arg1 withCompletion:(id /* block */)arg2;

@end
