
@interface ABPKResultRetargeting : NSObject {
    float  _estimatedScale;
    NSUUID * _identifier;
    ABPK3DLiftingResult * _liftingResult;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _localTransforms;
    struct vector<ABPKSRT, std::allocator<ABPKSRT>> { 
        struct ABPKSRT {} *__begin_; 
        struct ABPKSRT {} *__end_; 
        struct __compressed_pair<ABPKSRT *, std::allocator<ABPKSRT>> { 
            struct ABPKSRT {} *__value_; 
        } __end_cap_; 
    }  _localTransformsSRT;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _modelTransforms;
}

@property (nonatomic) float estimatedScale;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*jointLocalTransforms;
@property (nonatomic, readonly) const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*jointModelTransforms;
@property (nonatomic, readonly) unsigned long long jointTransformCount;
@property (nonatomic, readonly) const struct ABPKSRT { struct { } x1; }*localJointTransformsSRT;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)estimatedScale;
- (id)identifier;
- (id)initWithModelJointTransforms:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 localJointTransformsSRT:(const struct ABPKSRT { struct { } x1; }*)arg2 numberOfTransforms:(unsigned long long)arg3 liftedSkeletonData:(id)arg4 identifier:(id)arg5;
- (const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)jointLocalTransforms;
- (const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)jointModelTransforms;
- (unsigned long long)jointTransformCount;
- (const struct ABPKSRT { struct { } x1; }*)localJointTransformsSRT;
- (void)setEstimatedScale:(float)arg1;

@end
