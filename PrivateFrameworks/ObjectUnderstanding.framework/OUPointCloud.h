
@interface OUPointCloud : NSObject <OUPointCloud> {
    struct unordered_map<std::string, unsigned int __attribute__((ext_vector_type(2))), std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int __attribute__((ext_vector_type(2)))>>>="__table_"{__hash_table<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>="__value_"Q {}  pointRangeOfKeyframes;
    struct OUPointCloudCpp { 
        struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {} rgb; 
    }  point_cloud;
}

@property (nonatomic, readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**colors;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**semanticLabels;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**semanticVotes;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)append:(unsigned long long)arg1 points:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 semanticLabels:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 semanticVotes:(const /* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4;
- (void)append:(unsigned long long)arg1 points:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 semanticLabels:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 semanticVotes:(const /* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4 colors:(const /* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg5;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (const void*)getCpp;
- (id)initWithCount:(unsigned long long)arg1 points:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 semanticLabels:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 semanticVotes:(const /* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4;
- (id)initWithCount:(unsigned long long)arg1 points:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 semanticLabels:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 semanticVotes:(const /* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4 colors:(const /* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg5;
- (id)initWithDictionary:(id)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (void)resample:(unsigned long long)arg1;
- (void)reset;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticLabels;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticVotes;

@end
