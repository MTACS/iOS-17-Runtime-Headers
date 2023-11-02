
@interface MusicKit_SoftLinking_MPCPlaybackEngine : NSObject {
    bool  _audioAnalyzerEnabled;
    bool  _pictureInPictureSupported;
    bool  _stateRestorationSupported;
    bool  _systemMusicApplication;
    MPCPlaybackEngine * _underlyingPlaybackEngine;
    bool  _videoSupported;
}

@property (getter=isAudioAnalyzerEnabled, setter=musicKit_setAudioAnalyzerEnabled:, nonatomic) bool audioAnalyzerEnabled;
@property (getter=isPictureInPictureSupported, setter=musicKit_setPictureInPictureSupported:, nonatomic) bool pictureInPictureSupported;
@property (nonatomic, readonly, copy) NSString *playerID;
@property (getter=isStarted, nonatomic, readonly) bool started;
@property (getter=isStateRestorationSupported, setter=musicKit_setStateRestorationSupported:, nonatomic) bool stateRestorationSupported;
@property (getter=isSystemMusicApplication, setter=musicKit_setSystemMusicApplication:, nonatomic) bool systemMusicApplication;
@property (getter=isVideoSupported, setter=musicKit_setVideoSupported:, nonatomic) bool videoSupported;

- (void).cxx_destruct;
- (void)becomeActive;
- (id)initWithPlayerID:(id)arg1 options:(unsigned long long)arg2 fallbackPlaybackIntent:(id)arg3;
- (bool)isAudioAnalyzerEnabled;
- (bool)isPictureInPictureSupported;
- (bool)isStarted;
- (bool)isStateRestorationSupported;
- (bool)isSystemMusicApplication;
- (bool)isVideoSupported;
- (void)musicKit_setAudioAnalyzerEnabled:(bool)arg1;
- (void)musicKit_setPictureInPictureSupported:(bool)arg1;
- (void)musicKit_setStateRestorationSupported:(bool)arg1;
- (void)musicKit_setSystemMusicApplication:(bool)arg1;
- (void)musicKit_setVideoSupported:(bool)arg1;
- (id)playerID;
- (void)restoreStateWithCompletion:(id /* block */)arg1;
- (void)setAudioAnalyzerEnabled:(bool)arg1;
- (void)setPictureInPictureSupported:(bool)arg1;
- (void)setStateRestorationSupported:(bool)arg1;
- (void)setSystemMusicApplication:(bool)arg1;
- (void)setVideoSupported:(bool)arg1;
- (void)start;

@end
