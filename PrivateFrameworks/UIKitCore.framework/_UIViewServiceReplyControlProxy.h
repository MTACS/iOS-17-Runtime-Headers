
@interface _UIViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl> {
    _UIViewServiceReplyAwaitingTrampoline * _awaitingTrampoline;
    _UIViewServiceReplyControlTrampoline * _controlTrampoline;
    NSLock * _lock;
    id  _target;
}

+ (id)proxyWithTarget:(id)arg1;

- (void).cxx_destruct;
- (id)_awaitingReply;
- (id)_deliveringRepliesAsynchronously;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
