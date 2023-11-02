
@interface EspressoConvolutionWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {
    struct shared_ptr<Espresso::blob<float, 1>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  biases_blob;
    unsigned int  data_type;
    struct convolution_uniforms { 
        int W; 
        int H; 
        int Winput; 
        int Hinput; 
        int start_channel_low_priority_split; 
        int output_row_bytes; 
        int fused_relu; 
        int fused_tanh; 
        int has_biases; 
        float leaky_relu_alpha; 
        int C; 
        int K; 
        int Nx; 
        int Ny; 
        int backward_stride; 
        int fused_activation_mode; 
        float fused_activation_alpha; 
        float fused_activation_beta; 
        struct padding_params_t { 
            short pad_mode; 
            short fill_mode; 
            float value; 
            short l; 
            short r; 
            short t; 
            short b; 
            short front; 
            short back; 
        } pad; 
        short stride_x; 
        short stride_y; 
        short dilation_x; 
        short dilation_y; 
        unsigned short mtl_pad_l; 
        unsigned short mtl_pad_t; 
        int has_8bit_weights; 
        int do_ncc; 
        int has_batch_norm; 
        int n_groups; 
        int n_parallel; 
        unsigned short start_channel_bottom; 
        unsigned short start_channel_top; 
        unsigned short total_channel_bottom; 
        unsigned short total_channel_top; 
        unsigned short split_K_channels_low_priority_split; 
        short n_batch; 
        int deconv_out_width; 
        int deconv_out_height; 
        int low_precision_accumulation; 
        int hint_use_winograd_win_size; 
        int Nt; 
        short stride_t; 
        int disable_bnns_client_ptr; 
        bool use_sequential_cblas; 
    }  params;
    struct shared_ptr<Espresso::blob<float, 1>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  quantization_lut;
    struct shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1>>="__ptr_"^v"__cntrl_"^{__shared_weak_count {}  quantization_ranges;
    struct shared_ptr<Espresso::blob<unsigned char, 4>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  quantized_weights_blob;
    struct shared_ptr<Espresso::blob<float, 1>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  scale_factor_batch_norm;
    struct shared_ptr<Espresso::blob<float, 4>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 4>> { 
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
- (id)initWithParams:(struct convolution_uniforms { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; float x10; int x11; int x12; int x13; int x14; int x15; int x16; float x17; float x18; struct padding_params_t { short x_19_1_1; short x_19_1_2; float x_19_1_3; short x_19_1_4; short x_19_1_5; short x_19_1_6; short x_19_1_7; short x_19_1_8; short x_19_1_9; } x19; short x20; short x21; short x22; short x23; unsigned short x24; unsigned short x25; int x26; int x27; int x28; int x29; int x30; unsigned short x31; unsigned short x32; unsigned short x33; unsigned short x34; unsigned short x35; short x36; int x37; int x38; int x39; int x40; int x41; short x42; int x43; bool x44; })arg1;
- (id)label;
- (bool)load;
- (float*)lookupTableForUInt8Kernel;
- (void)purge;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rangesForUInt8Kernel;
- (bool)ready;
- (void*)weights;

@end
