
@interface ARRawSceneUnderstandingData : NSObject <ARResultData> {
    struct __CVBuffer { } * _capturedImage;
    struct __CVBuffer { } * _depthBuffer;
    struct __CVBuffer { } * _depthConfidenceBuffer;
    struct __CVBuffer { } * _normalsBuffer;
    void * _resultsRef;
    struct __CVBuffer { } * _semanticSegmentationBuffer;
    struct __CVBuffer { } * _semanticSegmentationBufferSampledForDepth;
    struct __CVBuffer { } * _semanticSegmentationConfidenceBuffer;
    struct __CVBuffer { } * _semanticSegmentationConfidenceBufferSampledForDepth;
    struct __CVBuffer { } * _semanticSegmentationUncertaintyBuffer;
    double  _timestamp;
    ARMLImageDownScalingResultData * _ultraWideDownscalingResultData;
    ARCamera * ultraWideCamera;
    ARCamera * wideCamera;
}

@property (nonatomic) struct __CVBuffer { }*capturedImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct __CVBuffer { }*depthBuffer;
@property (nonatomic) struct __CVBuffer { }*depthConfidenceBuffer;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CVBuffer { }*normalsBuffer;
@property (nonatomic, readonly) void*sceneUnderstandingResultRef;
@property (nonatomic) struct __CVBuffer { }*semanticSegmentationBuffer;
@property (nonatomic) struct __CVBuffer { }*semanticSegmentationBufferSampledForDepth;
@property (nonatomic) struct __CVBuffer { }*semanticSegmentationConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*semanticSegmentationConfidenceBufferSampledForDepth;
@property (nonatomic) struct __CVBuffer { }*semanticSegmentationUncertaintyBuffer;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) ARCamera *ultraWideCamera;
@property (nonatomic, retain) ARMLImageDownScalingResultData *ultraWideDownscalingResultData;
@property (nonatomic, retain) ARCamera *wideCamera;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)capturedImage;
- (void)dealloc;
- (struct __CVBuffer { }*)depthBuffer;
- (struct __CVBuffer { }*)depthConfidenceBuffer;
- (struct __CVBuffer { }*)normalsBuffer;
- (void*)sceneUnderstandingResultRef;
- (struct __CVBuffer { }*)semanticSegmentationBuffer;
- (struct __CVBuffer { }*)semanticSegmentationBufferSampledForDepth;
- (struct __CVBuffer { }*)semanticSegmentationConfidenceBuffer;
- (struct __CVBuffer { }*)semanticSegmentationConfidenceBufferSampledForDepth;
- (struct __CVBuffer { }*)semanticSegmentationUncertaintyBuffer;
- (void)setCapturedImage:(struct __CVBuffer { }*)arg1;
- (void)setDepthBuffer:(struct __CVBuffer { }*)arg1;
- (void)setDepthConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setNormalsBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticSegmentationBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticSegmentationBufferSampledForDepth:(struct __CVBuffer { }*)arg1;
- (void)setSemanticSegmentationConfidenceBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticSegmentationConfidenceBufferSampledForDepth:(struct __CVBuffer { }*)arg1;
- (void)setSemanticSegmentationUncertaintyBuffer:(struct __CVBuffer { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUltraWideCamera:(id)arg1;
- (void)setUltraWideDownscalingResultData:(id)arg1;
- (void)setWideCamera:(id)arg1;
- (double)timestamp;
- (id)ultraWideCamera;
- (id)ultraWideDownscalingResultData;
- (id)wideCamera;

@end
