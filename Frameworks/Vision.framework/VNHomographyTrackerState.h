
@interface VNHomographyTrackerState : NSObject <ICFlowControl, ICResultDelegate> {
    long long  _analysisPreRollFramesRemaining;
    NSObject<OS_dispatch_semaphore> * _analysisSemaphore;
    void * _analysisSession;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resultsLock;
    struct vector<std::tuple<simd_float3x3, float>, std::allocator<std::tuple<simd_float3x3, float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::tuple<simd_float3x3, float> *, std::allocator<std::tuple<simd_float3x3, float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _transformsAndConfidences;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)ICReportFrameAnalysis:(id)arg1 forPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withStats:(id)arg3;
- (bool)ICShouldBeCanceled;
- (void)dealloc;
- (id)init;

@end
