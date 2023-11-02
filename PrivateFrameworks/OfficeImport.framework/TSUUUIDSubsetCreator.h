
@interface TSUUUIDSubsetCreator : NSObject {
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _baseUuidVector;
    NSMutableDictionary * _createdSubsetsByRange;
    TSUUUIDSetStore * _uuidSetStore;
}

@property (readonly) const void*baseUuidVector;
@property (readonly) TSUUUIDSetStore *uuidSetStore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)baseUuidVector;
- (id)initWithUuidSetStore:(id)arg1 baseUuidVector:(const void*)arg2;
- (id)uuidSetStore;
- (unsigned int)uuidSetStoreIndexForIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
