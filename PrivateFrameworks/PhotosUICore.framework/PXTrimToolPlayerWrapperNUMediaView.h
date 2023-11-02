
@interface PXTrimToolPlayerWrapperNUMediaView : NSObject <PXTrimToolPlayerWrapper> {
    struct { 
        bool respondsToPlayerStatusChangedForPlayerWrapper; 
        bool respondsToTimeChanged; 
    }  _delegateFlags;
    bool  _didLoopVideoBeforeSeek;
    bool  _didPlayBeforeSeek;
    NSArray * _fullVideoPipelineFilters;
    _PXTrimToolPlayerWrapperAVPlayerView * _loupePlayerView;
    <NUMediaPlayer> * _mediaPlayer;
    NUMediaView * _mediaView;
    NSMutableArray * _mediaViewObservers;
    id  _mediaViewTimeObserver;
    NSArray * _pipelineFiltersBeforeSeek;
    <PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource> * _playerItemSource;
    <PXTrimToolPlayerObserver> * _playerObserver;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekTime;
    bool  _showsUntrimmed;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _trimRange;
}

@property (nonatomic, readonly) AVPlayer *_currentAVPlayer;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didLoopVideoBeforeSeek;
@property (nonatomic) bool didPlayBeforeSeek;
@property (nonatomic, copy) NSArray *fullVideoPipelineFilters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _PXTrimToolPlayerWrapperAVPlayerView *loupePlayerView;
@property (nonatomic, retain) <NUMediaPlayer> *mediaPlayer;
@property (nonatomic, readonly) NUMediaView *mediaView;
@property (nonatomic, retain) NSMutableArray *mediaViewObservers;
@property (nonatomic, retain) id mediaViewTimeObserver;
@property (nonatomic, copy) NSArray *pipelineFiltersBeforeSeek;
@property (nonatomic) <PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource> *playerItemSource;
@property (nonatomic) <PXTrimToolPlayerObserver> *playerObserver;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (getter=isReadyToPlay, nonatomic, readonly) bool readyToPlay;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } seekTime;
@property (nonatomic) bool showsUntrimmed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } trimRange;

- (void).cxx_destruct;
- (id)_currentAVPlayer;
- (void)_handleMediaPlayerObserverMediaChanged;
- (void)_handleMediaPlayerObserverStatusChanged:(long long)arg1;
- (void)_handleMediaPlayerObserverTimeChanged:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_registerDefaultMediaViewObserver;
- (void)_registerTimeMediaViewObserver;
- (void)_removeMediaPlayerObserver;
- (void)_removeTimeObserver;
- (void)_updateLoupePlayerView;
- (void)applyTrimTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (bool)didLoopVideoBeforeSeek;
- (bool)didPlayBeforeSeek;
- (void)finishSeeking;
- (id)fullVideoPipelineFilters;
- (id)initWithNUMediaView:(id)arg1;
- (void)invalidateComposition;
- (bool)isPlaying;
- (bool)isReadyToPlay;
- (id)loupePlayerView;
- (id)mediaPlayer;
- (id)mediaView;
- (id)mediaViewObservers;
- (id)mediaViewTimeObserver;
- (void)pause;
- (id)pipelineFiltersBeforeSeek;
- (void)play;
- (id)playerItemSource;
- (id)playerObserver;
- (void)requestAssetWithCompletion:(id /* block */)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekTime;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 untrimmed:(bool)arg2 exact:(bool)arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 untrimmed:(bool)arg2 exact:(bool)arg3 forceSeek:(bool)arg4;
- (void)setDidLoopVideoBeforeSeek:(bool)arg1;
- (void)setDidPlayBeforeSeek:(bool)arg1;
- (void)setFullVideoPipelineFilters:(id)arg1;
- (void)setLoupePlayerView:(id)arg1;
- (void)setMediaPlayer:(id)arg1;
- (void)setMediaViewObservers:(id)arg1;
- (void)setMediaViewTimeObserver:(id)arg1;
- (void)setPipelineFiltersBeforeSeek:(id)arg1;
- (void)setPlayerItemSource:(id)arg1;
- (void)setPlayerObserver:(id)arg1;
- (void)setPosterFrame:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setShowsUntrimmed:(bool)arg1;
- (void)setShowsUntrimmed:(bool)arg1 completion:(id /* block */)arg2;
- (bool)showsUntrimmed;
- (void)startPeriodicTimeObserver;
- (void)stepByCount:(long long)arg1 playheadTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)stopPeriodicTimeObserver;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })trimRange;

@end
