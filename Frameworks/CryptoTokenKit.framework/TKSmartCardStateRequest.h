
@interface TKSmartCardStateRequest : NSObject {
    unsigned long long  _activeStateNotifications;
    id /* block */  _replyFlushedState;
    id /* block */  _replyNextState;
    long long  _stateWhenRequested;
}

@property unsigned long long activeStateNotifications;
@property (copy) id /* block */ replyFlushedState;
@property (copy) id /* block */ replyNextState;
@property long long stateWhenRequested;

- (void).cxx_destruct;
- (unsigned long long)activeStateNotifications;
- (id /* block */)replyFlushedState;
- (id /* block */)replyNextState;
- (void)setActiveStateNotifications:(unsigned long long)arg1;
- (void)setReplyFlushedState:(id /* block */)arg1;
- (void)setReplyNextState:(id /* block */)arg1;
- (void)setStateWhenRequested:(long long)arg1;
- (long long)stateWhenRequested;

@end
