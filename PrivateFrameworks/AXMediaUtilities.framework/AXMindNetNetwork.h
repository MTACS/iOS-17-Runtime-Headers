
@interface AXMindNetNetwork : NSObject {
    bool  _can_rotate;
    NSArray * _filterThreshold;
    NSArray * _filterThresholds;
    struct vector<int, std::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  _important_classes;
    float  _input_aspect_ratio;
    float  _input_height;
    bool  _keep_aspect_ratio;
    MLModel * _mindNetModel;
    long long  _modelType;
    /* Warning: unhandled struct encoding: '{vector<NSString *, std::allocator<NSString *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<NSString *__strong *, std::allocator<NSString *>>="__value_"^@}}' */ struct vector<NSString *, std::allocator<NSString *>> { 
        __end_ **__begin_; 
    }  _model_labels;
    float  _nmsThreshold;
    int  _num_pos_classes;
    int  _num_ratios;
    float  _screenshot_height;
    float  _screenshot_width;
    float  _threshold;
    int  _version;
}

@property (nonatomic, readonly) NSArray *filterThresholds;
@property (nonatomic) float nmsThreshold;
@property (nonatomic, readonly) unsigned long long preferredSmallSide;
@property (nonatomic) float threshold;
@property (nonatomic) int version;

+ (id)networkWithModelPath:(id)arg1 configuration:(id)arg2 modelType:(long long)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)filterThresholds;
- (id)initWithModelPath:(id)arg1 configuration:(id)arg2 modelType:(long long)arg3;
- (float)nmsThreshold;
- (unsigned long long)preferredSmallSide;
- (id)processCIImage:(id)arg1;
- (id)processVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (id)resizeAndProcessVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (void)setNmsThreshold:(float)arg1;
- (void)setThreshold:(float)arg1;
- (void)setVersion:(int)arg1;
- (float)threshold;
- (int)version;

@end
