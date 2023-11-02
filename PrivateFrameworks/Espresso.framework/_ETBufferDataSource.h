
@interface _ETBufferDataSource : NSObject <ETDataProvider> {
    unsigned long long  _batchSize;
    struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { 
        struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _blobShapes;
    struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 1>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> { 
        struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _dataStorage;
    struct vector<std::string, std::allocator<std::string>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::string *, std::allocator<std::string>> { 
            void *__value_; 
        } __end_cap_; 
    }  _nonBatchBlobNames;
    unsigned long long  _number_of_data_points;
}

@property unsigned long long batchSize;
@property /* Warning: unhandled struct encoding: '{unordered_map<std::string' */ struct  blobShapes; /* unknown property attribute:  std::hash<std::string>>>=f}}} */
@property /* Warning: unhandled struct encoding: '{unordered_map<std::string' */ struct  dataStorage; /* unknown property attribute:  std::hash<std::string>>>=f}}} */
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property /* Warning: unhandled struct encoding: '{vector<std::string' */ struct  nonBatchBlobNames; /* unknown property attribute:  std::allocator<std::string>>=^v}} */
@property unsigned long long number_of_data_points;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })blobShapes;
- (float*)dataAtIndex:(unsigned long long)arg1 key:(const void*)arg2;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 1>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })dataStorage;
- (id)initWithBlobShapes:(const void*)arg1 numberOfDataPoints:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 error:(id*)arg4;
- (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })nonBatchBlobNames;
- (unsigned long long)numberOfDataPoints;
- (unsigned long long)number_of_data_points;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setBlobShapes:(struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })arg1;
- (void)setDataStorage:(struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 1>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })arg1;
- (void)setNonBatchBlobNames:(struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })arg1;
- (void)setNumber_of_data_points:(unsigned long long)arg1;

@end
