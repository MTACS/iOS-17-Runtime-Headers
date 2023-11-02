
@interface KVItemBuilder : NSObject {
    struct FlatBufferBuilder { 
        struct vector_downward { 
            struct Allocator {} *allocator_; 
            bool own_allocator_; 
            unsigned long long initial_size_; 
            unsigned long long buffer_minalign_; 
            unsigned long long reserved_; 
            char *buf_; 
            char *cur_; 
            char *scratch_; 
        } buf_; 
        unsigned int num_field_loc; 
        unsigned short max_voffset_; 
        bool nested; 
        bool finished; 
        unsigned long long minalign_; 
        bool force_defaults_; 
        bool dedup_vtables_; 
        void *string_pool; 
    }  _fbb;
    struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _fields;
    NSString * _itemId;
    long long  _itemType;
}

+ (id)buildFieldWithType:(long long)arg1 label:(id)arg2 value:(id)arg3 error:(id*)arg4;
+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_addFieldWithType:(long long)arg1 localeType:(long long)arg2 label:(id)arg3 value:(id)arg4 error:(id*)arg5;
- (void)_reset;
- (id)addFieldWithType:(long long)arg1 label:(id)arg2 value:(id)arg3 error:(id*)arg4;
- (id)addFieldWithType:(long long)arg1 localeType:(long long)arg2 label:(id)arg3 value:(id)arg4 error:(id*)arg5;
- (id)addFieldWithType:(long long)arg1 localeType:(long long)arg2 value:(id)arg3 error:(id*)arg4;
- (id)addFieldWithType:(long long)arg1 value:(id)arg2 error:(id*)arg3;
- (id)buildBufferWithError:(id*)arg1;
- (id)buildItemWithError:(id*)arg1;
- (id)init;
- (id)setItemType:(long long)arg1 itemId:(id)arg2 error:(id*)arg3;

@end
