
@interface PXAVPlayerAudioSession : PXAudioSession {
    bool  _isPlaybackDesired;
    bool  _isPreparingToPlay;
    NSObject<OS_dispatch_queue> * _playerQueue;
    AVQueuePlayer * _playerQueue_player;
    float  _playerRate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playerTime;
    bool  _playerTimeHasChangedSinceSeeking;
    id  _playerTimeObserver;
    PXUpdater * _updater;
}

@property (nonatomic, readonly) bool isPlaybackDesired;
@property (nonatomic, readonly) bool isPreparingToPlay;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *playerQueue;
@property (nonatomic, readonly) AVQueuePlayer *playerQueue_player;
@property (nonatomic, readonly) float playerRate;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } playerTime;
@property (nonatomic) bool playerTimeHasChangedSinceSeeking;
@property (nonatomic, retain) id playerTimeObserver;
@property (nonatomic, readonly) PXUpdater *updater;

+ (id)_audioSession;
+ (struct OpaqueCMClock { }*)masterClock;

- (void).cxx_destruct;
- (void)_handleAVAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3;
- (void)_handlePlayerItemFinishedSeekingForPlayback:(id)arg1;
- (void)_handlePlayerTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_invalidatePlayerRate;
- (void)_invalidatePlayerVolume;
- (void)_invalidateStatus;
- (void)_loadDurationFromAsset:(id)arg1;
- (void)_performPlayerTransaction:(id /* block */)arg1;
- (void)_playerQueue_performPlayerTransaction:(id /* block */)arg1;
- (void)_prepareToPlayIfNeeded;
- (void)_updatePlayerRate;
- (void)_updatePlayerVolume;
- (void)_updateStatus;
- (void)cancelMediaRequest;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (void)desiredPlayerVolumeDidChange;
- (void)didPerformChanges;
- (void)errorDidChange;
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5;
- (bool)isPlaybackDesired;
- (bool)isPreparingToPlay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)performFinalCleanup;
- (void)performInternalChanges:(id /* block */)arg1;
- (void)play;
- (void)playFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)playerQueue;
- (id)playerQueue_player;
- (float)playerRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playerTime;
- (bool)playerTimeHasChangedSinceSeeking;
- (id)playerTimeObserver;
- (void)prepareToPlay;
- (void)requestMediaWithResultHandler:(id /* block */)arg1;
- (void)setIsPlaybackDesired:(bool)arg1;
- (void)setIsPreparingToPlay:(bool)arg1;
- (void)setPlayerRate:(float)arg1;
- (void)setPlayerTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPlayerTimeHasChangedSinceSeeking:(bool)arg1;
- (void)setPlayerTimeObserver:(id)arg1;
- (id)updater;

@end
