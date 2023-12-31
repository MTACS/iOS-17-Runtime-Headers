
@interface AWClientPollWaiter : NSObject {
    AWAttentionAwarenessClient * _client;
    id /* block */  _clientBlock;
    NSObject<OS_dispatch_queue> * _clientQueue;
    int  _pollState;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithClient:(id)arg1 timeout:(unsigned long long)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (void)invalidate;
- (void)invokeClientBlock:(unsigned long long)arg1 event:(id)arg2;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2;

@end
