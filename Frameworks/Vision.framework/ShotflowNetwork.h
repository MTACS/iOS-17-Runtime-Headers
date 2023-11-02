
@interface ShotflowNetwork : NSObject {
    unsigned long long  _currentNetworkHeight;
    unsigned long long  _currentNetworkWidth;
    float  _defaultBoxSizes;
    void * _espressoContext;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoNetwork;
    void * _espressoPlan;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _logitsNegOutputs;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _logitsPosOutputs;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _offsetsOutputs;
    unsigned long long  _preferredSmallSide;
    bool  _releaseEspressoContext;
    bool  _releaseEspressoPlan;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _rollOutputs;
    float  _threshold;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _yawOutputs;
    bool  isAnchorSquare;
}

@property (nonatomic, readonly) unsigned long long preferredSmallSide;
@property (nonatomic) float threshold;

+ (const void*)defaultBoxesSides;
+ (bool)hasFaceBodyAssociation;
+ (bool)hasPetFaces;
+ (bool)hasPose;
+ (bool)inputBGR;
+ (struct tuple<float, float, float> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float> { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; })inputBiasRGB;
+ (float)inputImageAspectRatio;
+ (float)inputImageMaxDimension;
+ (float)inputImageMinDimension;
+ (id)inputLayerName;
+ (float)inputScale;
+ (float)nonSquareRollDefault;
+ (float)nonSquareYawDefault;
+ (unsigned long long)numberBinsRoll;
+ (unsigned long long)numberBinsYaw;
+ (id)processingDeviceDetectorWithEspressoNetwork:(struct { void *x1; int x2; })arg1 espressoPlan:(void*)arg2 threshold:(float)arg3;
+ (id)processingDeviceNetworkWithModelPath:(id)arg1 threshold:(float)arg2 preferredDeviceID:(int)arg3 engineID:(int)arg4 storageType:(int)arg5;
+ (const void*)strides;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEspressoNetwork:(struct { void *x1; int x2; })arg1 espressoPlan:(void*)arg2 threshold:(float)arg3;
- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;
- (void)initializeBuffers;
- (void)initializeEspressoResourcesWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4;
- (unsigned long long)preferredSmallSide;
- (id)processVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (id)resizeAndProcessVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (void)runNetwork:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setThreshold:(float)arg1;
- (float)threshold;

@end
