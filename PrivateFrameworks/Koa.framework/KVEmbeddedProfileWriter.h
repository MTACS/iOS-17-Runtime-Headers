
@interface KVEmbeddedProfileWriter : NSObject <KVProfileWriter> {
    KVDatasetInfo * _datasetInfo;
    struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _datasets;
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
    struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _items;
    KVProfileInfo * _profileInfo;
    NSOutputStream * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addItem:(id)arg1 error:(id*)arg2;
- (bool)finishDataset:(id*)arg1;
- (bool)finishProfile:(id*)arg1;
- (id)initWithOutputStream:(id)arg1;
- (bool)startDataset:(id)arg1 error:(id*)arg2;
- (bool)startProfile:(id)arg1 error:(id*)arg2;

@end
