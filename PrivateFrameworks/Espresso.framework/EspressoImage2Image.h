
@interface EspressoImage2Image : NSObject {
    int  _flip_y;
    int  _rotation_degrees;
    void * ctx;
    NSString * currentNetworkPath;
    long long  currentResolutionPreset;
    struct postprocessing_settings_t { 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } name; 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } network; 
        int do_blend; 
        float blend_alpha; 
        int grayscale_i0; 
        int grayscale_i1; 
        float temporal_alpha; 
        float gamma; 
        float saturation; 
        float contrast; 
        float brightness; 
        int color_transfer_mode; 
        int width; 
        int height; 
        int width_fast; 
        int height_fast; 
        int width_capture; 
        int height_capture; 
        int width_miniature; 
        int height_miniature; 
        int width_fullscreen; 
        int height_fullscreen; 
        int width_hd; 
        int height_hd; 
        float old_frame_scale; 
        float noise_strength; 
        int dyn_noise; 
        float noise_speed; 
        float preprocessing_bias_b; 
        float preprocessing_bias_g; 
        float preprocessing_bias_r; 
        float preprocessing_scale; 
        float preprocessing_old_frame_bias_scale; 
        bool high_quality_scaling; 
    }  current_postprocessing_settings;
    int  defaultHeight;
    int  defaultWidth;
    <MTLDevice> * device;
    unsigned long long  dim;
    unsigned long long  dim_small;
    NSObject<OS_dispatch_queue> * dispatch_queue;
    bool  is_temporal_model;
    struct { 
        void *plan; 
        int network_index; 
    }  net;
    struct shared_ptr<Espresso::V9Engine::v9_noise_kernel> { 
        struct v9_noise_kernel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  noise_k;
    struct shared_ptr<Espresso::generic_load_constant_kernel> { 
        struct generic_load_constant_kernel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  noise_load_constant_kernel;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
            struct __rep { 
                union { 
                    struct __long { 
                        char *__data_; 
                        unsigned long long __size_; 
                        unsigned int __cap_ : 63; 
                        unsigned int __is_long_ : 1; 
                    } __l; 
                    struct __short { 
                        BOOL __data_[23]; 
                        unsigned char __padding_[0]; 
                        unsigned int __size_ : 7; 
                        unsigned int __is_long_ : 1; 
                    } __s; 
                    struct __raw { 
                        unsigned long long __words[3]; 
                    } __r; 
                } ; 
            } __value_; 
        } __r_; 
    }  output_layer_name;
    void * plan;
    struct shared_ptr<Espresso::blob<float, 1>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  precomputed_noise;
    <MTLCommandQueue> * queue;
    int  scale_ratio;
    <MTLTexture> * smallOldResultTexture;
    float  t0;
    <MTLTexture> * tmpDestinationTexture;
    struct map<std::string, float, std::less<std::string>, std::allocator<std::pair<const std::string, float>>> { 
        struct __tree<std::__value_type<std::string, float>, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>>, std::allocator<std::__value_type<std::string, float>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  tweaks;
}

@property (nonatomic) int flip_y;
@property (nonatomic) int rotation_degrees;

+ (int)featureVersion;
+ (id)getStylesKeys;
+ (void)gpuSync:(id)arg1 tex:(id)arg2;
+ (bool)loadStylesConfigAtDefaultsKey:(id)arg1;
+ (bool)loadStylesConfigAtPath:(id)arg1;
+ (void)setDefaultOption:(id)arg1 toValue:(id)arg2;
+ (void)tuneNetworks:(id)arg1;
+ (void)tuneNetworksWGWindowSize:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_resetTemporalState;
- (int)_reshapeToResolutionPreset:(long long)arg1;
- (int)_reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (void)_tune;
- (void)addNoiseLayer;
- (void)aggregateWisdom:(void*)arg1;
- (float)benchmark;
- (void)dealloc;
- (int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4;
- (int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 destinationRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg5;
- (int)flip_y;
- (struct { void *x1; int x2; })getEspressoNetwork;
- (id)getInternalDataForKey:(id)arg1;
- (int)height;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (int)load:(id)arg1;
- (int)load:(id)arg1 resolutionPreset:(long long)arg2;
- (id)newOutputTexture;
- (void)postProcess:(id)arg1 cameraSourceTexture:(id)arg2 inputTexture:(id)arg3 destinationTexture:(id)arg4;
- (int)reload;
- (void)resetTemporalState;
- (int)reshapeToResolutionPreset:(long long)arg1;
- (int)reshapeToResolutionPreset:(long long)arg1 aspectRatio:(float)arg2;
- (int)reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (struct pair<int, int> { int x1; int x2; })resolutionForPreset:(long long)arg1;
- (int)rotation_degrees;
- (void)setFlip_y:(int)arg1;
- (void)setRotation_degrees:(int)arg1;
- (id)setupWithQueue:(id)arg1;
- (void)simpleLinearResize:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)styleName;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2 cropRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3;
- (void)tune;
- (void)tweak:(id)arg1 value:(float)arg2;
- (int)wasReshaped;
- (int)width;

@end
