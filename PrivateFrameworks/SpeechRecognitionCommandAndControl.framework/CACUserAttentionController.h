
@interface CACUserAttentionController : NSObject <CMWakeGestureDelegate> {
    NSObject<OS_dispatch_queue> * _asynchronousCallQueue;
    NSObject<OS_dispatch_queue> * _attentionAwarenessHandlerQueue;
    NSMutableDictionary * _attentionDetectionStatuses;
    <CACUserAttentionControllerDelegate> * _delegate;
    bool  _deviceLowered;
    bool  _deviceSupportsRaiseGestureDetection;
    AWAttentionAwarenessClient * _faceAttentionAwarenessClient;
    unsigned long long  _supportedAttentionAwarenessEvents;
    AWAttentionAwarenessClient * _touchAttentionAwarenessClient;
    CACUserAttentionSignalProviderFactory * _userAttentionSignalProviderFactory;
    CMWakeGestureManager * _wakeGestureManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CACUserAttentionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_isDeviceLowered, setter=_setDeviceLowered:, nonatomic) bool deviceLowered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_detectionStartedForType:(unsigned long long)arg1;
- (bool)_deviceSupportsFaceDetection;
- (void)_handleFaceAttentionEvent:(id)arg1;
- (void)_handleFaceInterruptNotification:(unsigned long long)arg1;
- (void)_handleTouchAttentionEvent:(id)arg1;
- (bool)_isDeviceLowered;
- (bool)_restartFaceAttentionAwarenessClient:(id*)arg1;
- (void)_setDetectionStarted:(bool)arg1 forType:(unsigned long long)arg2;
- (void)_setDeviceLowered:(bool)arg1;
- (bool)_startFaceAttentionAwarenessClient:(id*)arg1;
- (bool)_startTouchAttentionAwarenessClient:(id*)arg1;
- (void)_startWakeGestureManagerIfNeeded;
- (bool)_stopFaceAttentionAwarenessClient:(id*)arg1;
- (bool)_stopTouchAttentionAwarenessClient:(id*)arg1;
- (void)_stopWakeGestureManagerIfNeeded;
- (void)dealloc;
- (id)delegate;
- (id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3 deviceSupportsRaiseGestureDetection:(bool)arg4;
- (id)initWithSignalProviderFactory:(id)arg1 supportedAttentionAwarenessEvents:(unsigned long long)arg2 deviceSupportsRaiseGestureDetection:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (bool)startIfNeeded:(id*)arg1;
- (void)startIfNeededForTypes:(unsigned long long)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (bool)startIfNeededForTypes:(unsigned long long)arg1 error:(id*)arg2;
- (bool)stopIfNeeded:(id*)arg1;
- (bool)stopIfNeededForTypes:(unsigned long long)arg1 error:(id*)arg2;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;

@end
