
@interface CHBoxcarFilterPointFIFO : CHPointFIFO {
    struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _prevPoints;
    float  _spacing;
    unsigned long long  _width;
}

@property (nonatomic) float spacing;
@property (nonatomic) unsigned long long width;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint;
- (void)clear;
- (void)flush;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3;
- (void)setSpacing:(float)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (float)spacing;
- (unsigned long long)width;

@end
