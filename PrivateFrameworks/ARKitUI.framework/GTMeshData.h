
@interface GTMeshData : NSObject {
    GTSubmeshData * _currentSubmesh;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _normals;
    NSURL * _objUrl;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>>="__value_"^ {}  _positions;
    NSMutableDictionary * _submeshes;
    struct unordered_map<GTVertexData, unsigned int, std::hash<GTVertexData>, std::equal_to<GTVertexData>, std::allocator<std::pair<const GTVertexData, unsigned int>>> { 
        struct __hash_table<std::__hash_value_type<GTVertexData, unsigned int>, std::__unordered_map_hasher<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::hash<GTVertexData>, std::equal_to<GTVertexData>>, std::__unordered_map_equal<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::equal_to<GTVertexData>, std::hash<GTVertexData>>, std::allocator<std::__hash_value_type<GTVertexData, unsigned int>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<GTVertexData, unsigned int>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::hash<GTVertexData>, std::equal_to<GTVertexData>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<GTVertexData, std::__hash_value_type<GTVertexData, unsigned int>, std::equal_to<GTVertexData>, std::hash<GTVertexData>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _vertexMap;
    struct vector<GTVertexData, std::allocator<GTVertexData>> { 
        struct GTVertexData {} *__begin_; 
        struct GTVertexData {} *__end_; 
        struct __compressed_pair<GTVertexData *, std::allocator<GTVertexData>> { 
            struct GTVertexData {} *__value_; 
        } __end_cap_; 
    }  _vertices;
}

@property (nonatomic, readonly) NSDictionary *submeshes;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) struct GTVertexData { }*vertexData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)findIndexOrPushVertex:(const struct GTVertexData { }*)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)parseMaterialFile:(id)arg1 error:(id*)arg2;
- (bool)parseOBJFileWith:(id*)arg1;
- (bool)readLine:(id)arg1 error:(id*)arg2;
- (id)submeshes;
- (unsigned long long)vertexCount;
- (struct GTVertexData { }*)vertexData;

@end
