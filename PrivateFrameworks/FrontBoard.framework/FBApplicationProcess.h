
@interface FBApplicationProcess : FBProcess {
    bool  _connectedToExternalAccessory;
    FBProcessCPUStatistics * _cpuStatistics;
    bool  _nowPlayingWithAudio;
    BKSProcessAssertion * _queue_accessoryAssertion;
    BKSProcessAssertion * _queue_audioAssertion;
    BKSProcessAssertion * _queue_mediaAssertion;
    bool  _recordingAudio;
}

@property (getter=isConnectedToExternalAccessory, nonatomic) bool connectedToExternalAccessory;
@property (nonatomic, readonly) double elapsedCPUTime;
@property (getter=isNowPlayingWithAudio, nonatomic) bool nowPlayingWithAudio;
@property (getter=isRecordingAudio, nonatomic) bool recordingAudio;

+ (id)_internalDebugEnvironmentVariables;

- (void).cxx_destruct;
- (void)_bootstrapDidComplete;
- (id)_createBootstrapContext;
- (void)_finishInit;
- (void)_noteProcessDidExit:(id)arg1;
- (id)_queue_createLegacyAssertionForReason:(unsigned int)arg1 withName:(id)arg2;
- (double)elapsedCPUTime;
- (bool)isApplicationProcess;
- (bool)isConnectedToExternalAccessory;
- (bool)isNowPlayingWithAudio;
- (bool)isRecordingAudio;
- (void)killForReason:(long long)arg1 andReport:(bool)arg2 withDescription:(id)arg3;
- (void)killForReason:(long long)arg1 andReport:(bool)arg2 withDescription:(id)arg3 completion:(id /* block */)arg4;
- (void)setConnectedToExternalAccessory:(bool)arg1;
- (void)setNowPlayingWithAudio:(bool)arg1;
- (void)setRecordingAudio:(bool)arg1;

@end
