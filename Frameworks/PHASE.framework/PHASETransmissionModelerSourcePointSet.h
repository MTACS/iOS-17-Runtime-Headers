
@interface PHASETransmissionModelerSourcePointSet : NSObject {
    struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _points;
    long long  _size;
}

@property (nonatomic, readonly) long long size;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)attenuationAtIndex:(long long)arg1;
- (float)getAttenuationAtIndex:(long long)arg1;
- (void)getPositionAndAttenuationAtIndex:(long long)arg1;
- (void)getPositionAtIndex:(long long)arg1;
- (id)init;
- (id)initWithRenderSourceView:(const void*)arg1;
- (void)positionAndAttenuationAtIndex:(long long)arg1;
- (void)positionAtIndex:(long long)arg1;
- (long long)size;

@end
