
@interface BWMattingV2InferenceProvider : NSObject <BWInferencePropagatable, BWInferenceProvider, BWInferenceSubmittable> {
    bool  _appliesFinalCropRect;
    BWInferenceVideoRequirement * _depthInputVideoRequirement;
    BWInferenceVideoRequirement * _disparityInputVideoRequirement;
    NSArray * _enabledSemanticMattingOutputTypes;
    BWInferenceMetadataRequirement * _faceSegmentsWithLandmarksMetadataRequirement;
    NSMutableArray * _inputMetadataRequirements;
    NSMutableArray * _inputVideoRequirements;
    struct OpaqueVTPixelTransferSession { } * _lowResSegmentationCloneCopySession;
    BWInferenceCloneVideoRequirement * _lowResSegmentationCloneOutputVideoRequirement;
    FigMatting * _mattingProcessor;
    int  _mattingProcessorVersion;
    int  _mattingTuningConfiguration;
    <MTLCommandQueue> * _metalCommandQueue;
    BWInferenceMetadataRequirement * _outputMasksContainsValidContentRequirement;
    NSMutableArray * _outputMetadataRequirements;
    NSMutableArray * _outputVideoRequirements;
    BWInferenceVideoRequirement * _primaryFormatInputVideoRequirement;
    BWInferenceVideoRequirement * _refinedDepthOutputVideoRequirement;
    NSDictionary * _sdofRenderingTuningParameters;
    BWInferenceVideoRequirement * _segmentationInputVideoRequirement;
    BWInferenceVideoRequirement * _segmentationOutputVideoRequirement;
    NSMutableDictionary * _semanticMatteInputVideoRequirementsByMattingOutputType;
    NSMutableDictionary * _semanticMatteOutputVideoRequirementsByMattingOutputType;
    NSDictionary * _sensorConfigurationsByPortType;
    bool  _submitWithoutSynchronization;
}

@property (nonatomic, readonly) unsigned int allowedPixelBufferCompressionDirection;
@property (nonatomic, readonly) bool allowsAsyncPropagation;
@property (nonatomic, readonly) NSArray *cloneVideoRequirements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BWInferenceExecutable> *executable;
@property (nonatomic, readonly) int executionTarget;
@property (nonatomic, readonly) <BWInferenceExtractable> *extractable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputMetadataRequirements;
@property (nonatomic, readonly) NSArray *inputVideoRequirements;
@property (nonatomic, readonly) NSArray *outputMetadataRequirements;
@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly, copy) NSSet *preventionReasons;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;
+ (id)inputAttachedMediaKeyForMattingOutputType:(unsigned int)arg1;

- (unsigned int)allowedPixelBufferCompressionDirection;
- (bool)allowsAsyncPropagation;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)executable;
- (int)executionTarget;
- (id)extractable;
- (id)initWithConfiguration:(id)arg1;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (id)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (id)propagatable;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)submittable;
- (int)type;

@end
