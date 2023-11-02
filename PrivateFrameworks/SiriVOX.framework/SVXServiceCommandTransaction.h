
@interface SVXServiceCommandTransaction : NSObject {
    NSHashTable * _blockedTransactions;
    NSMutableSet * _blockingTransactions;
    AceObject<SAAceCommand> * _command;
    id /* block */  _completion;
    NSMutableDictionary * _handledResultsByHandlerIdentifier;
    NSArray * _handlers;
    <SVXPerforming> * _performer;
    NSMutableDictionary * _preparedContextsByHandlerIdentifier;
    NSMutableDictionary * _preparedResultsByHandlerIdentifier;
    long long  _state;
    <SVXTaskTracking> * _taskTracker;
}

- (void).cxx_destruct;
- (void)_addBlockedTransaction:(id)arg1;
- (void)_didHandleAll;
- (void)_didPrepareAll;
- (void)_dispatchCompletionWithResult:(id)arg1;
- (void)_handle;
- (void)_handler:(id)arg1 didHandleWithResult:(id)arg2 completion:(id /* block */)arg3;
- (void)_handler:(id)arg1 didPrepareSuccessfully:(bool)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)_invalidate;
- (void)_prepare;
- (void)_removeBlockingTransaction:(id)arg1;
- (void)_unblockDependentTransactions;
- (void)addBlockedTransaction:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handler:(id)arg1 didHandleWithResult:(id)arg2 completion:(id /* block */)arg3;
- (void)handler:(id)arg1 didPrepareSuccessfully:(bool)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithPerformer:(id)arg1 command:(id)arg2 handlers:(id)arg3 taskTracker:(id)arg4 dependencies:(id)arg5 completion:(id /* block */)arg6;
- (void)invalidate;
- (void)removeBlockingTransaction:(id)arg1;

@end
