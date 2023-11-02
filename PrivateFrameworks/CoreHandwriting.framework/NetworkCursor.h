
@interface NetworkCursor : NSObject {
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _nodeIndexes;
    unsigned long long  _stateType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (bool)isCompletePattern;

@end
