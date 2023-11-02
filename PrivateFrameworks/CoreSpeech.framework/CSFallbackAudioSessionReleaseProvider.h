
@interface CSFallbackAudioSessionReleaseProvider : NSObject <CSAudioRecorderDelegate, CSFallbackAudioSessionReleaseProviding> {
    CSAudioRecorder * _audioRecorder;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CSAudioRecorder *audioRecorder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)audioRecorder;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 numberOfChannels:(int)arg7;
- (void)audioRecorderWillBeDestroyed:(id)arg1;
- (bool)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithAudioRecorder:(id)arg1;
- (id)queue;
- (void)setAudioRecorder:(id)arg1;
- (void)setQueue:(id)arg1;

@end
