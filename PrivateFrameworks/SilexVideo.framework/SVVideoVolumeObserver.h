
@interface SVVideoVolumeObserver : NSObject <SVVideoPlaybackObserver, SVVideoVolumeObserving> {
    AVAudioSession * _audioSession;
    id /* block */  _muteStateChangeBlock;
    bool  _muted;
    SVKeyValueObserver * _outputVolumeObserver;
    SVPlaybackCoordinator * _playbackCoordinator;
    float  _volume;
    id /* block */  _volumeChangeBlock;
}

@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=onMuteStateChange:, nonatomic, copy) id /* block */ muteStateChangeBlock;
@property (nonatomic, readonly) bool muted;
@property (nonatomic, readonly) SVKeyValueObserver *outputVolumeObserver;
@property (nonatomic, readonly) SVPlaybackCoordinator *playbackCoordinator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float volume;
@property (setter=onVolumeChange:, nonatomic, copy) id /* block */ volumeChangeBlock;

- (void).cxx_destruct;
- (id)audioSession;
- (id)initWithPlaybackCoordinator:(id)arg1 audioSession:(id)arg2;
- (id /* block */)muteStateChangeBlock;
- (bool)muted;
- (void)onMuteStateChange:(id /* block */)arg1;
- (void)onVolumeChange:(id /* block */)arg1;
- (id)outputVolumeObserver;
- (id)playbackCoordinator;
- (void)playbackCoordinatorMuteStateChanged:(id)arg1;
- (void)updateWithVolume:(float)arg1 muted:(bool)arg2;
- (float)volume;
- (id /* block */)volumeChangeBlock;
- (void)volumeChanged:(float)arg1;

@end
