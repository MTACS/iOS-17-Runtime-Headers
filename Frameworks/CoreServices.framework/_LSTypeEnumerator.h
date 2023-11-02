
@interface _LSTypeEnumerator : _LSDBEnumerator {
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _typeIDs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext { id x1; }*)arg3;
- (bool)_prepareWithContext:(struct LSContext { id x1; }*)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
