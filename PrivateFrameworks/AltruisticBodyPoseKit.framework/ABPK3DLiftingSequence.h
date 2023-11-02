
@interface ABPK3DLiftingSequence : NSObject <ABPK3DLiftingAlgorithm> {
    struct RingBuffer<std::vector<std::array<float, 3>>, 243UL> { 
        unsigned long long _insertionIndex; 
        struct array<std::vector<std::array<float, 3>>, 243UL> { 
            struct vector<std::array<float, 3>, std::allocator<std::array<float, 3>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<std::array<float, 3> *, std::allocator<std::array<float, 3>>> { 
                    void *__value_; 
                } __end_cap_; 
            } __elems_[243]; 
        } _storage; 
        bool _filled; 
    }  _3DLiftingInputBuffer;
    ABPKSkeletonDefinition * _abpkLiftingSkeletonDefinition;
    void * _context_first_stage;
    int  _frameCount;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _gaussianSmoothingFilter;
    double  _imageHeight;
    double  _imageWidth;
    NSMutableDictionary * _inputBufferDict;
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
    }  _inputTensorFirstStage;
    NSArray * _inputTensorFirstStageNames;
    ABPK3DLiftingResult * _liftingResult;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _liftingResultAsModelPoses;
    ABPKMLModelConfiguration3DLiftingSequenceFirstStage * _mlConfigFirstStage;
    ABPKMLNetworkV2 * _networkV2;
    struct { 
        void *plan; 
        int network_index; 
    }  _network_first_stage;
    NSMutableDictionary * _outputBufferDict;
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
    }  _outputTensorFirstStage;
    NSArray * _outputTensorFirstStageNames;
    void * _plan_first_stage;
    struct RingBuffer<std::vector<float>, 9UL> { 
        unsigned long long _insertionIndex; 
        struct array<std::vector<float>, 9UL> { 
            struct vector<float, std::allocator<float>> { 
                float *__begin_; 
                float *__end_; 
                struct __compressed_pair<float *, std::allocator<float>> { 
                    float *__value_; 
                } __end_cap_; 
            } __elems_[9]; 
        } _storage; 
        bool _filled; 
    }  _smoothingFilterRingBuffer;
    bool  _useEspressoV2;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_adjustBoneLength:(void*)arg1;
- (void)_endLoading3DLiftingSequenceMLModelSignpost;
- (void)_endPostProcessFor3DLiftingSequenceModelDataSignpostWithTimestamp:(double)arg1;
- (void)_endPrepareLiftingSequenceInputSignpostWithTimestamp:(double)arg1;
- (void)_endRunLiftingSequenceModelSignpostWithTimestamp:(double)arg1;
- (void)_startLoading3DLiftingSequenceMLModelSignpost;
- (void)_startPostProcessFor3DLiftingSequenceModelDataSignpostWithTimestamp:(double)arg1;
- (void)_startPrepareLiftingSequenceInputSignpostWithTimestamp:(double)arg1;
- (void)_startRunLiftingSequenceModelSignpostWithTimestamp:(double)arg1;
- (void)dealloc;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)get3DLiftingResultsAsModelPoses;
- (struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^ {})getGaussianSmoothedOutput:(const void*)arg1;
- (id)getLiftingResults;
- (id)init;
- (bool)initMLNetwork;
- (int)runLiftingModelWithBuffer:(const void*)arg1 with2DReferenceResults:(id)arg2 atTimestamp:(double)arg3 exportDebuggingData:(bool)arg4;
- (int)runLiftingModelWithData:(id)arg1 atTimestamp:(double)arg2;
- (int)runLiftingModelWithData:(id)arg1 imageResolution:(struct CGSize { double x1; double x2; })arg2 deviceOrientation:(long long)arg3 atTimestamp:(double)arg4;
- (void)saveDataToFilePath:(id)arg1 with2DInputBuffer:(const void*)arg2 withFirstStageOutput:(float*)arg3 withSmoothedOutput:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4 withPostprocessedLiftingResults:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg5;
- (void)updateInputImageResolution:(struct CGSize { double x1; double x2; })arg1;

@end
