
@interface NUVideoRenderJob : NURenderJob

- (id)generateVideoComposition:(out id*)arg1;
- (bool)prepare:(out id*)arg1;
- (bool)requiresVideoComposition;
- (id)result;
- (id)scalePolicy;
- (id)videoRenderRequest;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputVideo;
- (bool)wantsRenderStage;

@end
