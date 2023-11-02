
@interface IMFullScreenEffectSoundPlayer : NSObject <IMAudioControllerDelegate, IMFullScreenEffectSoundPlayer> {
    IMAudioController * _audioController;
    float  _currentVolume;
    <IMFullScreenEffectSoundPlayerDelegate> * _delegate;
    bool  _hasHapticTrack;
    NSURL * _soundURL;
    bool  _started;
}

@property (nonatomic, retain) IMAudioController *audioController;
@property (nonatomic) float currentVolume;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IMFullScreenEffectSoundPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasHapticTrack;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *soundURL;
@property (nonatomic) bool started;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_audioSessionOptionsWillChange:(id)arg1;
- (void)_didPrepare;
- (void)_didStart;
- (void)_didStop;
- (id)_ensureAudioPlayer;
- (bool)_supportsSoundEffects;
- (id)audioController;
- (void)audioController:(id)arg1 didChangeProgressForContentAtURL:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioController:(id)arg1 didPrepareToPlayContentAtURL:(id)arg2 successfully:(bool)arg3;
- (float)currentVolume;
- (id)delegate;
- (bool)hasHapticTrack;
- (id)initWithSoundURL:(id)arg1 hasHapticTrack:(bool)arg2;
- (void)prepareToPlaySound;
- (void)setAudioController:(id)arg1;
- (void)setCurrentVolume:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStarted:(bool)arg1;
- (id)soundURL;
- (void)startPlayingSound;
- (bool)started;
- (void)stopPlayingSound;

@end
