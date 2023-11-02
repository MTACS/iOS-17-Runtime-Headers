
@interface TSUUUIDSet : NSObject <NSCopying, NSMutableCopying> {
    unsigned int  _index;
    struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::hash<TSUUUID>, std::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { 
        struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::hash<TSUUUID>, std::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::allocator<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *>>> { 
                struct __hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<TSUUUID>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<TSU::UUIDData<TSP::UUIDData>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _uuidSet;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned int index;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })anyUuid;
- (bool)containsUuid:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)expandedSetWithUuid:(const void*)arg1;
- (id)expandedSetWithUuids:(const void*)arg1;
- (id)expandedSetWithUuidsFromVector:(const void*)arg1;
- (void)foreachUuid:(id /* block */)arg1;
- (unsigned long long)hash;
- (unsigned int)index;
- (id)initWithUUID:(const void*)arg1;
- (id)initWithUUIDSet:(id)arg1;
- (id)initWithUUIDVector:(const void*)arg1;
- (bool)intersectsSet:(id)arg1;
- (bool)isAllInvalid;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)p_addUUID:(const void*)arg1;
- (void)p_addUUIDs:(const void*)arg1;
- (void)p_addUUIDsFromVector:(const void*)arg1;
- (bool)p_removeUUID:(const void*)arg1;
- (void)p_removeUUIDs:(const void*)arg1;
- (void)p_removeUUIDsFromVector:(const void*)arg1;
- (id)reducedSetMinusUuid:(const void*)arg1;
- (id)reducedSetMinusUuids:(const void*)arg1;
- (id)reducedSetMinusUuidsFromVector:(const void*)arg1;
- (void)setIndex:(unsigned int)arg1;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *x1; void *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *x_3_1_1; } x3; })uuidsAsVector;

@end
