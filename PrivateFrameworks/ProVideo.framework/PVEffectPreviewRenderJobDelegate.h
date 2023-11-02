
@interface PVEffectPreviewRenderJobDelegate : NSObject <PVRenderJobDelegate> {
    id /* block */  m_completionHandler;
    PVEffect * m_effect;
    struct PVImageProperties { 
        unsigned int cvPixelFormat; 
        int bitsPerPixel; 
        unsigned int alphaInfo; 
        struct CGColorSpace {} *cgColorSpaceRef; 
    }  m_imageCreationProperties;
    struct CGImage { } * m_input;
    struct HGRef<HGNode> { 
        struct HGNode {} *m_Obj; 
    }  m_inputHGNode;
    struct HGRef<HGCVBitmap> { 
        struct HGCVBitmap {} *m_Obj; 
    }  m_outputCVBitmap;
    struct CGSize { 
        double width; 
        double height; 
    }  m_outputSize;
    PVRendererBase * m_pvRenderer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_time;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int jobTypeTag;
@property (readonly) Class superclass;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;

+ (void)cleanupCaches;
+ (unsigned int)jobTypeTag;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage { }*)_makeResultImage;
- (void)_setupInputHGNode:(const void*)arg1 frameStats:(void*)arg2;
- (void)buildGraph:(void*)arg1 renderContext:(const void*)arg2 frameStats:(void*)arg3;
- (void)dealloc;
- (void)finishCancelledJob;
- (void)finishCompletedJob;
- (id)initWEffect:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 inputImage:(struct CGImage { }*)arg3 outputSize:(struct CGSize { double x1; double x2; })arg4 completionHandler:(id /* block */)arg5 pvRenderer:(id)arg6;
- (int)jobPriority;
- (unsigned int)jobTypeTag;
- (unsigned long long)packedFamilyCode;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(void*)arg1 renderContext:(const void*)arg2 frameStats:(void*)arg3;
- (id)videoCompositingContext;

@end
