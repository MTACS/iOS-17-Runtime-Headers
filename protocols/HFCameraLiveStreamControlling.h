
@protocol HFCameraLiveStreamControlling <NSObject>

@required

- (<HFCameraLiveStreamControllerDelegate> *)delegate;
- (bool)isMicrophoneEnabled;
- (bool)isStreamAudioEnabled;
- (bool)isStreamingEnabled;
- (HMCameraSource *)liveCameraSource;
- (void)setDelegate:(id <HFCameraLiveStreamControllerDelegate>)arg1;
- (void)setMicrophoneEnabled:(bool)arg1;
- (void)setStreamAudioEnabled:(bool)arg1;
- (void)setStreamAudioVolume:(float)arg1;
- (void)startStreaming;
- (void)stopStreaming;
- (float)streamAudioVolume;
- (NSError *)streamError;
- (unsigned long long)streamState;

@end
