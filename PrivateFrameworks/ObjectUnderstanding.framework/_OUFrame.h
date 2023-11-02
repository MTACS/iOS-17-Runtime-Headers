
@interface _OUFrame : NSObject <OUFrame> {
    <OUCamera> * _camera;
    struct __CVBuffer { } * _colorBuffer;
    long long  _deviceOrientation;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceOriginTransform;
    <OUCamera> * _sceneCamera;
    struct __CVBuffer { } * _sceneColorBuffer;
    struct __CVBuffer { } * _sceneDepthBuffer;
    struct __CVBuffer { } * _sceneDepthConfidenceBuffer;
    struct __CVBuffer { } * _semanticConfidenceBuffer;
    struct __CVBuffer { } * _semanticLabelBuffer;
    struct __CVBuffer { } * _semanticLabelBufferOnWideCamera;
    double  _timestamp;
    long long  _vioTrackingState;
    struct __CVBuffer { } * sceneColorBufferBGRA;
}

@property (nonatomic, retain) <OUCamera> *camera;
@property (nonatomic) struct __CVBuffer { }*colorBuffer;
@property (nonatomic, readonly) long long deviceOrientation;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginTransform;
@property (nonatomic, retain) <OUCamera> *sceneCamera;
@property (nonatomic) struct __CVBuffer { }*sceneColorBuffer;
@property (nonatomic) struct __CVBuffer { }*sceneDepthBuffer;
@property (nonatomic) struct __CVBuffer { }*sceneDepthConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*semanticConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*semanticLabelBuffer;
@property (nonatomic) struct __CVBuffer { }*semanticLabelBufferOnWideCamera;
@property (nonatomic) double timestamp;
@property (nonatomic) long long vioTrackingState;

- (void).cxx_destruct;
- (struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })GetCameraPoseInVisionWorld;
- (struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })GetProjectionMatrixInVisionWorld;
- (struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })GetSceneCameraPoseInVisionWorld;
- (struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })GetSceneCameraProjectionMatrixInVisionWorld;
- (struct __CVBuffer { }*)GetSceneColorBufferBGRA;
- (void)GetSceneRgbToDepthRatio;
- (id)LoadDepth:(id)arg1;
- (struct __CVBuffer { }*)LoadImageToCVPixelBufferTest:(id)arg1 PixelType:(unsigned int)arg2;
- (id)LoadLabel:(id)arg1;
- (id)LoadRgb:(id)arg1;
- (id)LoadVote:(id)arg1;
- (id)camera;
- (struct __CVBuffer { }*)colorBuffer;
- (void)dealloc;
- (long long)deviceOrientation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFrame:(id)arg1;
- (id)initWithSceneYUV:(struct __CVBuffer { }*)arg1 sceneDepth:(struct __CVBuffer { }*)arg2 referenceOriginTranform:(struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 OUCamera:(id)arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransform;
- (id)sceneCamera;
- (struct __CVBuffer { }*)sceneColorBuffer;
- (struct __CVBuffer { }*)sceneDepthBuffer;
- (struct __CVBuffer { }*)sceneDepthConfidenceBuffer;
- (struct __CVBuffer { }*)semanticConfidenceBuffer;
- (struct __CVBuffer { }*)semanticLabelBuffer;
- (struct __CVBuffer { }*)semanticLabelBufferOnWideCamera;
- (void)setCamera:(id)arg1;
- (void)setColorBuffer:(struct __CVBuffer { }*)arg1;
- (void)setReferenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSceneCamera:(id)arg1;
- (void)setSceneColorBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSceneDepthBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSceneDepthConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticLabelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticLabelBufferOnWideCamera:(struct __CVBuffer { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVioTrackingState:(long long)arg1;
- (double)timestamp;
- (long long)vioTrackingState;

@end
