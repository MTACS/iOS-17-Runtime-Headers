
@interface RMAudioListenerPoseManager : NSObject {
    RMConnectionClient * _connectionClient;
    bool  _isReceivingRelatveData;
    id /* block */  _poseCallbackInternal;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _statusCallback;
    NSDictionary * _tempestOptions;
}

@property (nonatomic, retain) NSDictionary *tempestOptions;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)setTempestOptions:(id)arg1;
- (void)startReceivingAudioListenerPoseUpdatesWithForceSessionRestart:(bool)arg1 poseCallback:(id /* block */)arg2 statusCallback:(id /* block */)arg3;
- (void)startReceivingAudioListenerPoseUpdatesWithForceSessionRestart:(bool)arg1 poseCallbackInternal:(id /* block */)arg2 statusCallback:(id /* block */)arg3;
- (void)stopReceivingAudioListenerPoseUpdates;
- (id)tempestOptions;

@end
