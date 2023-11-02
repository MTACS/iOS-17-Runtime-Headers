
@interface CRCHNetworkCursor : NSObject {
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _edgeIndexes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addEdgeIndex:(unsigned long long)arg1;
- (unsigned long long)edgeIndexAtPosition:(unsigned long long)arg1;
- (unsigned long long)edgeIndexCount;

@end
