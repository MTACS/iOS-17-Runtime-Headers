
@interface PHASEVoxelSet3D : NSObject {
    struct vector<unsigned short __attribute__((ext_vector_type(3))), std::allocator<unsigned short __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<unsigned short * __attribute__((ext_vector_type(3))), std::allocator<unsigned short __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _points;
    long long  _size;
}

@property (nonatomic, readonly) long long size;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getAtIndex:(long long)arg1;
- (id)init;
- (id)initWithPoints:(void*)arg1 count:(unsigned long long)arg2;
- (long long)size;
- (void)voxelAtIndex:(long long)arg1;

@end
