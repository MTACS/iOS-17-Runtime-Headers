
@interface SYIncomingSyncAllObjectsSession : SYIncomingFullSyncSession {
    NSMutableArray * _allObjectsAsData;
    id /* block */  _completion;
    bool  canRestart;
    bool  canRollback;
}

- (void).cxx_destruct;
- (void)_continueProcessing;
- (void)_sendEndSessionResponse:(id)arg1;
- (bool)canRestart;
- (bool)canRollback;
- (id)initWithService:(id)arg1 message:(id)arg2 completion:(id /* block */)arg3;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;

@end
