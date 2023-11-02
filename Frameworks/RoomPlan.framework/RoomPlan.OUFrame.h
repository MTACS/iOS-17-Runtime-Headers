
@interface RoomPlan.OUFrame : _TtCs12_SwiftObject <OUFrame> {
    void camera;
    void colorBuffer;
    void deviceOrientation;
    void referenceOriginTransform;
    void sceneCamera;
    void sceneColorBuffer;
    void sceneDepthBuffer;
    void sceneDepthConfidenceBuffer;
    void semanticConfidenceBuffer;
    void semanticLabelBuffer;
    void timestamp;
    void vioTrackingState;
}

@property (nonatomic, retain) <OUCamera> *camera;
@property (nonatomic, retain) struct __CVBuffer { }*colorBuffer;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginTransform;
@property (nonatomic, retain) <OUCamera> *sceneCamera;
@property (nonatomic, retain) struct __CVBuffer { }*sceneColorBuffer;
@property (nonatomic, retain) struct __CVBuffer { }*sceneDepthBuffer;
@property (nonatomic, retain) struct __CVBuffer { }*sceneDepthConfidenceBuffer;
@property (nonatomic, retain) struct __CVBuffer { }*semanticConfidenceBuffer;
@property (nonatomic, retain) struct __CVBuffer { }*semanticLabelBuffer;
@property (nonatomic) double timestamp;

- (id)camera;
- (struct __CVBuffer { }*)colorBuffer;
- (long long)deviceOrientation;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransform;
- (id)sceneCamera;
- (struct __CVBuffer { }*)sceneColorBuffer;
- (struct __CVBuffer { }*)sceneDepthBuffer;
- (struct __CVBuffer { }*)sceneDepthConfidenceBuffer;
- (struct __CVBuffer { }*)semanticConfidenceBuffer;
- (struct __CVBuffer { }*)semanticLabelBuffer;
- (void)setCamera:(id)arg1;
- (void)setColorBuffer:(struct __CVBuffer { }*)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setReferenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSceneCamera:(id)arg1;
- (void)setSceneColorBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSceneDepthBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSceneDepthConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticLabelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
