
@interface ARSegmentationData : NSObject <ARQATraceable, ARResultData> {
    struct __CVBuffer { } * _confidenceBuffer;
    struct __CVBuffer { } * _confidenceSampledForDepth;
    bool  _hasSegmentedPeople;
    bool  _hasSegmentedPeopleComputed;
    struct __CVBuffer { } * _maskedSemanticsSampledForDepth;
    struct __CVBuffer { } * _normalsBuffer;
    struct __CVBuffer { } * _segmentationBuffer;
    struct __CVBuffer { } * _semanticsSampledForDepth;
    long long  _source;
    ARImageData * _sourceImageData;
    double  _timestamp;
    struct __CVBuffer { } * _uncertaintyBuffer;
    struct __CVBuffer { } * _uncertaintySampledForDepth;
}

@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } adjustedIntrinics;
@property (nonatomic, readonly) struct __CVBuffer { }*confidenceBuffer;
@property (nonatomic) struct __CVBuffer { }*confidenceSampledForDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSegmentedPeople;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CVBuffer { }*maskedSemanticsSampledForDepth;
@property (nonatomic) struct __CVBuffer { }*normalsBuffer;
@property (nonatomic, readonly) struct __CVBuffer { }*segmentationBuffer;
@property (nonatomic) struct __CVBuffer { }*semanticsSampledForDepth;
@property (nonatomic, readonly) long long source;
@property (nonatomic, retain) ARImageData *sourceImageData;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) NSDictionary *tracingEntry;
@property (nonatomic, readonly) struct __CVBuffer { }*uncertaintyBuffer;
@property (nonatomic) struct __CVBuffer { }*uncertaintySampledForDepth;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })adjustedIntrinics;
- (struct __CVBuffer { }*)confidenceBuffer;
- (struct __CVBuffer { }*)confidenceSampledForDepth;
- (void)dealloc;
- (id)description;
- (bool)hasSegmentedPeople;
- (id)initWithTimestamp:(double)arg1 segmentationBuffer:(struct __CVBuffer { }*)arg2;
- (id)initWithTimestamp:(double)arg1 segmentationBuffer:(struct __CVBuffer { }*)arg2 confidenceBuffer:(struct __CVBuffer { }*)arg3 source:(long long)arg4;
- (id)initWithTimestamp:(double)arg1 segmentationBuffer:(struct __CVBuffer { }*)arg2 confidenceBuffer:(struct __CVBuffer { }*)arg3 uncertaintyBuffer:(struct __CVBuffer { }*)arg4 source:(long long)arg5;
- (struct __CVBuffer { }*)maskedSemanticsSampledForDepth;
- (struct __CVBuffer { }*)normalsBuffer;
- (bool)resampleSemanticsToDepthCPU:(struct __CVBuffer { }*)arg1 depthToSemantics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 semanticsIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3 depthIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg4;
- (struct __CVBuffer { }*)segmentationBuffer;
- (struct __CVBuffer { }*)semanticsSampledForDepth;
- (void)setConfidenceSampledForDepth:(struct __CVBuffer { }*)arg1;
- (void)setMaskedSemanticsSampledForDepth:(struct __CVBuffer { }*)arg1;
- (void)setNormalsBuffer:(struct __CVBuffer { }*)arg1;
- (void)setSemanticsSampledForDepth:(struct __CVBuffer { }*)arg1;
- (void)setSourceImageData:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUncertaintySampledForDepth:(struct __CVBuffer { }*)arg1;
- (long long)source;
- (id)sourceImageData;
- (double)timestamp;
- (id)tracingEntry;
- (struct __CVBuffer { }*)uncertaintyBuffer;
- (struct __CVBuffer { }*)uncertaintySampledForDepth;
- (void)updateTimestamp:(double)arg1;

@end
