
@interface PVRenderer : PVRendererBase {
    struct vector<HGRef<PVCVPixelBufferPool>, std::allocator<HGRef<PVCVPixelBufferPool>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<HGRef<PVCVPixelBufferPool> *, std::allocator<HGRef<PVCVPixelBufferPool>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _cvPools;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _cvPoolsLock;
    struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> { 
        struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> { 
            struct PVGCDLock {} *__value_; 
        } __ptr_; 
    }  _dateLock;
    struct HGRef<HGCVPixelBufferPool> { 
        struct HGCVPixelBufferPool {} *m_Obj; 
    }  _destinationBufferPool;
    unsigned int  _destinationPixelFormat;
    PVRenderEffectLoader * _effectLoader;
    bool  _enableDestinationPool;
    NSDate * _lastStatsLogDateTime;
    NSDate * _lastTextureCacheFlushDate;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  _renderManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_configureDefaultPoolPolicy;
- (void)_statsLogCheck;
- (void)cleanupMemoryCaches;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (struct HGRef<HGBitmap> { struct HGBitmap {} *x1; })getDestinationBuffer:(struct CGSize { double x1; double x2; })arg1 cvPixelBufferFormat:(unsigned int)arg2;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer {} *x1; })hgCVPixelBufferFromCVPoolForSize:(struct CGSize { double x1; double x2; })arg1 withFormat:(unsigned int)arg2;
- (id)initWithOptions:(id)arg1;
- (void)loadInstructionGraphEffects:(id)arg1;
- (unsigned int)outputCVPixelBufferFormat;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (void)startRenderRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateDestinationFormatForOutputColorSpace;

@end
