
@protocol RSFrame

@required

- (<RSCamera> *)camera;
- (struct __CVBuffer { }*)colorBuffer;
- (struct __CVBuffer { }*)depthBuffer;
- (struct __CVBuffer { }*)depthConfidenceBuffer;
- (long long)deviceOrientation;
- (<RSRawPointCloud> *)rawFeaturePoints;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransform;
- (<RSCamera> *)sceneCamera;
- (struct __CVBuffer { }*)sceneColorBuffer;
- (struct __CVBuffer { }*)semanticConfidenceBuffer;
- (struct __CVBuffer { }*)semanticLabelBuffer;
- (double)timestamp;
- (long long)vioTrackingState;

@end
