
@interface SFMediaPlayerView : UIView {
    AVPlayerLooper * _avLooper;
    AVQueuePlayer * _avQueuePlayer;
    bool  _isKVOObserver;
    NSMutableArray * _mediaItems;
    bool  _pausesAfterEachItem;
    NSObject<OS_dispatch_source> * _speedUpTimer;
}

@property (nonatomic) bool pausesAfterEachItem;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_pause;
- (void)addMovieItem:(id)arg1;
- (void)advanceToNextItem;
- (void)breakFirstEnqueuedLoop;
- (void)dealloc;
- (void)dequeueNonPlayingItemsFromMediaItem:(id)arg1;
- (void)enqueueItemsFromMediaItem:(id)arg1 afterItem:(id)arg2;
- (void)handleBoundaryTimeObserverForMediaItem:(id)arg1;
- (bool)isPaused;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (bool)pausesAfterEachItem;
- (void)play;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)removeAllQueuedItems;
- (void)removeMovieItem:(id)arg1;
- (void)setPausesAfterEachItem:(bool)arg1;
- (void)setUpTimeRangeNotificationsForItem:(id)arg1;
- (void)speedUpRemainderOfCurrentItem;
- (void)startMovieLoopWithPath:(id)arg1;
- (void)startMovieLoopWithPath:(id)arg1 assetType:(int)arg2 adjustmentsURL:(id)arg3;
- (void)stop;
- (void)stopSpeedUpTimer;
- (void)updateViewForAssetType:(int)arg1 adjustmentsURL:(id)arg2;

@end
