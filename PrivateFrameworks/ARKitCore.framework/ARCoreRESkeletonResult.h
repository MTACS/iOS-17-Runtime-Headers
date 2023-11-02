
@interface ARCoreRESkeletonResult : NSObject <NSCopying, NSSecureCoding> {
    double  _estimatedScaleFactor;
    NSUUID * _identifier;
    AR3DSkeletonDetectionResult * _liftingResult;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _localTransforms;
    struct vector<ARSRT, std::allocator<ARSRT>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ARSRT *, std::allocator<ARSRT>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _localTransformsSRT;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _modelTransforms;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionTransform;
}

@property (nonatomic) double estimatedScaleFactor;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*jointLocalTransforms;
@property (nonatomic, readonly) const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*jointModelTransforms;
@property (nonatomic, readonly) unsigned long long jointTransformCount;
@property (nonatomic, readonly) AR3DSkeletonDetectionResult *liftedSkeletonData;
@property (nonatomic, readonly) const struct { struct { } x1; }*localJointTransformsSRT;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionTransform;

+ (id)jointNames;
+ (id)jointParentIndices;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedScaleFactor;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelJointTransforms:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 localJointTransformsSRT:(const struct { struct { } x1; }*)arg2 numberOfTransforms:(unsigned long long)arg3 liftedSkeletonData:(id)arg4 identifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isJointTracked:(long long)arg1;
- (const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)jointLocalTransforms;
- (const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)jointModelTransforms;
- (unsigned long long)jointTransformCount;
- (id)liftedSkeletonData;
- (const struct { struct { } x1; }*)localJointTransformsSRT;
- (void)setEstimatedScaleFactor:(double)arg1;
- (void)setVisionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionTransform;

@end
