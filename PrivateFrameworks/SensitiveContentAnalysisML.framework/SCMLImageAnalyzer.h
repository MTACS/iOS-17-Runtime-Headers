
@interface SCMLImageAnalyzer : SCMLModelBase {
    int  __espressoDeviceId;
    int  __espressoEngine;
    int  __espressoStorageType;
    NSDictionary * _acceptedDetectionOutputIndices;
    NSDictionary * _acceptedOutputIndices;
    NSDictionary * _detectionThresholdByOutputIndex;
    NSURL * _modelUrl;
    unsigned long long  _otgxMainIndex;
    NSNumber * _otgxMainThreshold;
    bool  _otgxRetrieveAllClasses;
    unsigned long long  data_dim;
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
    }  detectionBoxes;
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
    }  detectionScores;
    void * encoderCtx;
    struct { 
        void *plan; 
        int network_index; 
    }  encoderNet;
    void * encoderPlan;
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
    }  leafProbabilities;
}

@property (readonly) int _espressoDeviceId;
@property (readonly) int _espressoEngine;
@property (readonly) int _espressoStorageType;
@property (readonly) NSDictionary *acceptedDetectionOutputIndices;
@property (readonly) NSDictionary *acceptedOutputIndices;
@property (readonly) NSDictionary *detectionThresholdByOutputIndex;
@property (readonly) NSURL *modelUrl;
@property (readonly) unsigned long long otgxMainIndex;
@property (readonly) NSNumber *otgxMainThreshold;
@property (readonly) bool otgxRetrieveAllClasses;

+ (id)_decodeName:(id)arg1;
+ (id)_encodeName:(id)arg1;
+ (id)_readOperatingThresholdsDataUsingModelURL:(id)arg1 error:(id*)arg2;
+ (id)getOperatingPointDataForClassName:(id)arg1 modelURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (struct NetworkOutputs { struct TensorView<float, 1> { float *x_1_1_1; struct array<int, 1UL> { int x_2_2_1[1]; } x_1_1_2; } x1; struct TensorView<float, 3> { float *x_2_1_1; struct array<int, 3UL> { int x_2_2_1[3]; } x_2_1_2; } x2; struct TensorView<float, 3> { float *x_3_1_1; struct array<int, 3UL> { int x_2_2_1[3]; } x_3_1_2; } x3; })_computeOutputForPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (int)_espressoDeviceId;
- (int)_espressoEngine;
- (int)_espressoStorageType;
- (void)_extractThresholdForOTGXMain:(id)arg1;
- (struct vector<SCML::BoxInfo, std::allocator<SCML::BoxInfo>> { struct BoxInfo {} *x1; struct BoxInfo {} *x2; struct __compressed_pair<SCML::BoxInfo *, std::allocator<SCML::BoxInfo>> { struct BoxInfo {} *x_3_1_1; } x3; })_processDetectionOutput:(struct NetworkOutputs { struct TensorView<float, 1> { float *x_1_1_1; struct array<int, 1UL> { int x_2_2_1[1]; } x_1_1_2; } x1; struct TensorView<float, 3> { float *x_2_1_1; struct array<int, 3UL> { int x_2_2_1[3]; } x_2_1_2; } x2; struct TensorView<float, 3> { float *x_3_1_1; struct array<int, 3UL> { int x_2_2_1[3]; } x_3_1_2; } x3; })arg1;
- (id)_processNetworkOutput:(struct NetworkOutputs { struct TensorView<float, 1> { float *x_1_1_1; struct array<int, 1UL> { int x_2_2_1[1]; } x_1_1_2; } x1; struct TensorView<float, 3> { float *x_2_1_1; struct array<int, 3UL> { int x_2_2_1[3]; } x_2_1_2; } x2; struct TensorView<float, 3> { float *x_3_1_1; struct array<int, 3UL> { int x_2_2_1[3]; } x_3_1_2; } x3; })arg1;
- (id)acceptedDetectionOutputIndices;
- (id)acceptedOutputIndices;
- (id)analyzeImage:(struct CGImage { }*)arg1 error:(id*)arg2;
- (id)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)classifyImage:(struct CGImage { }*)arg1 error:(id*)arg2;
- (id)classifyPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (struct NetworkOutputs { struct TensorView<float, 1> { float *x_1_1_1; struct array<int, 1UL> { int x_2_2_1[1]; } x_1_1_2; } x1; struct TensorView<float, 3> { float *x_2_1_1; struct array<int, 3UL> { int x_2_2_1[3]; } x_2_1_2; } x2; struct TensorView<float, 3> { float *x_3_1_1; struct array<int, 3UL> { int x_2_2_1[3]; } x_3_1_2; } x3; })computeOutputForImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)detectionThresholdByOutputIndex;
- (id)generateClassificationScoresForImage:(struct CGImage { }*)arg1 error:(id*)arg2;
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)initWithModelURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)isSensitive:(id)arg1 sensitivityScore:(id*)arg2;
- (bool)isSensitive:(id)arg1 sensitivityScore:(id*)arg2 classificationMode:(unsigned long long)arg3;
- (bool)loadNetworkForURL:(id)arg1 espressoEngine:(int)arg2 storageType:(int)arg3 deviceId:(int)arg4;
- (id)modelUrl;
- (unsigned long long)otgxMainIndex;
- (id)otgxMainThreshold;
- (bool)otgxRetrieveAllClasses;
- (id)scaleMethod;
- (bool)shouldProcessDetections;

@end
