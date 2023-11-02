
@interface BWInferenceVideoScalingProvider : NSObject <BWInferenceExecutable, BWInferencePreventable, BWInferencePropagatable, BWInferenceProvider> {
    bool  _applyCustomCrop;
    bool  _applyUprightExifOrientation;
    bool  _applyValidBufferRect;
    NSMutableArray * _cloneVideoRequirements;
    NSDictionary * _colorSpaceProperties;
    bool  _computeAndApplyAspectRatioCrop;
    float  _customFiltersLastUsedHorizontalRatio;
    float  _customFiltersLastUsedVerticalRatio;
    BWInferenceVideoRequirement * _derivedFromRequirement;
    bool  _enableFencing;
    BWInferenceVideoRequirement * _inputRequirement;
    int  _offsetRotationDegrees;
    float  _outputAspectRatio;
    NSArray * _outputRequirements;
    FigM2MController * _scalerController;
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
@property (nonatomic, readonly) bool mustExecuteWhenAllowed;
@property (nonatomic, readonly) NSArray *outputMetadataRequirements;
@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly, copy) NSSet *preventionReasons;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (unsigned int)allowedPixelBufferCompressionDirection;
- (bool)allowsAsyncPropagation;
- (id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)description;
- (id)executable;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (int)executionTarget;
- (id)extractable;
- (id)initWithInputRequirement:(id)arg1 derivedFromRequirement:(id)arg2 outputRequirements:(id)arg3 enableFencing:(bool)arg4;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (bool)mustExecuteWhenAllowed;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)prepareForExecution;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 executionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (id)propagatable;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;
- (id)submittable;
- (int)type;

@end
