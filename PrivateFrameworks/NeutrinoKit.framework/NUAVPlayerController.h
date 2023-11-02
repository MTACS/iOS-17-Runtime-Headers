
@interface NUAVPlayerController : NSObject {
    bool  _appliesPerFrameHDRDisplayMetadata;
    AVAudioMix * _audioMix;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentSeekTime;
    <NUAVPlayerControllerDelegate> * _delegate;
    bool  _loopsVideo;
    bool  _muted;
    NUObservatory * _observatory;
    AVPlayer * _player;
    struct { 
        bool registeredPlayer; 
    }  _playerControllerKVOFlags;
    NSMutableArray * _playerItemObservations;
    id  _playerTimeObserver;
    double  _updateInterval;
    AVAsset * _videoAsset;
    AVVideoComposition * _videoComposition;
}

@property (nonatomic, readonly) AVAudioMix *audioMix;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentSeekTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (nonatomic, readonly) bool currentlySeeking;
@property (nonatomic) <NUAVPlayerControllerDelegate> *delegate;
@property (nonatomic) bool loopsVideo;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic) double updateInterval;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (void)_addPlayerItemKVO:(id)arg1;
- (void)_addPlayerKVO;
- (void)_addTimeObserver;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_effectiveTimeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_loopingPlayerItemWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3;
- (void)_notifyExternalPlaybackChange:(bool)arg1;
- (void)_notifyPlaybackRateChange:(float)arg1;
- (void)_notifyPlaybackTimeChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_notifyPlayerStatusChange:(long long)arg1;
- (id)_playerItemWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3;
- (id)_playerItemsWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(bool)arg4;
- (void)_removePlayerItemKVO:(id)arg1;
- (void)_removePlayerItemKVO:(id)arg1 removeFromArray:(bool)arg2;
- (void)_removePlayerKVO;
- (void)_removeTimeObserver;
- (void)_setRate:(float)arg1;
- (void)addExternalPlaybackObserver:(id)arg1 block:(id /* block */)arg2;
- (void)addPlaybackRateObserver:(id)arg1 block:(id /* block */)arg2;
- (void)addPlaybackTimeObserver:(id)arg1 block:(id /* block */)arg2;
- (void)addPlayerStatusObserver:(id)arg1 block:(id /* block */)arg2;
- (id)audioMix;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentSeekTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (bool)currentlySeeking;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isMuted;
- (bool)loopsVideo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (id)player;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)playerItemFailedToPlayToEnd:(id)arg1;
- (bool)prepareWithAVAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(bool)arg4 seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
- (void)removeObserver:(id)arg1;
- (void)seek:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seek:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forceSeek:(bool)arg4;
- (void)seek:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forceSeek:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)seekBack;
- (void)seekForward;
- (void)setDelegate:(id)arg1;
- (void)setLoopsVideo:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)step:(long long)arg1;
- (void)updateAppliesPerFrameHDRDisplayMetadata:(bool)arg1;
- (void)updateAudioMix:(id)arg1;
- (double)updateInterval;
- (void)updateVideoComposition:(id)arg1;
- (void)updateWithVideoPrepareNodeFromVideoComposition:(id)arg1;
- (id)videoAsset;
- (id)videoComposition;

@end
