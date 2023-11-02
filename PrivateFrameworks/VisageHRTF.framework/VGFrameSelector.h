
@interface VGFrameSelector : NSObject {
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _angles;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _angularBestAlignments;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _angularBestScores;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _angularMinAlignments;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _angularVectors;
    NSArray * _expressionFilters;
    NSArray * _frontExpressionFilters;
    int  _frontPoseIdx;
    long long  _motionType;
    unsigned long long  _remainingPosesCount;
    unsigned long long  _requiredPosesCount;
    /* Warning: unhandled struct encoding: '{vector<VGCapturedPose *, std::allocator<VGCapturedPose *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<VGCapturedPose *__strong *, std::allocator<VGCapturedPose *>>="__value_"^@}}' */ struct vector<VGCapturedPose *, std::allocator<VGCapturedPose *>> { 
        __end_ **__begin_; 
    }  _selectedPoses;
    float  _simpleSelectorMaxAlignment;
    float  _simpleSelectorMinAlignment;
    bool  _useSimpleSelector;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _viewDirVectors;
}

@property (nonatomic, readonly) bool completed;
@property (nonatomic, readonly) unsigned long long remainingPosesCount;
@property (nonatomic, readonly) unsigned long long requiredPosesCount;
@property (nonatomic, readonly) NSDictionary *results;

+ (id)invalidPose;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)completed;
- (id)initForPosesCount:(unsigned long long)arg1 limit:(float)arg2 motionType:(long long)arg3 expressionFilters:(id)arg4;
- (id)initForPosesCount:(unsigned long long)arg1 limit:(float)arg2 motionType:(long long)arg3 expressionFilters:(id)arg4 options:(id)arg5;
- (id)processCaptureData:(id)arg1 trackingData:(id)arg2 framePose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (id)processViewDirInternal:(void *)arg1 trackingData:(void *)arg2 frameTimestampMS:(void *)arg3 selectorName:(void *)arg4; // needs 4 arg types, found 3: id, unsigned long long, id
- (id)processViewDirSimple:(void *)arg1 frameTimestampMS:(void *)arg2 selectorName:(void *)arg3; // needs 3 arg types, found 2: unsigned long long, id
- (unsigned long long)remainingPosesCount;
- (unsigned long long)requiredPosesCount;
- (id)results;
- (id)selectedValidPoses;

@end
