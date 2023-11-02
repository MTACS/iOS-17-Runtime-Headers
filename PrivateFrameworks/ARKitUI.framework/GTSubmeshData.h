
@interface GTSubmeshData : NSObject {
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _indexVector;
}

@property (nonatomic, readonly) unsigned long long indexCount;
@property (nonatomic, readonly) unsigned int*indexData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addIndex:(unsigned int)arg1;
- (unsigned long long)indexCount;
- (unsigned int*)indexData;

@end
