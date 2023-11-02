
@interface BWVisionInferenceProvider : NSObject <BWInferenceExecutable, BWInferencePropagatable, BWInferenceProvider> {
    bool  _alwaysExecuteForRedEyeReduction;
    bool  _clampToLargestMaximumNumberOfFaces;
    NSMutableArray * _cloneVideoRequirements;
    BWVisionInferenceConfiguration * _configuration;
    bool  _considerISPRectsIfVisionFails;
    BWVisionInferenceContext * _context;
    bool  _executesRequestsIndividually;
    int  _executionTarget;
    unsigned long long  _indexOfRequestForMaximumNumberOfFaces;
    unsigned long long  _indexOfRequestForMergedFaceDetection;
    unsigned long long  _indexOfRequestForMergedFoodAndDrinkRecognition;
    NSMutableArray * _inputMetadataRequirements;
    NSMutableArray * _inputVideoRequirements;
    unsigned long long  _maximumNumberOfFaces;
    NSMutableArray * _outputMetadataRequirements;
    NSMutableArray * _outputVideoRequirements;
    NSSet * _preventionReasons;
    BWInferenceVideoRequirement * _primaryInputVideoRequirement;
    NSArray * _prototypeRequests;
    NSMapTable * _requestIndexByRequest;
    NSMutableDictionary * _requestIndexByRequirement;
    int  _type;
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
@property (nonatomic, retain) BWInferenceVideoRequirement *primaryInputVideoRequirement;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (unsigned int)allowedPixelBufferCompressionDirection;
- (bool)allowsAsyncPropagation;
- (id)bindIdealInputForRequest:(id)arg1 fromAttachedMediaUsingKey:(id)arg2;
- (id)bindInputForRequest:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 preparedByAttachedMediaKey:(id)arg3 withVideoFormatProvider:(id /* block */)arg4;
- (id)bindInputForRequest:(id)arg1 fromMetadataUsingKeys:(id)arg2;
- (id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2;
- (id)bindOutputForRequest:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindOutputForRequest:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2;
- (id)bindOutputForRequest:(id)arg1 asMetadataUsingKey:(id)arg2;
- (id)bindOutputForRequest:(id)arg1 asMetadataUsingKeys:(id)arg2;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)executable;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (int)executionTarget;
- (id)extractable;
- (id)initWithConfiguration:(id)arg1 requests:(id)arg2 executesRequestsIndividually:(bool)arg3 executionTarget:(int)arg4 preventionReasons:(id)arg5 resourceProvider:(id)arg6;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)prepareForExecution;
- (id)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (id)primaryInputVideoRequirement;
- (id)propagatable;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;
- (void)setPrimaryInputVideoRequirement:(id)arg1;
- (id)submittable;
- (int)type;

@end
