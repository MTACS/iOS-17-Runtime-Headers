
@interface EspressoInnerProductWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {
    struct shared_ptr<Espresso::blob<float, 1>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  biases_blob;
    unsigned int  data_type;
    struct inner_product_uniforms { 
        unsigned int nC; 
        unsigned int nB; 
        int has_biases; 
        int has_relu; 
        int has_tanh; 
        float tanh_alpha; 
        float tanh_beta; 
        int has_prelu; 
        int is_lookup; 
        int quantization_mode; 
        bool nd_mode; 
        int add_to_output; 
        int use_raw_buffers; 
        int fused_activation_mode; 
        float fused_activation_alpha; 
        float fused_activation_beta; 
        unsigned int m; 
        unsigned int k; 
        unsigned int n; 
        unsigned int Abytes; 
        unsigned int Bbytes; 
        unsigned int k4; 
        unsigned int n4; 
        unsigned int n8; 
        unsigned int n8_splitk; 
        int argmax_tree_n_clusters; 
        int argmax_tree_n_clusters_keep; 
        int sparse_block_size_x; 
        int sparse_block_size_y; 
        int low_precision_accumulation; 
        int compute_every; 
        int is_lookup_rounds_to_nearest; 
        int disable_bnns_client_ptr; 
    }  params;
    struct shared_ptr<Espresso::blob<float, 1>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  quantization_lut;
    struct shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1>>="__ptr_"^v"__cntrl_"^{__shared_weak_count {}  quantization_ranges;
    struct shared_ptr<Espresso::blob<unsigned char, 2>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  quantized_weights_blob;
    struct shared_ptr<Espresso::blob<float, 2>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 2>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  weights_f16_blob;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float*)biasTerms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataType;
- (id)descriptor;
- (id)initWithParams:(struct inner_product_uniforms { unsigned int x1; unsigned int x2; int x3; int x4; int x5; float x6; float x7; int x8; int x9; int x10; bool x11; int x12; int x13; int x14; float x15; float x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; })arg1;
- (id)label;
- (bool)load;
- (float*)lookupTableForUInt8Kernel;
- (void)purge;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rangesForUInt8Kernel;
- (bool)ready;
- (void*)weights;

@end
