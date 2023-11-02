
@interface PVVideoCompositing : PVRendererBase <AVVideoCompositing> {
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _cancelPendingLock;
    bool  _cancelsPendingRequests;
    NSDictionary * _destinationBufferPoolAttributes;
    bool  _didEnterBackground;
    struct deque<int, std::allocator<int>> { 
        struct __split_buffer<int *, std::allocator<int *>> { 
            int **__first_; 
            int **__begin_; 
            int **__end_; 
            struct __compressed_pair<int **, std::allocator<int *>> { 
                int **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<int>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _dropFrameTracker;
    bool  _droppedResolution;
    PVEffectScheduler * _effectScheduler;
    bool  _hostAppIsShuttingDown;
    unsigned int  _minimumRequestCompletionTimeMS;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _notificationStateLock;
    unsigned int  _parentCode;
    float  _playerRate;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _playerRateLock;
    id /* block */  _refreshCompletionBlock;
    NSObject<OS_dispatch_queue> * _refreshCompletionCallbackQueue;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  _renderManager;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _schedulingTime;
    NSDictionary * _sourceAttributes;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _throttleLock;
    unsigned int  _throttleRequestHandling;
    bool  _thumbnailCompositing;
    PVTaskTokenPool * _tokenPool;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _trackerLock;
    AVVideoComposition * _videoComposition;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoCompositionDuration;
    int  _windowedDropTotal;
}

@property (nonatomic, readonly) bool canConformColorOfSourceFrames;
@property (nonatomic) bool cancelsPendingRequests;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int minimumRequestCompletionTimeMS;
@property unsigned int parentCode;
@property (nonatomic, copy) id /* block */ refreshCompletionBlock;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsHDRSourceFrames;
@property (nonatomic, readonly) bool supportsWideColorSourceFrames;
@property (nonatomic) bool thumbnailCompositing;
@property (retain) PVVideoCompositingContext *videoCompositingContext;

+ (bool)flushOnFinalRelease;
+ (void)setFlushOnFinalRelease:(bool)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_validateDestinationBufferColorSpace:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)callRefreshCompletionBlock:(bool)arg1;
- (bool)canConformColorOfSourceFrames;
- (void)cancelAllPendingVideoCompositionRequests;
- (bool)cancelsPendingRequests;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)didRecieveMemoryWarning:(id)arg1;
- (bool)inPlayback;
- (id)init;
- (unsigned int)minimumRequestCompletionTimeMS;
- (unsigned int)parentCode;
- (float)playerRate;
- (id /* block */)refreshCompletionBlock;
- (void)renderContextChanged:(id)arg1;
- (void)renderRequestFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (id)requiredPixelBufferAttributesForRenderContext;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })schedulingTime;
- (void)setCancelsPendingRequests:(bool)arg1;
- (void)setColorSpacesFromDestinationBuffer:(id)arg1;
- (void)setMinimumRequestCompletionTimeMS:(unsigned int)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)setPlayerRate:(float)arg1;
- (void)setRefreshCompletionBlock:(id /* block */)arg1;
- (void)setSchedulingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setThumbnailCompositing:(bool)arg1;
- (void)setVideoCompositingContext:(id)arg1;
- (void)setupEffectScheduler;
- (void)setupTextureFactories;
- (bool)shouldDoLowPowerExport;
- (void)signalScheduling:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 playerRate:(float)arg2;
- (void)signalSchedulingResetSearch;
- (id)sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(id)arg1;
- (bool)supportsHDRSourceFrames;
- (bool)supportsWideColorSourceFrames;
- (bool)thumbnailCompositing;
- (void)updateDestinationFormatForOutputColorSpace;
- (id)videoCompositingContext;
- (void)videoCompositionChanged:(id)arg1;
- (void)willEnterForeground:(id)arg1;

@end
