
@interface CSAudioInjectionRemoraEngine : CSAudioInjectionEngine <CSAudioInjectionEngineDelegate> {
    CSAudioCircularBuffer * _circularBuffer;
    CSAudioInjectionDevice * _connectedDevice;
    <CSAudioInjectionEngineDelegate> * _delegate;
    bool  _isForwarding;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzer;
    unsigned long long  _lastDetectedVoiceTriggerBeginSampleCount;
    unsigned long long  _lastForwardedSampleCount;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _uuid;
    bool  _voiceTriggerEnabled;
}

@property (nonatomic, retain) CSAudioCircularBuffer *circularBuffer;
@property (nonatomic) CSAudioInjectionDevice *connectedDevice;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAudioInjectionEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForwarding;
@property (nonatomic, retain) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) unsigned long long lastDetectedVoiceTriggerBeginSampleCount;
@property (nonatomic) unsigned long long lastForwardedSampleCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic) bool voiceTriggerEnabled;

- (void).cxx_destruct;
- (bool)alwaysOnVoiceTriggerEnabled;
- (void)attachDevice:(id)arg1;
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;
- (void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 isFileLoadedBuffer:(bool)arg6;
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(bool)arg3 error:(id)arg4;
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (id)circularBuffer;
- (id)connectedDevice;
- (void)dealloc;
- (id)delegate;
- (id)initWithStreamHandleId:(unsigned long long)arg1;
- (bool)injectAudio:(id)arg1;
- (bool)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(id /* block */)arg3 completion:(id /* block */)arg4;
- (bool)isAlwaysOnVoiceTriggerAvailable;
- (bool)isForwarding;
- (bool)isRecording;
- (id)keywordAnalyzer;
- (unsigned long long)lastDetectedVoiceTriggerBeginSampleCount;
- (unsigned long long)lastForwardedSampleCount;
- (id)queue;
- (void)setAlwaysOnVoiceTriggerEnabled:(bool)arg1;
- (void)setCircularBuffer:(id)arg1;
- (void)setConnectedDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsForwarding:(bool)arg1;
- (void)setKeywordAnalyzer:(id)arg1;
- (void)setLastDetectedVoiceTriggerBeginSampleCount:(unsigned long long)arg1;
- (void)setLastForwardedSampleCount:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVoiceTriggerEnabled:(bool)arg1;
- (void)start;
- (void)startAudioStreamWithOption:(id)arg1;
- (void)stop;
- (void)stopAudioStream;
- (id)uuid;
- (bool)voiceTriggerEnabled;

@end
