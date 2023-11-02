
@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeSynchronizing> {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

+ (id)XPCKnowledgeStore;
+ (id)XPCUserKnowledgeStore;

- (void).cxx_destruct;
- (bool)confirmConnectionWithError:(id*)arg1;
- (id)connection;
- (void)dealloc;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2;
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 synchronous:(bool)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(id /* block */)arg5;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 synchronous:(bool)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(id /* block */)arg5;
- (bool)deleteObjects:(id)arg1 error:(id*)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)deleteObjects:(id)arg1 synchronous:(bool)arg2 responseQueue:(id)arg3 withCompletion:(id /* block */)arg4;
- (bool)deleteRemoteState:(id*)arg1;
- (id)deviceUUID;
- (id)executeQuery:(id)arg1 error:(id*)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)executeQuery:(id)arg1 synchronous:(bool)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(id /* block */)arg5;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (bool)saveObjects:(id)arg1 error:(id*)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)saveObjects:(id)arg1 synchronous:(bool)arg2 responseQueue:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)saveObjects:(id)arg1 tracker:(id /* block */)arg2 responseQueue:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)setConnection:(id)arg1;
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2;
- (id)sourceDeviceIdentityWithError:(id*)arg1;
- (bool)synchronizeWithError:(id*)arg1;
- (bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(id /* block */)arg4;

@end
