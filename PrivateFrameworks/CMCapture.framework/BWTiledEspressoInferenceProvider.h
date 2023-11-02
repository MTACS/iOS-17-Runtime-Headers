
@interface BWTiledEspressoInferenceProvider : NSObject <BWInferencePropagatable, BWInferenceProvider, BWInferenceSubmittable> {
    NSArray * _additionalVideoRequirements;
    BWTiledEspressoInferenceConfiguration * _configuration;
    BWEspressoInferenceProvider * _espressoProvider;
    NSObject<OS_dispatch_queue> * _espressoWorkQueue;
    NSArray * _inputVideoRequirements;
    void _maxTileCount;
    NSArray * _outputVideoRequirements;
    <BWInferenceResourceProvider> * _resourceProvider;
    NSArray * _tileInputBindingNames;
    NSArray * _tileInputVideoRequirements;
    NSArray * _tileOutputBindingNames;
    NSArray * _tileOutputVideoRequirements;
    int  type;
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
+ (id)videoFormatWithPixelFormat:(void *)arg1 size:(void *)arg2; // needs 2 arg types, found 1: unsigned int
+ (id)videoFormatWithPixelFormat:(void *)arg1 size:(void *)arg2 appliesFinalCropRect:(void *)arg3; // needs 3 arg types, found 2: unsigned int, bool
+ (id)videoFormatWithPixelFormat:(void *)arg1 size:(void *)arg2 includesInvalidContent:(void *)arg3; // needs 3 arg types, found 2: unsigned int, bool
+ (id)videoFormatWithPixelFormat:(void *)arg1 size:(void *)arg2 includesInvalidContent:(void *)arg3 appliesFinalCropRect:(void *)arg4; // needs 4 arg types, found 3: unsigned int, bool, bool
+ (id)videoFormatWithPixelFormat:(void *)arg1 size:(void *)arg2 sliceCount:(void *)arg3; // needs 3 arg types, found 2: unsigned int, unsigned int
+ (id)videoFormatWithPixelFormat:(void *)arg1 size:(void *)arg2 sliceCount:(void *)arg3 appliesFinalCropRect:(void *)arg4; // needs 4 arg types, found 3: unsigned int, unsigned int, bool
+ (id)videoFormatWithPixelFormat:(void *)arg1 size:(void *)arg2 sliceCount:(void *)arg3 includesInvalidContent:(void *)arg4; // needs 4 arg types, found 3: unsigned int, unsigned int, bool
+ (id)videoFormatWithPixelFormat:(void *)arg1 size:(void *)arg2 sliceCount:(void *)arg3 includesInvalidContent:(void *)arg4 appliesFinalCropRect:(void *)arg5; // needs 5 arg types, found 4: unsigned int, unsigned int, bool, bool

- (void).cxx_destruct;
- (unsigned int)allowedPixelBufferCompressionDirection;
- (bool)allowsAsyncPropagation;
- (id)cloneVideoRequirements;
- (int)createInputTiles:(void *)arg1 withInputs:(void *)arg2 atPosition:(void *)arg3 cmdBuffer:(void *)arg4; // needs 4 arg types, found 3: id, id, id*
- (void)dealloc;
- (id)executable;
- (int)executionTarget;
- (id)extractable;
- (id)initWithConfiguration:(id)arg1 inputVideoRequirements:(id)arg2 outputVideoRequirements:(id)arg3 resourceProvider:(id)arg4;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (int)loadNetworkWithURL:(void *)arg1 configName:(void *)arg2 inferenceType:(void *)arg3 maxTileCount:(void *)arg4 inputFormatsByBindingName:(void *)arg5 outputFormatsByBindingName:(void *)arg6 additionalVideoRequirements:(void *)arg7; // needs 7 arg types, found 6: id, id, int, id, id, id
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)preProcessOutputBuffer:(struct __CVBuffer { }*)arg1 forMediaKey:(id)arg2;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (id)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (id)propagatable;
- (int)propagateInferenceResultForOutputRequirement:(id)arg1 storage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;
- (int)purgeIntermediateResources;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)submitForSampleBuffer:(void *)arg1 usingStorage:(void *)arg2 withSubmissionTime:(void *)arg3 workQueue:(void *)arg4 completionHandler:(void *)arg5 currentTileCount:(void *)arg6; // needs 6 arg types, found 5: struct opaqueCMSampleBuffer { }*, id, struct { long long x1; int x2; unsigned int x3; long long x4; }, id, id /* block */
- (id)submittable;
- (int)type;
- (int)writeOutputFor:(void *)arg1 to:(void *)arg2 fromNetworkOutputTiles:(void *)arg3 withAdditionalPixelBuffers:(void *)arg4 withInputTilePixelBuffers:(void *)arg5 withInputFullPixelBuffers:(void *)arg6 atPosition:(void *)arg7 cmdBuffer:(void *)arg8; // needs 8 arg types, found 7: id, struct __CVBuffer { }*, id, id, id, id, id*

@end
