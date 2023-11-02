
@interface ARSpatialMappingPointCloud : NSObject <NSCopying> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraPose;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _colors;
    long long  _count;
    NSUUID * _identifier;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _normals;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _points;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _pointsToWorld;
    struct vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<unsigned char * __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _semanticLabels;
    struct vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<unsigned short * __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _semanticVotes;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _semantics;
    unsigned long long  _semanticsBinSize;
    double  _timestamp;
}

@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraPose;
@property (nonatomic, readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**colors;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**normals;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;
@property (nonatomic, readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**pointsToWorld;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**semanticLabels;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**semanticVotes;
@property (nonatomic, readonly) char *semantics;
@property (nonatomic, readonly) unsigned long long semanticsBinSize;
@property (nonatomic, readonly) double timestamp;

+ (id)dictionaryFromArray:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraPose;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)identifier;
- (id)initWithPointCloud:(struct CV3DReconPointCloud { }*)arg1 smTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 identifier:(id)arg3 timestamp:(double)arg4;
- (id)initWithPointCloud:(struct CV3DReconPointCloud { }*)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 identifier:(id)arg3 timestamp:(double)arg4;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)normals;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)pointsToWorld;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticLabels;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticVotes;
- (char *)semantics;
- (unsigned long long)semanticsBinSize;
- (void)setCameraPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (double)timestamp;
- (void)updateTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
