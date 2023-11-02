
@interface AFUIDelayedActionCommandCache : NSObject {
    NSMutableDictionary * _delayedActionTimersByIdentifier;
    NSMutableDictionary * _dismissalDelayedActionCommandsByIdentifier;
}

- (void).cxx_destruct;
- (id)_commandHandler;
- (void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2;
- (void)_performCommandsWithDelayedActionCommand:(id)arg1;
- (void)_performDelayedActionCommandTimerAction:(id)arg1;
- (void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)enqueueDelayedActionCommand:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)invalidatePendingCommands;
- (void)performDismissalCommands;

@end
