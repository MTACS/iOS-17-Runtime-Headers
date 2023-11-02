
@protocol OUFrame

@required

- (<OUCamera> *)camera;
- (struct __CVBuffer { }*)colorBuffer;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransform;
- (<OUCamera> *)sceneCamera;
- (struct __CVBuffer { }*)sceneColorBuffer;
- (struct __CVBuffer { }*)sceneDepthBuffer;
- (struct __CVBuffer { }*)sceneDepthConfidenceBuffer;
- (struct __CVBuffer { }*)semanticConfidenceBuffer;
- (struct __CVBuffer { }*)semanticLabelBuffer;
- (double)timestamp;

@optional

- (long long)deviceOrientation;

@end
