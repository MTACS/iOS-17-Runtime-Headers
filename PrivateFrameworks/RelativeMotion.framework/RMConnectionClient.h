
@interface RMConnectionClient : NSObject <RMConnectionLifecycleDelegate, RMConnectionStreamConsumingDelegate> {
    NSObject<OS_dispatch_source> * _connectionTimer;
    unsigned long long  _connectionTimerDelay;
    RMConnectionEndpoint * _endpoint;
    NSMutableArray * _messageCache;
    id /* block */  _messageHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
    id /* block */  _streamingDataCallback;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)endpoint:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 replyBlock:(id /* block */)arg4;
- (void)endpoint:(id)arg1 didReceiveStreamedData:(id)arg2;
- (void)endpointWasInterrupted:(id)arg1;
- (void)endpointWasInvalidated:(id)arg1;

@end
