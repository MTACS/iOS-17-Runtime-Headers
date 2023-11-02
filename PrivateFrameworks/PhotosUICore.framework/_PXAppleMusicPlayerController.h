
@interface _PXAppleMusicPlayerController : PXObservable <PXAppleMusicPlayerController, PXMutableAppleMusicPlayerController> {
    long long  _currentPlaybackCommand;
    bool  _isAtEnd;
    id  _playbackDidEndObserver;
    long long  _playbackState;
    id  _playbackStateChangeObserver;
    bool  _playerRespondsToRelativeVolume;
    long long  _preparationSignpostID;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _queue_currentClientIdentifier;
    NSString * _queue_itemStoreID;
    MPMusicPlayerApplicationController * _queue_player;
    id /* block */  _queue_preparationCompletionHandler;
    PXExpectation * _queue_preparationExpectation;
    float  _queue_volume;
}

@property (copy) NSString *currentClientIdentifier;
@property (nonatomic) long long currentPlaybackCommand;
@property (nonatomic, readonly) bool isAtEnd;
@property (nonatomic, readonly) PXObservable *observable;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) double volume;

+ (bool)canApplyWorkaroundFor80278485;

- (void).cxx_destruct;
- (void)_handleDidPrepareToPlayWithExpectation:(id)arg1 error:(id)arg2;
- (void)_handleItemPlaybackDidEnd;
- (void)_handlePlaybackStateDidChange;
- (id)_init;
- (void)_invalidateCurrentPlayerCommand;
- (void)_queue_callPreparationCompletionHandler:(bool)arg1 error:(id)arg2;
- (void)_queue_handleDidPrepareToPlayWithError:(id)arg1;
- (void)_queue_handlePreparationExpectationFulfilled:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_queue_setCurrentClientIdentifier:(id)arg1;
- (void)clientIdentifier:(id)arg1 becomeCurrentClientIfNeeded:(bool)arg2 performAsyncPlayerTransaction:(id /* block */)arg3;
- (void)clientIdentifier:(id)arg1 performAsyncPlayerTransaction:(id /* block */)arg2;
- (id)currentClientIdentifier;
- (long long)currentPlaybackCommand;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fetchCurrentTime;
- (id)init;
- (bool)isAtEnd;
- (id)observable;
- (void)pause;
- (void)play;
- (long long)playbackState;
- (void)prepareToPlayWithCompletionHandler:(id /* block */)arg1;
- (void)setCurrentClientIdentifier:(id)arg1;
- (void)setCurrentPlaybackCommand:(long long)arg1;
- (void)setIsAtEnd:(bool)arg1;
- (void)setItemWithStoreID:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setPlaybackState:(long long)arg1;
- (void)setVolume:(double)arg1;
- (double)volume;

@end
