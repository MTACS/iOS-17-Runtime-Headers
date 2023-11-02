
@interface ABPK3DLifting : NSObject <ABPK3DLiftingAlgorithm> {
    ABPKSkeletonDefinition * _abpkLiftingSkeletonDefinition;
    void * _context;
    NSArray * _inputTensorNames;
    ABPK3DLiftingResult * _liftingResult;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _liftingResultAsModelPoses;
    ABPKMLModelConfiguration3DLifting * _mlConfig;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    ABPKMLNetworkV2 * _networkV2;
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
    }  _outputTensor;
    NSArray * _outputTensorNames;
    void * _plan;
    bool  _useEspressoV2;
    NSMutableDictionary * inputBufferDict;
    NSMutableDictionary * outputBufferDict;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_adjustBoneLength:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)_endLoading3DLiftingMLModelSignpost;
- (void)_endPostProcessDataSignpostWithTimestamp:(double)arg1;
- (void)_endPrepareLiftingInputSignpostWithTimestamp:(double)arg1;
- (void)_endRunLiftingModelSignpostWithTimestamp:(double)arg1;
- (void)_startLoading3DLiftingMLModelSignpost;
- (void)_startPostProcessDataSignpostWithTimestamp:(double)arg1;
- (void)_startPrepareLiftingInputSignpostWithTimestamp:(double)arg1;
- (void)_startRunLiftingModelSignpostWithTimestamp:(double)arg1;
- (void)_transformRelativeToHip:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)get3DLiftingResultsAsModelPoses;
- (id)getLiftingResults;
- (id)init;
- (bool)initMLNetwork;
- (int)runLiftingModelWithData:(id)arg1 atTimestamp:(double)arg2;

@end
