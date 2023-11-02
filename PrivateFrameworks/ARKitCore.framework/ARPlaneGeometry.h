
@interface ARPlaneGeometry : NSObject <NSSecureCoding> {
    unsigned long long  _boundaryVertexCount;
    void _center;
    void _extent;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _textureCoordinates;
    struct vector<short, std::allocator<short>> { 
        short *__begin_; 
        short *__end_; 
        struct __compressed_pair<short *, std::allocator<short>> { 
            short *__value_; 
        } __end_cap_; 
    }  _triangleIndices;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _vertices;
}

@property (nonatomic, readonly) unsigned long long boundaryVertexCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**boundaryVertices;
@property (nonatomic, readonly) void center;
@property (nonatomic, readonly) void extent;
@property (nonatomic, readonly) unsigned long long textureCoordinateCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**textureCoordinates;
@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic, readonly) const short*triangleIndices;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**vertices;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)boundaryVertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)boundaryVertices;
- (void)center;
- (void)encodeWithCoder:(id)arg1;
- (void)extent;
- (id)initWithBoundaryVertices:(void *)arg1 center:(void *)arg2 extent:(void *)arg3; // needs 3 arg types, found 1: const void*
- (id)initWithCoder:(id)arg1;
- (id)initWithVertices:(void *)arg1 triangleIndices:(void *)arg2 boundaryVertexCount:(void *)arg3 center:(void *)arg4 extent:(void *)arg5; // needs 5 arg types, found 3: struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>=^ {}, struct vector<short, std::allocator<short>> { short *x1; short *x2; struct __compressed_pair<short *, std::allocator<short>> { short *x_3_1_1; } x3; }, unsigned long long
- (unsigned long long)textureCoordinateCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)textureCoordinates;
- (unsigned long long)triangleCount;
- (const short*)triangleIndices;
- (unsigned long long)vertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

@end
