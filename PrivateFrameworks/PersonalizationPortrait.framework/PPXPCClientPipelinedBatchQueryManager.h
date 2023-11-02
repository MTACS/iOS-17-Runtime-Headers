
@interface PPXPCClientPipelinedBatchQueryManager : NSObject {
    NSMutableDictionary * _queryContexts;
    _Atomic unsigned long long  _queryId;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)assertBatch:(id)arg1 forQueryName:(id)arg2 hasExpectedContainedType:(Class)arg3;

- (void).cxx_destruct;
- (void)cancelPendingQueriesWithError:(id)arg1;
- (void)handleReplyWithName:(id)arg1 batch:(id)arg2 isLast:(bool)arg3 error:(id)arg4 queryId:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)syncExecuteQueryWithName:(id)arg1 error:(id*)arg2 queryInitializer:(id /* block */)arg3 handleBatch:(id /* block */)arg4;

@end
