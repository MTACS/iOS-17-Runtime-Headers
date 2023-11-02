
@interface SYIncomingTransactionSession : SYSession {
    id /* block */  _completion;
    SYChangeMessage * _message;
    NSObject<OS_os_activity> * _sessionActivity;
    bool  canRestart;
    bool  canRollback;
    unsigned int  state;
}

- (void).cxx_destruct;
- (void)_sendCancelled;
- (void)_sendChanges;
- (void)_sendComplete;
- (bool)canRestart;
- (bool)canRollback;
- (void)cancelWithError:(id)arg1;
- (void)didCompleteSession;
- (id)initWithService:(id)arg1 transaction:(id)arg2 completion:(id /* block */)arg3;
- (bool)isResetSync;
- (bool)isSending;
- (unsigned long long)protocolVersion;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;
- (void)setState:(unsigned int)arg1;
- (void)start:(id /* block */)arg1;
- (unsigned int)state;
- (bool)wasCancelled;

@end
