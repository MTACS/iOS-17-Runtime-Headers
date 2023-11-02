
@interface RS2DPolygon : NSObject <NSCopying> {
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {}  _polygonPoints;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;

@end
