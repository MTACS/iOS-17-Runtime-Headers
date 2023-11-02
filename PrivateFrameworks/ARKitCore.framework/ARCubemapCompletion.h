
@interface ARCubemapCompletion : NSObject {
    float  _alpha_threshold;
    float  _b_avg;
    float  _b_bias_pre_A11;
    double  _bias_exposure_threshold;
    int  _bias_height_pre_A11;
    int  _bias_mask;
    <MTLComputePipelineState> * _combineBuffersToHDR;
    ARGPUCubemapConverter * _cubemapConverter;
    <MTLDevice> * _device;
    bool  _espressoInitialized;
    void * _espresso_ctx;
    struct { 
        void *plan; 
        int network_index; 
    }  _espresso_net;
    void * _espresso_plan;
    struct { 
        float bias_r; 
        float bias_g; 
        float bias_b; 
        float scale; 
        bool network_wants_bgr; 
    }  _espresso_processing_params;
    float  _g_avg;
    float  _g_bias_pre_A11;
    unsigned long long  _gan_height;
    unsigned long long  _gan_width;
    bool  _generateHDROutput;
    bool  _outdoorScene;
    <MTLCommandQueue> * _queue;
    float  _r_avg;
    float  _r_bias_pre_A11;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _randomNumbers;
    <MTLTexture> * _roughness;
    ARGPUSphericalBlur * _sphericalBlur;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _srgbToLogLUT_pre_A11;
    bool  _use_model_pre_A11;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  _vImageBuffer;
}

@property (nonatomic) bool generateHDROutput;

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)completeCubemap:(id)arg1 cameraExposure:(double)arg2 rotationWorldFromCube:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3;
- (id)completeLatLongImage:(id)arg1;
- (void)dealloc;
- (bool)generateHDROutput;
- (id)generateSeamSmoothingTexture;
- (id)grayCubemapOfSize:(unsigned long long)arg1;
- (id)init;
- (void)setGenerateHDROutput:(bool)arg1;
- (unsigned char)srgbToLog:(unsigned char)arg1;
- (id)toTexture:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })toVImageBuffer:(id)arg1;

@end
