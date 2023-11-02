
@interface SRUIFDelayedActionCommandCache : NSObject {
    NSMutableDictionary * _delayedActionTimersByIdentifier;
    <SRUIFDelayedActionCommandCacheDelegate> * _delegate;
    NSMutableDictionary * _dismissalDelayedActionCommandsByIdentifier;
}

@property (nonatomic) <SRUIFDelayedActionCommandCacheDelegate> *delegate;

- (void).cxx_destruct;
- (id)_commandHandler;
- (void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2;
- (void)_performCommandsWithDelayedActionCommand:(id)arg1;
- (void)_performDelayedActionCommandTimerAction:(id)arg1;
- (void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)enqueueDelayedActionCommand:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)invalidatePendingCommands;
- (void)performDismissalCommands;
- (void)setDelegate:(id)arg1;

@end
