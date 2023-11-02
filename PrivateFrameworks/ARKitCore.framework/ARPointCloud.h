
@interface ARPointCloud : NSObject <NSSecureCoding> {
    void _centroid;
    ADJasperPointCloud * _depthPointCloud;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _identifiersVector;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _pointsVector;
    void _standardDeviation;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _vergenceAngleCosinesVector;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) const unsigned long long*identifiers;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;

+ (id)concatPointClouds:(id)arg1;
+ (id)emptyPointCloud;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_hitTestPointFromOrigin:(void *)arg1 withDirection:(void *)arg2 maximumAngle:(void *)arg3 cameraToWorldTransform:(void *)arg4; // needs 4 arg types, found 2: float, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (void)centroid;
- (struct { })computeBounds;
- (unsigned long long)count;
- (id)depthPointCloud;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filterPointCloudFromellipsoid;
- (id)filterPointCloudWithIdentifiers:(struct set<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> { struct __tree<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::less<unsigned long long>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (unsigned long long)hash;
- (const unsigned long long*)identifiers;
- (id)initWithCV3DPointData:(id)arg1 minVergenceAngleCosine:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDepthPointCloud:(id)arg1;
- (id)initWithPointData:(id)arg1;
- (id)initWithPointsVector:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^ {})arg1 identifiersVector:(struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x_3_1_1; } x3; })arg2;
- (id)initWithPointsVector:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^ {})arg1 identifiersVector:(struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x_3_1_1; } x3; })arg2 vergenceAngleCosinesVector:(struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })arg3;
- (bool)isEqual:(id)arg1;
- (id)pointCloudByApplyingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (void)standardDeviation;
- (const float*)vergenceAngleCosines;

@end
