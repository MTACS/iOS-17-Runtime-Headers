
@interface MPSANEWeightFileManager : MPSGraphObject {
    unsigned long long  _currentDataSizeInBytes;
    unsigned long long  _currentFileSizeInBytes;
    unsigned long long  _currentPaddingSizeInBytes;
    NSString * _fileDirectoryPath;
    NSFileHandle * _fileHandle;
    NSString * _filePath;
    bool  _useInMemory;
    NSMutableArray * _weights;
    struct unordered_map<void *, unsigned long, std::hash<void *>, std::equal_to<void *>, std::allocator<std::pair<void *const, unsigned long>>> { 
        struct __hash_table<std::__hash_value_type<void *, unsigned long>, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>>, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>>, std::allocator<std::__hash_value_type<void *, unsigned long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _weightsDataIndex;
    NSMutableDictionary * _weightsInMemoryDictionary;
}

@property (nonatomic) unsigned long long currentDataSizeInBytes;
@property (nonatomic) unsigned long long currentFileSizeInBytes;
@property (nonatomic) unsigned long long currentPaddingSizeInBytes;
@property (nonatomic, readonly, retain) NSString *fileDirectoryPath;
@property (nonatomic, readonly, retain) NSFileHandle *fileHandle;
@property (nonatomic, readonly, retain) NSString *filePath;
@property (nonatomic) bool useInMemory;
@property (nonatomic, readonly, retain) NSMutableArray *weights;
@property (nonatomic, readonly, retain) NSMutableDictionary *weightsInMemoryDictionary;

+ (id)weightFileOpsAtPath:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)currentDataSizeInBytes;
- (unsigned long long)currentFileSizeInBytes;
- (unsigned long long)currentPaddingSizeInBytes;
- (id)fileDirectoryPath;
- (id)fileHandle;
- (id)filePath;
- (id)initWithFilePath:(id)arg1;
- (void)releaseWeightsData;
- (void)setCurrentDataSizeInBytes:(unsigned long long)arg1;
- (void)setCurrentFileSizeInBytes:(unsigned long long)arg1;
- (void)setCurrentPaddingSizeInBytes:(unsigned long long)arg1;
- (void)setUseInMemory:(bool)arg1;
- (bool)useInMemory;
- (id)weights;
- (id)weightsInMemoryDictionary;
- (long long)writeData:(id)arg1 value:(struct Value { struct ValueImpl {} *x1; })arg2 index:(unsigned long long*)arg3;

@end
