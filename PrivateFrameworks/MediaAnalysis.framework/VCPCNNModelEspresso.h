
@interface VCPCNNModelEspresso : NSObject {
    VCPCNNEspressoContext * _context;
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
    }  _inputBlob;
    struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _inputBlobs;
    NSArray * _inputNames;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    NSURL * _netFileUrl;
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
    }  _outputBlob;
    struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _outputBlobs;
    NSArray * _outputNames;
    void * _plan;
    NSString * _resConfig;
}

@property (nonatomic) struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; } inputBlob;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<espresso_buffer_t' */ struct  inputBlobs; /* unknown property attribute:  std::allocator<espresso_buffer_t>>=^{?}}} */
@property (nonatomic) struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; } outputBlob;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<espresso_buffer_t' */ struct  outputBlobs; /* unknown property attribute:  std::allocator<espresso_buffer_t>>=^{?}}} */
@property (nonatomic, readonly) NSString *resConfig;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)espressoForward:(float*)arg1;
- (int)espressoForwardInputs:(struct vector<float *, std::allocator<float *>> { float **x1; float **x2; struct __compressed_pair<float **, std::allocator<float *>> { float **x_3_1_1; } x3; })arg1;
- (void*)getEspressoContext;
- (int)getPlanPhase;
- (id)initWithParameters:(id)arg1 inputNames:(id)arg2 outputNames:(id)arg3 properties:(id)arg4;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })inputBlob;
- (struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x_3_1_1; } x3; })inputBlobs;
- (void)normalization:(float*)arg1;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })outputBlob;
- (struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x_3_1_1; } x3; })outputBlobs;
- (int)prepareModelInput:(float*)arg1;
- (int)prepareModelInputs:(struct vector<float *, std::allocator<float *>> { float **x1; float **x2; struct __compressed_pair<float **, std::allocator<float *>> { float **x_3_1_1; } x3; })arg1;
- (int)prepareModelWithConfig:(id)arg1;
- (id)resConfig;
- (void)setInputBlob:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (void)setInputBlobs:(struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x_3_1_1; } x3; })arg1;
- (void)setOutputBlob:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (void)setOutputBlobs:(struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x_3_1_1; } x3; })arg1;
- (int)softmax;

@end
