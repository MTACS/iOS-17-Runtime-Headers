
@interface ARNeutralFaceGeometry : NSObject {
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _texCoordinatesVector;
    struct vector<short, std::allocator<short>> { 
        short *__begin_; 
        short *__end_; 
        struct __compressed_pair<short *, std::allocator<short>> { 
            short *__value_; 
        } __end_cap_; 
    }  _trianglesIndicesVector;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _verticesVector;
}

+ (id)sharedNeutralGeometry;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initFromCVAFaceTrackingSemantics;
- (unsigned long long)textureCoordinateCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)textureCoordinates;
- (unsigned long long)triangleCount;
- (const short*)triangleIndices;
- (unsigned long long)vertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

@end
