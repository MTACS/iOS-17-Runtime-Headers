
@interface ABPK2DDetection : NSObject {
    ABPK2DDetectionConfiguration * _config2D;
    void * _context;
    long long  _deviceOrientation;
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
    NSMutableDictionary * _inputBufferDict;
    NSArray * _inputTensorNames;
    ABPKMLModelConfiguration2D * _mlConfig;
    NSString * _netPath;
    NSString * _netSubPath;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    ABPKMLNetworkV2 * _networkV2;
    NSMutableDictionary * _outputBufferDict;
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> { 
        struct __CVBuffer {} **__begin_; 
        struct __CVBuffer {} **__end_; 
        struct __compressed_pair<__CVBuffer **, std::allocator<__CVBuffer *>> { 
            struct __CVBuffer {} **__value_; 
        } __end_cap_; 
    }  _outputBuffers;
    NSArray * _outputTensorNames;
    struct networkparams_t { 
        struct inputparams_t { 
            struct { 
                float bias_r; 
                float bias_g; 
                float bias_b; 
                float scale; 
                bool network_wants_bgr; 
            } preprocessor; 
            struct CGSize { 
                double width; 
                double height; 
            } resolution; 
        } input; 
    }  _parameters;
    void * _plan;
    NSString * _previous_network_configuration;
    bool  _useEspressoV2;
    bool  _useEspressoZeroCopyOutput;
    struct networkvariables_t { 
        struct inputvariables_t { 
            struct { 
                void *data; 
                void *reserved; 
                unsigned long long dim[4]; 
                unsigned long long stride[4]; 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long channels; 
                unsigned long long batch_number; 
                unsigned long long sequence_length; 
                unsigned long long stride_width; 
                unsigned long long stride_height; 
                unsigned long long stride_channels; 
                unsigned long long stride_batch_number; 
                unsigned long long stride_sequence_length; 
                int storage_type; 
            } imageTensor; 
        } input; 
        struct outputvariables_t { 
            struct { 
                void *data; 
                void *reserved; 
                unsigned long long dim[4]; 
                unsigned long long stride[4]; 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long channels; 
                unsigned long long batch_number; 
                unsigned long long sequence_length; 
                unsigned long long stride_width; 
                unsigned long long stride_height; 
                unsigned long long stride_channels; 
                unsigned long long stride_batch_number; 
                unsigned long long stride_sequence_length; 
                int storage_type; 
            } heatmapsTensor; 
        } output; 
    }  _variables;
}

@property (nonatomic) bool useEspressoZeroCopyOutput;

+ (struct CGSize { double x1; double x2; })inputDimensionsForDeviceOrientation:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_bindOutputTensor;
- (id)_createResultDataFromImageDataForNeuralNetwork:(id)arg1 originalImageData:(id)arg2 outputPixelBuffer:(struct __CVBuffer {}**)arg3 numberOfOutputTensors:(unsigned long long)arg4 rotationOfResultTensor:(long long)arg5;
- (void)_endEvaluateBodyPoseForImageSignpostWithTimestamp:(double)arg1;
- (void)_endLoadingMLModelSignpost;
- (void)_startEvaluateBodyPoseForImageSignpostWithTimestamp:(double)arg1;
- (void)_startLoadingMLModelSignpost;
- (void)changeEspressoConfig:(id)arg1;
- (id)createException:(void*)arg1 forNetwork:(id)arg2;
- (void)dealloc;
- (bool)initMLNetwork;
- (id)initWithNetworkConfig:(id)arg1;
- (id)runWithImage:(struct __CVBuffer { }*)arg1 abpkOrientation:(long long)arg2 atTimestamp:(double)arg3 rotationOfResultTensor:(long long)arg4;
- (id)runWithImageDataForNeuralNetwork:(id)arg1 originalImageData:(id)arg2 abpkOrientation:(long long)arg3 atTimestamp:(double)arg4 rotationOfResultTensor:(long long)arg5;
- (id)runWithMLImage:(id)arg1 originalImage:(id)arg2 abpkOrientation:(long long)arg3 atTimestamp:(double)arg4 rotationOfResultTensor:(long long)arg5;
- (void)setUseEspressoZeroCopyOutput:(bool)arg1;
- (bool)useEspressoZeroCopyOutput;

@end
