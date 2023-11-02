
@interface ARMLImageProcessingTechnique : ARImageBasedTechnique <ARTechniqueBusyState> {
    struct CGSize { 
        double width; 
        double height; 
    }  _allowedResamplingImageSize;
    struct __CVPixelBufferPool { } * _bgraPixelBufferPool;
    bool  _delegateInference;
    bool  _deterministic;
    void * _espressoContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _espressoInputBufferLock;
    double  _espressoInputBufferTimestamp;
    struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _espressoInputTensors;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoNetwork;
    struct vector<__CVPixelBufferPool *, std::allocator<__CVPixelBufferPool *>> { 
        struct __CVPixelBufferPool {} **__begin_; 
        struct __CVPixelBufferPool {} **__end_; 
        struct __compressed_pair<__CVPixelBufferPool **, std::allocator<__CVPixelBufferPool *>> { 
            struct __CVPixelBufferPool {} **__value_; 
        } __end_cap_; 
    }  _espressoOutputBufferPools;
    struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _espressoOutputTensors;
    void * _espressoPlan;
    bool  _failedToLoadNetwork;
    bool  _hasBegunPrep;
    NSArray * _inputTensorNames;
    int  _lockedOrientation;
    NSString * _networkFilePath;
    bool  _networkHasConfigurations;
    struct CGSize { 
        double width; 
        double height; 
    }  _networkInputScaleBeforeRotation;
    NSArray * _outputTensorNames;
    bool  _prepComplete;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _prepLock;
    NSString * _previous_network_configuration;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_semaphore> * _processingSemaphore;
    bool  _useEspressoZeroCopyOutput;
}

@property (nonatomic) struct CGSize { double x1; double x2; } allowedResamplingImageSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool failedToLoadNetwork;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputTensorNames;
@property (nonatomic, readonly) bool isBusy;
@property (nonatomic, retain) NSString *networkFilePath;
@property bool networkHasConfigurations;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } networkInputScaleBeforeRotation;
@property (nonatomic, readonly) NSString *networkVersionString;
@property (nonatomic, readonly) NSArray *outputTensorNames;
@property bool prepComplete;
@property (readonly) Class superclass;
@property (nonatomic) bool useEspressoZeroCopyOutput;

+ (bool)isSupported;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)ARMLVerifyLoadedModelVersion:(id)arg1 deviceName:(id)arg2 major:(int)arg3 minor:(int)arg4;
- (void)_asynchronousProcessDownSampledImage:(id)arg1;
- (void)_asynchronousProcessEspressoTensor:(id)arg1;
- (void)_bindOutputTensor;
- (void)_captureMLRunNetworkInputImageData:(double)arg1 cameraType:(long long)arg2 imageWidth:(unsigned long long)arg3 imageHeight:(unsigned long long)arg4;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_prepareOnce:(bool)arg1;
- (id)_resampleImage:(id)arg1 rotationOfResultTensor:(long long)arg2 networkInputSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_runNeuralNetworkAndPushResult:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize { double x1; double x2; })arg3 rotationOfResultTensor:(long long)arg4;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (struct CGSize { double x1; double x2; })allowedResamplingImageSize;
- (int)bindInputBuffer:(unsigned long long)arg1 withImage:(id)arg2 andOriginalImageData:(id)arg3 rotationOfResultTensor:(long long)arg4;
- (long long)captureBehavior;
- (void)changeEspressoConfig:(id)arg1;
- (id)createResultDataFromTensors:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize { double x1; double x2; })arg6;
- (void)dealloc;
- (int)defaultEngine;
- (id)defaultEngineName;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)espressoInputTensorsData;
- (unsigned long long)espressoInputTensorsSize;
- (struct { void *x1; int x2; })espressoNetwork;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)espressoOutputTensorsData;
- (unsigned long long)espressoOutputTensorsSize;
- (void*)espressoPlan;
- (bool)failedToLoadNetwork;
- (long long)getDeviceOrientationFromImageData:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1 inputTensorNames:(id)arg2 outputTensorNames:(id)arg3 networkInputScaleBeforeRotation:(struct CGSize { double x1; double x2; })arg4 networkFilePath:(id)arg5;
- (id)initWithDispatchQueue:(id)arg1 inputTensorNames:(id)arg2 outputTensorNames:(id)arg3 networkInputScaleBeforeRotation:(struct CGSize { double x1; double x2; })arg4 networkFilePath:(id)arg5 useEspressoZeroCopyOutput:(bool)arg6;
- (id)initWithDispatchQueue:(id)arg1 networkInputScaleBeforeRotation:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithDispatchQueue:(id)arg1 networkInputScaleBeforeRotation:(struct CGSize { double x1; double x2; })arg2 delegateInference:(bool)arg3;
- (id)inputTensorNames;
- (bool)isBusy;
- (bool)isLoadedModelVersionCorrect:(id)arg1;
- (void)loadMLWithPath:(id)arg1 networkMode:(id)arg2;
- (void)lockOrientation:(long long)arg1;
- (id)networkFilePath;
- (bool)networkHasConfigurations;
- (struct { float x1; float x2; float x3; float x4; bool x5; })networkInputParams;
- (struct CGSize { double x1; double x2; })networkInputScaleBeforeRotation;
- (void)networkModeDidChange:(id)arg1 toMode:(id)arg2;
- (id)networkModesForOrientation:(long long)arg1;
- (bool)networkProvidesConfigurationsForDeviceOrientation;
- (id)networkVersionString;
- (long long)numberOfInputChannelsToExpectInNetwork;
- (long long)orientationForInitializingEspresso;
- (id)outputTensorNames;
- (bool)preProcessNetworkInputImage:(struct __CVBuffer { }*)arg1;
- (bool)prepComplete;
- (void)prepare:(bool)arg1;
- (int)prepareBindInputBuffer:(unsigned long long)arg1 withName:(id)arg2;
- (id)processData:(id)arg1;
- (id)processEspressoTensor:(id)arg1;
- (id)processImageDataThroughNeuralNetwork:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize { double x1; double x2; })arg3 rotationOfResultTensor:(long long)arg4;
- (id)processingSemaphore;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)runNeuralNetworkWithImageData:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize { double x1; double x2; })arg3 rotationOfResultTensor:(long long)arg4;
- (void)setAllowedResamplingImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNetworkFilePath:(id)arg1;
- (void)setNetworkHasConfigurations:(bool)arg1;
- (void)setPrepComplete:(bool)arg1;
- (void)setUseEspressoZeroCopyOutput:(bool)arg1;
- (bool)shouldUseSynchronizedUltraWide;
- (bool)useEspressoZeroCopyOutput;
- (void)waitForProcessingCompleteInDeterministicMode;

@end
