
@interface ARDepthTechnique : ARMLImageProcessingTechnique <ARMLDepthDataSourceProvider, ARTechniqueBusyState> {
    bool  _alphamapAvailable;
    <MTLCommandQueue> * _commandQueue;
    bool  _computeNormals;
    long long  _currentFrameIndex;
    NSMutableArray * _derivatives;
    <MTLDevice> * _device;
    NSMutableArray * _features;
    ARImageRotationTechnique * _float32RotationTechnique;
    ADEspressoJasperColorInferenceDescriptor * _inferenceDescriptor;
    struct __CVBuffer { } * _jasperInputBuffer;
    unsigned long long  _layout;
    ADLKTOpticalFlow * _lkt;
    ADLKTTexturesDescriptor * _lktDescriptor;
    NSObject<OS_dispatch_queue> * _lktProcessingQueue;
    struct __CVPixelBufferPool { } * _normalPixelBufferPool;
    ADNormalsBuffer * _normalsHelperBuffer;
    ARImageRotationTechnique * _oneComponent8RotationTechnique;
    struct __CVBuffer { } * _opticalFlowOutputBuffer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _opticalFlowOutputBufferLock;
    struct __CVPixelBufferPool { } * _opticalFlowPixelBufferPool;
    struct __CVPixelBufferPool { } * _outputAlphaPixelBufferPool;
    struct __CVPixelBufferPool { } * _outputConfidenceMapPixelBufferPool;
    struct __CVPixelBufferPool { } * _outputConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } * _outputDepthPixelBufferPool;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    struct __CVPixelBufferPool { } * _outputTemporalConsistentConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } * _outputTemporalConsistentDepthPixelBufferPool;
    ADJasperColorPipeline * _pipeline;
    ADJasperColorPipelineParameters * _pipelineParameters;
    ADCameraCalibration * _previousCameraCalibration;
    struct __CVBuffer { } * _previousConfidenceBuffer;
    struct __CVBuffer { } * _previousDepthBuffer;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _previousPose;
    struct __CVBuffer { } * _previousWarpedConfidenceBuffer;
    struct __CVBuffer { } * _previousWarpedDepthBuffer;
    long long  _prioritization;
    NSMutableArray * _pyramids;
    struct __CVPixelBufferPool { } * _scaledConfidenceMapPixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledConfidenceOutputPixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledDepthOutputPixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledTemporallyConsistentConfidenceOutputPixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledTemporallyConsistentDepthOutputPixelBufferPool;
    long long  _storedFramesCount;
    unsigned long long  _temporalConsistencyMethod;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long depthDataSource;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBusy;
@property (nonatomic) struct __CVBuffer { }*opticalFlowOutputBuffer;
@property (nonatomic, readonly) ADJasperColorPipelineParameters *pipelineParameters;
@property (nonatomic, readonly) long long prioritization;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allocateLKTBuffers;
- (void)_captureMLRunNetworkInputImageData:(double)arg1 cameraType:(long long)arg2 imageWidth:(unsigned long long)arg3 imageHeight:(unsigned long long)arg4;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (struct __CVBuffer { }*)_executeLKTWithFrame:(struct __CVBuffer { }*)arg1;
- (void)_initLKT;
- (id)_rotatedPixelBufferImageData:(struct __CVBuffer { }*)arg1;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_updateOpticalFlowOutputBufferInBackgroundFromImageData:(id)arg1;
- (int)bindInputBuffer:(unsigned long long)arg1 withImage:(id)arg2 andOriginalImageData:(id)arg3 rotationOfResultTensor:(long long)arg4;
- (id)createResultDataFromTensors:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize { double x1; double x2; })arg6;
- (void)dealloc;
- (long long)depthDataSource;
- (id)init;
- (id)initWithPrioritization:(long long)arg1 temporalSmoothing:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (void)networkModeDidChange:(id)arg1 toMode:(id)arg2;
- (id)networkModesForOrientation:(long long)arg1;
- (struct __CVBuffer { }*)opticalFlowOutputBuffer;
- (id)pipelineParameters;
- (int)prepareBindInputBuffer:(unsigned long long)arg1 withName:(id)arg2;
- (long long)prioritization;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)setOpticalFlowOutputBuffer:(struct __CVBuffer { }*)arg1;

@end
