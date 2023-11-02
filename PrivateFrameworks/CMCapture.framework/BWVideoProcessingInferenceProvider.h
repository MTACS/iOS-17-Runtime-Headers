
@interface BWVideoProcessingInferenceProvider : NSObject <BWInferenceExecutable, BWInferencePropagatable, BWInferenceProvider, BWInferenceSubmittable> {
    unsigned long long  _analysisType;
    NSMutableArray * _cloneVideoRequirements;
    int  _executionTarget;
    NSMutableArray * _inputMetadataRequirements;
    NSMutableArray * _inputVideoRequirements;
    NSMutableArray * _outputMetadataRequirements;
    NSMutableArray * _outputVideoRequirements;
    NSSet * _preventionReasons;
    int  _type;
    VCPCaptureAnalysisSession * _vcpSession;
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

- (unsigned int)allowedPixelBufferCompressionDirection;
- (bool)allowsAsyncPropagation;
- (id)bindOutputMetadataKeys:(id)arg1;
- (id)bindVideoInputFromAttachedMediaUsingKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 withVideoFormatProvider:(id /* block */)arg3;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)executable;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (int)executionTarget;
- (id)extractable;
- (id)initWithType:(int)arg1 analysisType:(unsigned long long)arg2 executionTarget:(int)arg3 schedulerPriority:(unsigned int)arg4 preventionReasons:(id)arg5 resourceProvider:(id)arg6;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)prepareForExecution;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (id)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (id)propagatable;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)submittable;
- (int)type;

@end
