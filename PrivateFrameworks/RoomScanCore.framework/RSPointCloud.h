
@interface RSPointCloud : NSObject <RSPointCloud> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _cameraPositions;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _colors;
    bool  _isCameraPositionEnabled;
    struct unordered_map<std::string, std::unordered_set<unsigned long long>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<unsigned long long>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_set<unsigned long long>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _keyframeVoxelSet;
    struct unordered_map<std::string, unsigned int __attribute__((ext_vector_type(2))), std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int __attribute__((ext_vector_type(2)))>>>="__table_"{__hash_table<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>="__value_"Q {}  _mappingInterval;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _points;
    struct unordered_map<std::string, unsigned int __attribute__((ext_vector_type(2))), std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int __attribute__((ext_vector_type(2)))>>>="__table_"{__hash_table<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>="__value_"Q {}  _rawMappingInterval;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _rawPoints;
    unsigned long long  _rawUpdateCursor;
    struct vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<unsigned char * __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _semLabels;
    struct vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<unsigned short * __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>>="__value_"^ {}  _semVotes;
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { 
        struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> { 
                struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<unsigned long long>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<unsigned long long>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _voxelSet;
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
- (void)accumulateWithKeyframesInWorld:(id)arg1 voxelize:(bool)arg2;
- (void)append:(unsigned long long)arg1 points:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 semanticLabels:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 semanticVotes:(const /* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4 colors:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg5;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)cameraPositions;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)init;
- (id)initWithCount:(unsigned long long)arg1 points:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 semanticLabels:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 semanticVotes:(const /* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4 colors:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg5;
- (id)initWithDictionary:(id)arg1;
- (id)initWithKeyframes:(id)arg1 enableCameraPosition:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (void)mappingIntervalOfKeyframe:(id)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (void)processWithVoxelize:(bool)arg1 asPythonApproach:(bool)arg2 resample:(bool)arg3;
- (unsigned long long)rawCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rawPoints;
- (unsigned long long)rawUpdateCursor;
- (void)reset;
- (void)select:(unsigned long long)arg1 indices:(const unsigned long long*)arg2;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticLabels;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)semanticVotes;

@end
