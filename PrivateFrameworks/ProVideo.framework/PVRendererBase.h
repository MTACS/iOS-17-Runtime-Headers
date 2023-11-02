
@interface PVRendererBase : NSObject {
    PVVideoCompositingContext * _compositingContext;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _frameCount;
    bool  _hasRendered;
    bool  _immediatelyCancelPendingRequests;
    struct vector<HGRef<PVRenderJob>, std::allocator<HGRef<PVRenderJob>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<HGRef<PVRenderJob> *, std::allocator<HGRef<PVRenderJob>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _inFlightRenderJobs;
    NSLock * _inFlightRenderJobsLock;
    NSString * _name;
    void * _perfStats;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _perfStatsLock;
    bool  _trackStats;
}

@property (nonatomic, retain) PVVideoCompositingContext *compositingContext;
@property (nonatomic) bool immediatelyCancelPendingRequests;
@property (nonatomic, retain) NSString *name;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_initOutputColorSpace:(id)arg1;
- (void)addFrameStats:(const void*)arg1;
- (void)addRenderJobInFlight:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (double)averageStat:(int)arg1;
- (void)cancelAllPendingRequests;
- (void)cleanupMemoryCaches;
- (id)compositingContext;
- (void)dealloc;
- (id)description;
- (void)didRecieveMemoryWarning:(id)arg1;
- (unsigned int)frameCount;
- (double)getLastStat:(int)arg1;
- (bool)immediatelyCancelPendingRequests;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)name;
- (double)numFrames;
- (void)printAndClearStats;
- (void)printAndClearStats:(bool)arg1;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (void)setCompositingContext:(id)arg1;
- (void)setImmediatelyCancelPendingRequests:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOutputColorSpace:(id)arg1;
- (struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })startJobForDelegate:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 playback:(bool)arg3;
- (unsigned long long)taskResidentSize;
- (void)trackStats:(bool)arg1;
- (void)updateDestinationFormatForOutputColorSpace;
- (double)windowedFPS;

@end
