
@interface PVAVFRenderJobDelegate : NSObject <PVRenderJobDelegate> {
    PVTaskToken * _token;
    unsigned int  m_childCode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_compositionTime;
    PVVideoCompositing * m_compositor;
    struct __CVBuffer { } * m_destinationPixelBuffer;
    PVVideoCompositionInstruction * m_instruction;
    struct HGRef<PVInstructionGraphContext> { 
        struct PVInstructionGraphContext {} *m_Obj; 
    }  m_instructionGraphContext;
    unsigned int  m_minimumRequestCompletionTimeMS;
    unsigned int  m_parentCode;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  m_renderManager;
    AVAsynchronousVideoCompositionRequest * m_request;
    bool  m_thumbnailCompositing;
    struct PerfTimer { 
        double _start; 
        double _end; 
    }  m_timer;
}

@property unsigned int childCode;
@property (readonly) PVVideoCompositionInstruction *compositionInstruction;
@property (readonly) AVAsynchronousVideoCompositionRequest *compositionRequest;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } compositionTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int jobTypeTag;
@property unsigned int minimumRequestCompletionTimeMS;
@property unsigned int parentCode;
@property (readonly) Class superclass;
@property (retain) PVTaskToken *token;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;

+ (unsigned int)jobTypeTag;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildGraph:(void*)arg1 renderContext:(const void*)arg2 frameStats:(void*)arg3 outputNodes:(void*)arg4;
- (void)_setupInputs:(void*)arg1 renderContext:(const void*)arg2 frameStats:(void*)arg3;
- (void)buildGraph:(void*)arg1 renderContext:(const void*)arg2 frameStats:(void*)arg3;
- (unsigned int)childCode;
- (id)compositionInstruction;
- (id)compositionRequest;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })compositionTime;
- (void)finishCancelledJob;
- (void)finishCompletedJob;
- (id)initWithCompositor:(id)arg1 request:(id)arg2 compositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 thumbnailCompositing:(bool)arg4;
- (int)jobPriority;
- (unsigned int)jobTypeTag;
- (unsigned int)minimumRequestCompletionTimeMS;
- (unsigned long long)packedFamilyCode;
- (unsigned int)parentCode;
- (int)renderContextPriority;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (int)renderThreadPriority;
- (void)setChildCode:(unsigned int)arg1;
- (void)setMinimumRequestCompletionTimeMS:(unsigned int)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)setToken:(id)arg1;
- (void)setupDestinationBuffers:(void*)arg1 renderContext:(const void*)arg2 frameStats:(void*)arg3;
- (id)token;
- (id)videoCompositingContext;

@end
