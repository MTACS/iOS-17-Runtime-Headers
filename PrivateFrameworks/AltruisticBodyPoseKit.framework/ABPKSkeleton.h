
@interface ABPKSkeleton : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraRootTransform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _deviceRootTransform;
    float  _estimatedScale;
    struct vector<ABPKTransform, std::allocator<ABPKTransform>> { 
        struct ABPKTransform {} *__begin_; 
        struct ABPKTransform {} *__end_; 
        struct __compressed_pair<ABPKTransform *, std::allocator<ABPKTransform>> { 
            struct ABPKTransform {} *__value_; 
        } __end_cap_; 
    }  _localPoses;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _modelPoses;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _renderingCameraRootTransform;
    ABPKSkeletonDefinition * _skeletonDefinition;
    long long  _skeletonType;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraRootTransform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } deviceRootTransform;
@property (nonatomic) float estimatedScale;
@property (nonatomic, readonly) const struct ABPKTransform { struct { } x1; }*localPoses;
@property (nonatomic, readonly) const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*modelPoses;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } renderingCameraRootTransform;
@property (nonatomic, readonly) ABPKSkeletonDefinition *skeletonDefinition;
@property (nonatomic, readonly) long long skeletonType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraRootTransform;
- (float)computeHeight;
- (id)description;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })deviceRootTransform;
- (float)estimatedScale;
- (void)getGlobalJointDataForSkeletonWithPosition:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 withOrientation:(struct { }*)arg2;
- (void)getLocalJointDataForSkeletonWithPosition:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 withOrientation:(struct { }*)arg2;
- (id)init;
- (id)initWithType:(long long)arg1;
- (const struct ABPKTransform { struct { } x1; }*)localPoses;
- (const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)modelPoses;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })renderingCameraRootTransform;
- (void)scaleTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 withScale:(float)arg2;
- (void)setCameraRootTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setDeviceRootTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setEstimatedScale:(float)arg1;
- (void)setLocalPoses:(const struct ABPKTransform { struct { } x1; }*)arg1 andUpdateModelPoses:(bool)arg2;
- (void)setModelPoses:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 andUpdateLocalPoses:(bool)arg2;
- (void)setModelPosesFromDict:(id)arg1 andUpdateLocalPoses:(bool)arg2;
- (void)setRenderingCameraRootTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)skeletonDefinition;
- (long long)skeletonType;
- (id)toDictionary;
- (void)transformModelPoses:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 andUpdateLocalPoses:(bool)arg2;
- (void)updateJointPosesAndRootTransformUsingDepthEstimatedScale;
- (void)updateLocalPosesFromModelPoses;
- (void)updateModelPosesFromLocalPoses;

@end
