
@protocol CSAudioInjectionEngineDelegate <NSObject>

@required

- (void)audioEngineAudioChunkForTvAvailable:(CSAudioInjectionEngine *)arg1 audioChunk:(CSAudioChunkForTV *)arg2;
- (void)audioEngineBufferAvailable:(CSAudioInjectionEngine *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 atTime:(unsigned long long)arg5 isFileLoadedBuffer:(bool)arg6;
- (void)audioEngineDidStartRecord:(CSAudioInjectionEngine *)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(bool)arg3 error:(NSError *)arg4;
- (void)audioEngineDidStopRecord:(CSAudioInjectionEngine *)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;

@end
