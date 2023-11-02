
@interface AWAttentionAwarenessClient : NSObject <AWFrameworkClient, AWServiceObserver> {
    id /* block */  _clientEventBlock;
    NSObject<OS_dispatch_queue> * _clientEventQueue;
    int  _clientIndex;
    id /* block */  _clientNotifBlock;
    NSObject<OS_dispatch_queue> * _clientNotifQueue;
    id /* block */  _clientStreamingBlock;
    NSObject<OS_dispatch_queue> * _clientStreamingQueue;
    AWAttentionAwarenessConfiguration * _configuration;
    bool  _eventDelivered;
    bool  _invalidated;
    bool  _lastAttentionState;
    AWClientPollWaiter * _pollWaiter;
    NSObject<OS_dispatch_queue> * _queue;
    <NSXPCProxyCreating> * _remoteClientProxy;
    unsigned long long  _suspensionCount;
    bool  _unitTestMode;
}

@property (nonatomic, copy) AWAttentionAwarenessConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) AWAttentionEvent *lastEvent;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_invokeRequiringClient:(bool)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)cancelFaceDetectStreamWithError:(id*)arg1;
- (bool)cancelPollForAttentionWithError:(id*)arg1;
- (id)configuration;
- (id)connect:(bool)arg1;
- (id)init;
- (bool)invalidateRemoteClientWithError:(id*)arg1;
- (bool)invalidateWithError:(id*)arg1;
- (bool)invokeRequiringClient:(bool)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)lastEvent;
- (void)notify:(unsigned long long)arg1;
- (void)notifyEvent:(id)arg1;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (void)notifyStreamingEvent:(id)arg1;
- (bool)pollForAttentionWithTimeout:(double)arg1 event:(id*)arg2 error:(id*)arg3;
- (bool)pollForAttentionWithTimeout:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3 error:(id*)arg4;
- (bool)resetAttentionLostTimeoutWithError:(id*)arg1;
- (bool)resumeWithError:(id*)arg1;
- (void)serviceInterrupted;
- (void)setConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1 shouldReset:(bool)arg2;
- (bool)setConfiguration:(id)arg1 shouldReset:(bool)arg2 error:(id*)arg3;
- (void)setEventHandlerWithQueue:(id)arg1 block:(id /* block */)arg2;
- (void)setEventStreamerWithQueue:(id)arg1 block:(id /* block */)arg2;
- (void)setNotificationHandlerWithQueue:(id)arg1 block:(id /* block */)arg2;
- (void)setUnitTestMode:(bool)arg1;
- (id)startStream;
- (bool)suspendWithError:(id*)arg1;
- (id)unitTestSampler;

@end
