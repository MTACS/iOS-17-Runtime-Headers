
@interface _RSFrame : NSObject <RSFrame> {
    <RSCamera> * _camera;
    struct __CVBuffer { } * _colorBuffer;
    struct __CVBuffer { } * _depthBuffer;
    struct __CVBuffer { } * _depthConfidenceBuffer;
    long long  _deviceOrientation;
    <RSRawPointCloud> * _rawFeaturePoints;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceOriginTransform;
    <RSCamera> * _sceneCamera;
    struct __CVBuffer { } * _sceneColorBuffer;
    struct __CVBuffer { } * _semanticConfidenceBuffer;
    struct __CVBuffer { } * _semanticLabelBuffer;
    double  _timestamp;
    long long  _vioTrackingState;
}

@property (nonatomic, retain) <RSCamera> *camera;
@property (nonatomic) struct __CVBuffer { }*colorBuffer;
@property (nonatomic) struct __CVBuffer { }*depthBuffer;
@property (nonatomic) struct __CVBuffer { }*depthConfidenceBuffer;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic, retain) <RSRawPointCloud> *rawFeaturePoints;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginTransform;
@property (nonatomic, retain) <RSCamera> *sceneCamera;
@property (nonatomic) struct __CVBuffer { }*sceneColorBuffer;
@property (nonatomic) struct __CVBuffer { }*semanticConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*semanticLabelBuffer;
@property (nonatomic) double timestamp;
@property (nonatomic) long long vioTrackingState;

- (void).cxx_destruct;
- (id)camera;
- (struct __CVBuffer { }*)colorBuffer;
- (void)dealloc;
- (struct __CVBuffer { }*)depthBuffer;
- (struct __CVBuffer { }*)depthConfidenceBuffer;
- (long long)deviceOrientation;
- (id)rawFeaturePoints;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransform;
- (id)sceneCamera;
- (struct __CVBuffer { }*)sceneColorBuffer;
- (struct __CVBuffer { }*)semanticConfidenceBuffer;
- (struct __CVBuffer { }*)semanticLabelBuffer;
- (void)setCamera:(id)arg1;
- (void)setColorBuffer:(struct __CVBuffer { }*)arg1;
- (void)setDepthBuffer:(struct __CVBuffer { }*)arg1;
- (void)setDepthConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setRawFeaturePoints:(id)arg1;
- (void)setReferenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSceneCamera:(id)arg1;
- (void)setSceneColorBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticLabelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVioTrackingState:(long long)arg1;
- (double)timestamp;
- (long long)vioTrackingState;

@end
