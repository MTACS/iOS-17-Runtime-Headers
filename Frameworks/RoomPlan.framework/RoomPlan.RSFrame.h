
@interface RoomPlan.RSFrame : _TtCs12_SwiftObject <RSFrame> {
    void camera;
    void colorBuffer;
    void depthBuffer;
    void depthConfidenceBuffer;
    void deviceOrientation;
    void rawFeaturePoints;
    void referenceOriginTransform;
    void sceneCamera;
    void sceneColorBuffer;
    void semanticConfidenceBuffer;
    void semanticLabelBuffer;
    void timestamp;
    void vioTrackingState;
}

@property (nonatomic, retain) <RSCamera> *camera;
@property (nonatomic, retain) struct __CVBuffer { }*colorBuffer;
@property (nonatomic, retain) struct __CVBuffer { }*depthBuffer;
@property (nonatomic, retain) struct __CVBuffer { }*depthConfidenceBuffer;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic, retain) <RSRawPointCloud> *rawFeaturePoints;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginTransform;
@property (nonatomic, retain) <RSCamera> *sceneCamera;
@property (nonatomic, retain) struct __CVBuffer { }*sceneColorBuffer;
@property (nonatomic, retain) struct __CVBuffer { }*semanticConfidenceBuffer;
@property (nonatomic, retain) struct __CVBuffer { }*semanticLabelBuffer;
@property (nonatomic) double timestamp;
@property (nonatomic) long long vioTrackingState;

- (id)camera;
- (struct __CVBuffer { }*)colorBuffer;
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
