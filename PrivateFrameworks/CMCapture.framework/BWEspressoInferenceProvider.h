
@interface BWEspressoInferenceProvider : NSObject <BWEspressoInferenceBinding, BWEspressoInferencePropagatable, BWInferenceExecutable, BWInferenceProvider, BWInferenceSubmittable> {
    unsigned int  _allowedCompressionDirection;
    NSMutableDictionary * _bindingNamesByRequirement;
    NSMutableArray * _cloneVideoRequirements;
    unsigned long long  _concurrentSubmissionLimit;
    BWEspressoInferenceContext * _context;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoNetwork;
    NSString * _espressoNetworkVersion;
    void * _espressoPlan;
    int  _espressoPriority;
    int  _executionTarget;
    NSMutableArray * _inputMetadataRequirements;
    NSMutableArray * _inputVideoRequirements;
    NSString * _networkConfiguration;
    NSURL * _networkURL;
    NSMutableArray * _outputMetadataRequirements;
    NSMutableArray * _outputVideoRequirements;
    NSMutableArray * _pixelBuffersLockedDuringExecution;
    NSSet * _preventionReasons;
    <BWInferencePropagatable> * _propagator;
    <BWEspressoInferenceTensorMemoryProvider> * _tensorMemoryProvider;
    int  _type;
}

@property (nonatomic, readonly) unsigned int allowedPixelBufferCompressionDirection;
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
@property (nonatomic, retain) <BWEspressoInferenceTensorMemoryProvider> *tensorMemoryProvider;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (unsigned int)allowedPixelBufferCompressionDirection;
- (id)bindEspressoInput:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindEspressoInput:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3 count:(unsigned long long)arg4;
- (id)bindEspressoInput:(id)arg1 fromMetadataUsingKeys:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3;
- (id)bindEspressoOutput:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3 count:(unsigned long long)arg4;
- (id)bindEspressoOutput:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asMetadataUsingKey:(id)arg2;
- (id)bindEspressoOutput:(id)arg1 asMetadataUsingKeys:(id)arg2;
- (id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)description;
- (id)executable;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (int)executionTarget;
- (id)extractable;
- (id)initWithType:(int)arg1 networkURL:(id)arg2 networkConfiguration:(id)arg3 context:(id)arg4 executionTarget:(int)arg5 schedulerPriority:(unsigned int)arg6 preventionReasons:(id)arg7 resourceProvider:(id)arg8 allowedCompressionDirection:(unsigned int)arg9 concurrentSubmissionLimit:(unsigned long long)arg10;
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
- (void)setPropagatable:(id)arg1;
- (void)setTensorMemoryProvider:(id)arg1;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)submittable;
- (id)tensorMemoryProvider;
- (int)type;

@end
