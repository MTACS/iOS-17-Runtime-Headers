
@interface PXTrimToolPlayerWrapperLivePhotoView : NSObject <ISChangeObserver, PXTrimToolPlayerWrapper> {
    struct { 
        bool respondsToPlayerStatusChangedForPlayerWrapper; 
        bool respondsToTimeChanged; 
    }  _delegateFlags;
    <PXLivePhotoView> * _livePhotoView;
    UIView * _loupePlayerView;
    bool  _needsPlayerUpdate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _periodicTimeObservationInterval;
    id  _periodicTimeObserver;
    <PXTrimToolPlayerObserver> * _playerObserver;
    ISVideoPlayerUIView * _videoPlayerView;
    ISWrappedAVPlayer * _wrappedAVPlayer;
}

@property (nonatomic, retain) ISVideoPlayerUIView *_videoPlayerView;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXLivePhotoView> *livePhotoView;
@property (nonatomic, readonly) UIView *loupePlayerView;
@property (nonatomic) bool needsPlayerUpdate;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } periodicTimeObservationInterval;
@property (nonatomic, retain) id periodicTimeObserver;
@property (nonatomic) <PXTrimToolPlayerObserver> *playerObserver;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (getter=isReadyToPlay, nonatomic, readonly) bool readyToPlay;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } trimRange;
@property (nonatomic, retain) ISWrappedAVPlayer *wrappedAVPlayer;

- (void).cxx_destruct;
- (void)_addPeriodicTimeObserver;
- (void)_createLoupePlayerView;
- (void)_loadWrappedAVPlayerIfNecessary;
- (void)_timeObserverTimeChanged:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_videoPlayerView;
- (id)_videoPlayerViewIfLoaded;
- (void)applyTrimTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)finishSeeking;
- (id)initWithLivePhotoView:(id)arg1;
- (void)invalidateComposition;
- (bool)isPlaying;
- (bool)isReadyToPlay;
- (id)livePhotoView;
- (id)loupePlayerView;
- (bool)needsPlayerUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)pause;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })periodicTimeObservationInterval;
- (id)periodicTimeObserver;
- (void)play;
- (id)playerObserver;
- (void)requestAssetWithCompletion:(id /* block */)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 untrimmed:(bool)arg2 exact:(bool)arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 untrimmed:(bool)arg2 exact:(bool)arg3 forceSeek:(bool)arg4;
- (void)setNeedsPlayerUpdate:(bool)arg1;
- (void)setPeriodicTimeObservationInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPeriodicTimeObserver:(id)arg1;
- (void)setPlayerObserver:(id)arg1;
- (void)setWrappedAVPlayer:(id)arg1;
- (void)set_videoPlayerView:(id)arg1;
- (void)startPeriodicTimeObserver;
- (void)stepByCount:(long long)arg1 playheadTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)stopPeriodicTimeObserver;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })trimRange;
- (id)videoPlayerView;
- (id)wrappedAVPlayer;

@end
