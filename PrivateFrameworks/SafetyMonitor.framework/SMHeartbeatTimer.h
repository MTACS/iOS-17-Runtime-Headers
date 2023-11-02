
@interface SMHeartbeatTimer : NSObject {
    NSTimer * _heartbeatTimer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSTimer *heartbeatTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_startHeartbeatForSessionID:(id)arg1 handler:(id /* block */)arg2;
- (void)_stopHeartbeatWithHandler:(id /* block */)arg1;
- (id)heartbeatTimer;
- (id)init;
- (id)queue;
- (void)setHeartbeatTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startHeartbeatForSessionID:(id)arg1 handler:(id /* block */)arg2;
- (void)stopHeartbeatWithHandler:(id /* block */)arg1;

@end
