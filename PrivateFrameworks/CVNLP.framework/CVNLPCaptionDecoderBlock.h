
@interface CVNLPCaptionDecoderBlock : CVNLPCaptionModelBase {
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
    }  _attFeatsPlaceholderBlob;
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
    }  _blockInput;
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
    }  _blockOutput;
    void * _decoderCtx;
    struct vector<std::string, std::allocator<std::string>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::string *, std::allocator<std::string>> { 
            void *__value_; 
        } __end_cap_; 
    }  _decoderInputNames;
    struct { 
        void *plan; 
        int network_index; 
    }  _decoderNet;
    void * _decoderPlan;
    NSObject<OS_dispatch_queue> * _decoderQueue;
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
    }  _maskInput;
    NSString * _metricCopyString;
    NSString * _metricString;
    unsigned long long  _modelIndex;
    CVNLPCaptionDecoderBlock * _nextBlock;
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
    }  _positionInput;
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
    }  _scaleInput;
    struct map<std::string, std::vector<float>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> { 
        struct __tree<std::__value_type<std::string, std::vector<float>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<float>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<float>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _stateInputEspressoBuffers;
    struct map<std::string, std::vector<unsigned long>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned long>>>> { 
        struct __tree<std::__value_type<std::string, std::vector<unsigned long>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned long>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<unsigned long>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<unsigned long>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned long>>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _stateInputEspressoBuffersShape;
    struct map<std::string, std::vector<float>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> { 
        struct __tree<std::__value_type<std::string, std::vector<float>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<float>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<float>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _stateOutputEspressoBuffers;
}

@property (nonatomic) struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; } attFeatsPlaceholderBlob;
@property (nonatomic) struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; } blockInput;
@property (nonatomic) struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; } blockOutput;
@property (nonatomic) void*decoderCtx;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<std::string' */ struct  decoderInputNames; /* unknown property attribute:  std::allocator<std::string>>=^v}} */
@property (nonatomic) struct { void *x1; int x2; } decoderNet;
@property (nonatomic) void*decoderPlan;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *decoderQueue;
@property (nonatomic) struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; } maskInput;
@property (nonatomic, retain) NSString *metricCopyString;
@property (nonatomic, retain) NSString *metricString;
@property (nonatomic) unsigned long long modelIndex;
@property (nonatomic, retain) CVNLPCaptionDecoderBlock *nextBlock;
@property (nonatomic) struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; } positionInput;
@property (nonatomic) struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; } scaleInput;
@property (nonatomic) /* Warning: unhandled struct encoding: '{map<std::string' */ struct  stateInputEspressoBuffers; /* unknown property attribute:  std::less<std::string>>>=Q}}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{map<std::string' */ struct  stateInputEspressoBuffersShape; /* unknown property attribute:  std::less<std::string>>>=Q}}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{map<std::string' */ struct  stateOutputEspressoBuffers; /* unknown property attribute:  std::less<std::string>>>=Q}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_loadNetwork:(id)arg1 modelIndex:(unsigned long long)arg2;
- (void)_runBlockWithCopyOutputBlock:(id /* block */)arg1;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })attFeatsPlaceholderBlob;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })blockInput;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })blockOutput;
- (void)buildNetworkForSequenceLength:(unsigned long long)arg1 imageFeatures:(id)arg2;
- (void)copyInputState:(id)arg1;
- (void)copyOutputState:(id)arg1;
- (void)dealloc;
- (void*)decoderCtx;
- (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })decoderInputNames;
- (struct { void *x1; int x2; })decoderNet;
- (void*)decoderPlan;
- (id)decoderQueue;
- (id)initWithOptions:(id)arg1 modelIndex:(unsigned long long)arg2 runTimeParams:(id)arg3;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })maskInput;
- (id)metricCopyString;
- (id)metricString;
- (unsigned long long)modelIndex;
- (id)nextBlock;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })positionInput;
- (void)runBlockWithCopyInput:(float*)arg1 copyOutputBlock:(id /* block */)arg2;
- (void)runBlockWithCopyInputBlock:(id /* block */)arg1 copyOutputBlock:(id /* block */)arg2;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })scaleInput;
- (void)setAttFeatsPlaceholderBlob:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (void)setBlockInput:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (void)setBlockOutput:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (void)setDecoderCtx:(void*)arg1;
- (void)setDecoderInputNames:(struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })arg1;
- (void)setDecoderNet:(struct { void *x1; int x2; })arg1;
- (void)setDecoderPlan:(void*)arg1;
- (void)setDecoderQueue:(id)arg1;
- (void)setMaskInput:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (void)setMetricCopyString:(id)arg1;
- (void)setMetricString:(id)arg1;
- (void)setModelIndex:(unsigned long long)arg1;
- (void)setNextBlock:(id)arg1;
- (void)setPositionInput:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (void)setScaleInput:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (void)setStateInputEspressoBuffers:(struct map<std::string, std::vector<float>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> { struct __tree<std::__value_type<std::string, std::vector<float>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<float>>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<float>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (void)setStateInputEspressoBuffersShape:(struct map<std::string, std::vector<unsigned long>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned long>>>> { struct __tree<std::__value_type<std::string, std::vector<unsigned long>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned long>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<unsigned long>>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<unsigned long>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned long>>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (void)setStateOutputEspressoBuffers:(struct map<std::string, std::vector<float>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> { struct __tree<std::__value_type<std::string, std::vector<float>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<float>>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<float>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (struct map<std::string, std::vector<float>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> { struct __tree<std::__value_type<std::string, std::vector<float>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<float>>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<float>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })stateInputEspressoBuffers;
- (struct map<std::string, std::vector<unsigned long>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned long>>>> { struct __tree<std::__value_type<std::string, std::vector<unsigned long>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned long>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<unsigned long>>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<unsigned long>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned long>>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })stateInputEspressoBuffersShape;
- (struct map<std::string, std::vector<float>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> { struct __tree<std::__value_type<std::string, std::vector<float>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<float>>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<float>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })stateOutputEspressoBuffers;

@end
