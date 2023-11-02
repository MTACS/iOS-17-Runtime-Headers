
@interface CSVTUIAudioSessionRecorder : NSObject <CSVTUIAudioRecorderDelegate, CSVTUIAudioSession> {
    CSVTUIAudioRecorder * _audioRecorder;
    unsigned long long  _audioStreamHandleId;
    <CSVTUIAudioSessionDelegate> * _delegate;
    bool  _forceSupportsRemoteDarwinDisplay;
    bool  _isRemoteDarwinDisplayConnected;
    CSAudioPowerMeter * _powerMeter;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) unsigned long long audioStreamHandleId;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVTUIAudioSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSAudioPowerMeter *powerMeter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_audioRecorder;
- (void)_handleDidStopWithReason:(long long)arg1;
- (bool)_hasCorrectInputAudioRoute;
- (bool)_hasCorrectOutputAudioRoute;
- (void)_updateRemoteDarwinDisplayConnectedIfNeeded;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 numberOfChannels:(int)arg7;
- (void)audioRecorderDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(bool)arg3 error:(id)arg4;
- (void)audioRecorderDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (unsigned long long)audioSource;
- (unsigned long long)audioStreamHandleId;
- (float)averagePower;
- (long long)convertStopReason:(long long)arg1;
- (id)delegate;
- (bool)hasAudioRoute;
- (bool)hasCorrectAudioRoute;
- (id)init;
- (id)initWithAudioRecorder:(id)arg1 forceSupportsRemoteDarwinDisplay:(bool)arg2;
- (bool)isRecording;
- (id)powerMeter;
- (bool)prepareRecord;
- (void)releaseAudioSession;
- (void)resetEndPointer;
- (void)setAudioStreamHandleId:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointerDelegate:(id)arg1;
- (void)setPowerMeter:(id)arg1;
- (bool)startRecording;
- (void)stopRecording;
- (void)updateAudioRecorderForTrainingDevice:(unsigned long long)arg1 deviceUUIDs:(id)arg2;
- (void)updateMeters;

@end
