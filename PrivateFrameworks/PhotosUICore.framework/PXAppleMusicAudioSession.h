
@interface PXAppleMusicAudioSession : PXAudioSession <PXChangeObserver> {
    NSObject<OS_os_log> * _log;
    NSString * _playerClientIdentifier;
    <PXAppleMusicPlayerController> * _playerController;
    NSObject<OS_dispatch_queue> * _stateQueue;
    bool  _stateQueue_hasSeekedOrPlayed;
    bool  _stateQueue_isPreparingToPlay;
    long long  _stateQueue_playerPlaybackState;
    bool  _stateQueue_shouldPlayWhenPrepared;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSString *playerClientIdentifier;
@property (nonatomic, retain) <PXAppleMusicPlayerController> *playerController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) bool stateQueue_hasSeekedOrPlayed;
@property (nonatomic) bool stateQueue_isPreparingToPlay;
@property (nonatomic) long long stateQueue_playerPlaybackState;
@property (nonatomic) bool stateQueue_shouldPlayWhenPrepared;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureCurrentPlayerClient;
- (void)_handlePlayerPreparedToPlay:(bool)arg1 error:(id)arg2 signpostID:(unsigned long long)arg3;
- (void)_handlePlayerTransactionDeclinedWithError:(id)arg1;
- (void)_stateQueue_handlePlayerPreparedToPlay:(bool)arg1 error:(id)arg2 signpostID:(unsigned long long)arg3;
- (void)_stateQueue_pause;
- (void)_stateQueue_play;
- (void)_stateQueue_playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_stateQueue_prepareToPlayIfNeeded;
- (void)_stateQueue_updateState;
- (void)_updateContentLoudness;
- (void)_updatePlayerVolume;
- (void)_updateStatus;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)desiredPlayerVolumeDidChange;
- (void)errorDidChange;
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5;
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5 playerController:(id)arg6;
- (id)log;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)pause;
- (void)performFinalCleanup;
- (void)play;
- (void)playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)playerClientIdentifier;
- (id)playerController;
- (void)prepareToPlay;
- (void)setPlayerController:(id)arg1;
- (void)setStateQueue_hasSeekedOrPlayed:(bool)arg1;
- (void)setStateQueue_isPreparingToPlay:(bool)arg1;
- (void)setStateQueue_playerPlaybackState:(long long)arg1;
- (void)setStateQueue_shouldPlayWhenPrepared:(bool)arg1;
- (id)stateQueue;
- (bool)stateQueue_hasSeekedOrPlayed;
- (bool)stateQueue_isPreparingToPlay;
- (long long)stateQueue_playerPlaybackState;
- (bool)stateQueue_shouldPlayWhenPrepared;

@end
