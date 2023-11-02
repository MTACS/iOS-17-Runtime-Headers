
@interface MTLToolsPerfCounterMailbox : NSObject {
    struct vector<std::pair<NSData *, unsigned long>, std::allocator<std::pair<NSData *, unsigned long>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<NSData *, unsigned long> *, std::allocator<std::pair<NSData *, unsigned long>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _data;
    struct __wrap_iter<std::pair<NSData *, unsigned long> *> { 
        void *__i_; 
    }  _iterator;
    void * _requester;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)extractDataAndNumSamples:(unsigned long long*)arg1 forRequester:(void*)arg2 isLast:(bool*)arg3;
- (void)insertData:(id)arg1 andNumSamples:(unsigned long long)arg2 forRequester:(void*)arg3;

@end
