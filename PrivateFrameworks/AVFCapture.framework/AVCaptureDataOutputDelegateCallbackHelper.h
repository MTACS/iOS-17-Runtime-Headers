
@interface AVCaptureDataOutputDelegateCallbackHelper : NSObject {
    bool  _canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd;
    NSObject<OS_dispatch_queue> * _defaultCallbackQueue;
    NSString * _defaultCallbackQueueName;
    AVWeakReferencingDelegateStorage * _delegateOverrideStorage;
    AVWeakReferencingDelegateStorage * _delegateStorage;
    struct localQueueOpaque { } * _localQueue;
    id /* block */  _localQueueHandler;
    id /* block */  _remoteQueueHandler;
    struct remoteQueueReceiverOpaque { } * _remoteQueueReceiver;
    struct OpaqueFigSimpleMutex { } * _stateMutex;
}

@property (readonly) NSObject<OS_dispatch_queue> *activeCallbackQueue;
@property (readonly) id activeDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (readonly) id clientDelegate;
@property (readonly) id delegateOverride;
@property (readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;

+ (void)initialize;

- (id)_activeCallbackQueue;
- (id)_activeDelegate;
- (bool)_validateCallbackQueue:(id)arg1 exceptionReason:(id*)arg2;
- (id)activeCallbackQueue;
- (id)activeDelegate;
- (id)clientCallbackQueue;
- (id)clientDelegate;
- (void)dealloc;
- (id)delegateOverride;
- (id)delegateOverrideCallbackQueue;
- (id)initWithQueueName:(id)arg1 canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd:(bool)arg2;
- (void)releaseRemoteQueueReceiver;
- (bool)setClientDelegate:(id)arg1 clientCallbackQueue:(id)arg2 exceptionReason:(id*)arg3;
- (bool)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 exceptionReason:(id*)arg3;
- (void)updateLocalQueue:(struct localQueueOpaque { }*)arg1 handler:(id /* block */)arg2;
- (void)updateRemoteQueueReceiver:(struct remoteQueueReceiverOpaque { }*)arg1 handler:(id /* block */)arg2;

@end
