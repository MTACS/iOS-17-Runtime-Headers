
@interface HFCameraLiveStreamController : NSObject <HFCameraLiveStreamControlling, HFCameraObserver> {
    HFCameraAudioManager * _audioManager;
    HMCameraProfile * _cameraProfile;
    <HFCameraLiveStreamControllerDelegate> * _delegate;
    HMHome * _home;
    unsigned long long  _inferredStreamState;
    HMCameraSource * _liveCameraSource;
    bool  _microphoneEnabled;
    bool  _startStreamingAfterStop;
    bool  _streamAudioEnabled;
    float  _streamAudioVolume;
    NSError * _streamError;
}

@property (nonatomic, retain) HFCameraAudioManager *audioManager;
@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HFCameraLiveStreamControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) unsigned long long inferredStreamState;
@property (nonatomic, readonly) HMCameraSource *liveCameraSource;
@property (getter=isMicrophoneEnabled, nonatomic) bool microphoneEnabled;
@property (nonatomic) bool startStreamingAfterStop;
@property (getter=isStreamAudioEnabled, nonatomic) bool streamAudioEnabled;
@property (nonatomic) float streamAudioVolume;
@property (nonatomic, readonly) NSError *streamError;
@property (nonatomic, readonly) unsigned long long streamState;
@property (getter=isStreamingEnabled, nonatomic, readonly) bool streamingEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_derivedAudioStreamSetting;
- (void)_updateAudioManagerState;
- (id)activeStream;
- (id)audioManager;
- (id)cameraProfile;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraStreamControlDidUpdateManagerState:(id)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(id)arg1;
- (void)cameraUserSettingsDidUpdate:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)home;
- (unsigned long long)inferredStreamState;
- (id)init;
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2;
- (bool)isMicrophoneEnabled;
- (bool)isStreamAudioEnabled;
- (bool)isStreamingEnabled;
- (id)liveCameraSource;
- (id)mostRecentSnapshot;
- (void)setAudioManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInferredStreamState:(unsigned long long)arg1;
- (void)setMicrophoneEnabled:(bool)arg1;
- (void)setStartStreamingAfterStop:(bool)arg1;
- (void)setStreamAudioEnabled:(bool)arg1;
- (void)setStreamAudioVolume:(float)arg1;
- (void)startStreaming;
- (bool)startStreamingAfterStop;
- (void)stopStreaming;
- (float)streamAudioVolume;
- (id)streamError;
- (unsigned long long)streamState;

@end
