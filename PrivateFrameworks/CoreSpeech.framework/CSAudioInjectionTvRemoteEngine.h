
@interface CSAudioInjectionTvRemoteEngine : CSAudioInjectionEngine <CSAudioConverterDelegate, CSAudioInjectionEngineDelegate> {
    CSAudioInjectionDevice * _connectedDevice;
    <CSAudioInjectionEngineDelegate> * _delegate;
    CSAudioConverter * _encoder;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _uuid;
}

@property (nonatomic) CSAudioInjectionDevice *connectedDevice;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAudioInjectionEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CSAudioConverter *encoder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (bool)alwaysOnVoiceTriggerEnabled;
- (void)attachDevice:(id)arg1;
- (void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5;
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;
- (void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 isFileLoadedBuffer:(bool)arg6;
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(bool)arg3 error:(id)arg4;
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (id)connectedDevice;
- (id)delegate;
- (id)encoder;
- (id)initWithStreamHandleId:(unsigned long long)arg1;
- (bool)injectAudio:(id)arg1;
- (bool)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(id /* block */)arg3 completion:(id /* block */)arg4;
- (bool)isAlwaysOnVoiceTriggerAvailable;
- (bool)isRecording;
- (id)queue;
- (void)setAlwaysOnVoiceTriggerEnabled:(bool)arg1;
- (void)setConnectedDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncoder:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)start;
- (void)startAudioStreamWithOption:(id)arg1;
- (void)stop;
- (void)stopAudioStream;
- (id)uuid;

@end
