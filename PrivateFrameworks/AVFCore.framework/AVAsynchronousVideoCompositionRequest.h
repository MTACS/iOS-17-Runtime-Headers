
@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying> {
    AVAsynchronousVideoCompositionRequestInternal * _internal;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } compositionTime;
@property (nonatomic, readonly) AVVideoCompositionRenderContext *renderContext;
@property (nonatomic, readonly) NSArray *sourceSampleDataTrackIDs;
@property (nonatomic, readonly) NSArray *sourceTrackIDs;
@property (nonatomic, readonly) <AVVideoCompositionInstruction> *videoCompositionInstruction;

- (void)_willDeallocOrFinalize;
- (struct OpaqueFigVideoCompositorFrame { }*)compositionFrame;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })compositionTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)finishCancelledRequest;
- (void)finishWithComposedVideoFrame:(struct __CVBuffer { }*)arg1;
- (void)finishWithError:(id)arg1;
- (id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(struct OpaqueFigVideoCompositorFrame { }*)arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 usingSources:(id)arg5 instruction:(id)arg6 withSampleBuffers:(id)arg7;
- (id)renderContext;
- (struct __CVBuffer { }*)sourceFrameByTrackID:(int)arg1;
- (struct opaqueCMSampleBuffer { }*)sourceSampleBufferByTrackID:(int)arg1;
- (id)sourceSampleDataTrackIDs;
- (id)sourceTimedMetadataByTrackID:(int)arg1;
- (id)sourceTrackIDs;
- (id)videoCompositionInstruction;

@end
