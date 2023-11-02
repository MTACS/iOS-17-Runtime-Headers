
@interface PVLivePlayerAVAssetSource : NSObject <AVPlayerItemOutputPullDelegate, PVLivePlayerSource> {
    AVAsset * _asset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _assetDuration;
    float  _assetRate;
    PVFrameSet * _cacheImageFrameSet;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _cacheLock;
    int  _currentPlayerItemOutput;
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
    }  _currentPlayerItemRange;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_dispatch_semaphore> * _outputReadyCondVar;
    NSObject<OS_dispatch_semaphore> * _playbackReadyCondVar;
    NSArray * _playerItemOutputs;
    AVPlayerLooper * _playerLooper;
    AVQueuePlayer * _playerQueue;
    struct { 
        int width; 
        int height; 
    }  _videoTrackDimensions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoTrackFrameDelta;
    float  _videoTrackFrameRate;
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
    }  _videoTrackRange;
    bool  loopPlayback;
    bool  repeatFrames;
    int  status;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loopPlayback;
@property (nonatomic) bool repeatFrames;
@property int status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)_copyPixelBufferForHostTime:(double)arg1;
- (struct __CVBuffer { }*)_copyPixelBufferForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)asset;
- (void)dealloc;
- (void)finishReading;
- (id)imageBufferForHostTime:(double)arg1;
- (id)initWithAVAsset:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForHostTime:(double)arg1;
- (bool)loopPlayback;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)outputSequenceWasFlushed:(id)arg1;
- (void)pause;
- (void)play;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (void)playerItemFailedToPlayToEnd:(id)arg1;
- (void)playerItemPlaybackStalled:(id)arg1;
- (void)playerItemTimeJumped:(id)arg1;
- (bool)repeatFrames;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLoopPlayback:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setRepeatFrames:(bool)arg1;
- (void)setStatus:(int)arg1;
- (void)setupPlayer;
- (void)startObservers;
- (int)status;
- (void)stopObservers;

@end
