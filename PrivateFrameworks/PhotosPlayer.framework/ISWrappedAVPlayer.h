
@interface ISWrappedAVPlayer : ISObservable <ISKVOProxyDelegate, PXReusableObject> {
    NSObject<OS_dispatch_queue> * _avPlayerQueue;
    <ISWrappedAVPlayerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    void * _ivarQueueIdentifier;
    bool  _ivarQueue_audioEnabled;
    AVPlayerItem * _ivarQueue_currentItem;
    NSError * _ivarQueue_error;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ivarQueue_itemDuration;
    NSError * _ivarQueue_itemError;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ivarQueue_itemForwardPlaybackEndTime;
    bool  _ivarQueue_itemIsLikelyToKeepUp;
    bool  _ivarQueue_itemPlaybackBufferEmpty;
    bool  _ivarQueue_itemPlaybackBufferFull;
    long long  _ivarQueue_itemStatus;
    AVVideoComposition * _ivarQueue_itemVideoComposition;
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
    }  _ivarQueue_loopTimeRange;
    bool  _ivarQueue_loopingEnabled;
    bool  _ivarQueue_preventsSleepDuringVideoPlayback;
    float  _ivarQueue_rate;
    long long  _ivarQueue_status;
    bool  _ivarQueue_suppressesAudioRendering;
    float  _ivarQueue_volume;
    NSMutableDictionary * _observersByID;
    AVPlayer * _playerQueue_avPlayer;
    id  _playerQueue_playerItemDidPlayToEndObserver;
    NSString * _playerQueue_playerItemKVOIdentifier;
    NSString * _playerQueue_playerKVOIdentifier;
    ISWrappedAVAudioSession * _playerQueue_wrappedAudioSession;
}

@property (readonly, copy) NSString *debugDescription;
@property <ISWrappedAVPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLoopingEnabled) bool loopingEnabled;
@property (readonly) Class superclass;
@property bool suppressesAudioRendering;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

+ (id)observedAVPlayerItemKeys;
+ (id)observedAVPlayerKeys;

- (void).cxx_destruct;
- (void)_assertOnIvarQueue;
- (void)_avPlayerQueue_registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)_avPlayerQueue_unregisterChangeObserver:(id)arg1 context:(void*)arg2;
- (id)_initWithAVPlayer:(id)arg1;
- (bool)_isOnIvarQueue;
- (id)_nextObserverUID;
- (id)_nilOrValue:(id)arg1;
- (void)_performIvarRead:(id /* block */)arg1;
- (void)_performIvarWrite:(id /* block */)arg1;
- (void)_performPlayerTransaction:(id /* block */)arg1;
- (void)_playerItemDidPlayToEnd:(id)arg1;
- (id)_playerQueue_avPlayer;
- (void)_playerQueue_startObservingPlayerItem:(id)arg1;
- (void)_playerQueue_stopObservingPlayerItem:(id)arg1;
- (void)_playerQueue_updatePlayerItemAudioTracksEnabled;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)attachToPlayerLayerIfNeeded:(id)arg1;
- (void)cancelPendingPrerolls;
- (id)currentItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentItemDuration;
- (id)currentItemError;
- (bool)currentItemIsLikelyToKeepUp;
- (bool)currentItemPlaybackBufferEmpty;
- (bool)currentItemPlaybackBufferFull;
- (long long)currentItemStatus;
- (id)currentItemVideoComposition;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (id)init;
- (bool)isAudioEnabled;
- (bool)isLoopingEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemForwardPlaybackEndTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })loopTimeRange;
- (id)mutableChangeObject;
- (void)observeChangeforKVOProxyIdentifier:(id)arg1 keyPath:(id)arg2 change:(id)arg3;
- (void)pause;
- (void)playToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(id /* block */)arg4;
- (void)prerollAtRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (bool)preventsSleepDuringVideoPlayback;
- (float)rate;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1 thenCall:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemBlendsVideoFrames:(bool)arg1;
- (void)setItemForwardEndPlaybackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLoopTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setLoopingEnabled:(bool)arg1;
- (void)setLoopingEnabled:(bool)arg1 withTemplateItem:(id)arg2;
- (void)setPreventsSleepDuringVideoPlayback:(bool)arg1;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setSuppressesAudioRendering:(bool)arg1;
- (void)setVolume:(float)arg1;
- (void)setWrappedAudioSession:(id)arg1;
- (long long)status;
- (bool)suppressesAudioRendering;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;
- (float)volume;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)becomeReusable;
- (void)prepareForReuse;

@end
