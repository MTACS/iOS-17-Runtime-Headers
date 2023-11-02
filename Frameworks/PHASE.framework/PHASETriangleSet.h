
@interface PHASETriangleSet : NSObject {
    void _color;
    long long  _size;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  verts;
}

@property (nonatomic, readonly) void color;
@property (nonatomic, readonly) long long size;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)color;
- (void)getPointAtIndex:(long long)arg1 vertexIndex:(long long)arg2;
- (id)init;
- (id)initWithTriangleData:(void *)arg1 color:(void *)arg2; // needs 2 arg types, found 1: id
- (void)pointAtIndex:(long long)arg1 vertexIndex:(long long)arg2;
- (long long)size;

@end
