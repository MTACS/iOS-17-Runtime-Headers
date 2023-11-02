
@interface _RSRawPointCloud : NSObject <RSRawPointCloud> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _points;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)count;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;

@end
