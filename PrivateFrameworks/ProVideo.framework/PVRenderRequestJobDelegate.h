
@interface PVRenderRequestJobDelegate : NSObject <PVRenderJobDelegate> {
    id /* block */  m_completionHandler;
    void * m_destinationBitmaps;
    PVRenderer * m_pvRenderer;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  m_renderManager;
    PVRenderRequest * m_request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int jobTypeTag;
@property (readonly) Class superclass;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;

+ (unsigned int)jobTypeTag;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildGraph:(void*)arg1 renderContext:(const void*)arg2 frameStats:(void*)arg3;
- (void)dealloc;
- (void)finishCancelledJob;
- (void)finishCompletedJob;
- (int)graphBuildThreadPriority;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2 pvRenderer:(id)arg3;
- (int)jobPriority;
- (unsigned int)jobTypeTag;
- (unsigned int)outputCVPixelBufferFormat;
- (unsigned long long)packedFamilyCode;
- (int)renderContextPriority;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(void*)arg1 renderContext:(const void*)arg2 frameStats:(void*)arg3;
- (id)videoCompositingContext;

@end
