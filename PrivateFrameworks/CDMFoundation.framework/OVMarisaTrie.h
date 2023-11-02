
@interface OVMarisaTrie : NSObject {
    struct Keyset { 
        struct scoped_array<marisa::scoped_array<char>> { 
            void *array_; 
        } base_blocks_; 
        unsigned long long base_blocks_size_; 
        unsigned long long base_blocks_capacity_; 
        struct scoped_array<marisa::scoped_array<char>> { 
            void *array_; 
        } extra_blocks_; 
        unsigned long long extra_blocks_size_; 
        unsigned long long extra_blocks_capacity_; 
        struct scoped_array<marisa::scoped_array<marisa::Key>> { 
            void *array_; 
        } key_blocks_; 
        unsigned long long key_blocks_size_; 
        unsigned long long key_blocks_capacity_; 
        char *ptr_; 
        unsigned long long avail_; 
        unsigned long long size_; 
        unsigned long long total_length_; 
    }  keyset;
    struct Trie { 
        struct scoped_ptr<marisa::grimoire::trie::LoudsTrie> { 
            struct LoudsTrie {} *ptr_; 
        } trie_; 
    }  trie;
}

@property (nonatomic, readonly) long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addKey:(id)arg1 payload:(id)arg2;
- (void)addRow:(id)arg1;
- (long long)count;
- (void)enumerateAllEntriesWithBlock:(id /* block */)arg1;
- (void)enumerateAllRowsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)lookupKey:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)lookupPrefix:(id)arg1 resultBlock:(id /* block */)arg2;
- (bool)lookupRow:(id)arg1 outIdx:(long long*)arg2;
- (id)reverseLookup:(int)arg1;
- (bool)reverseLookupKey:(int)arg1 dataLength:(unsigned long long)arg2 resultBlock:(id /* block */)arg3;
- (id)reverseLookupRow:(int)arg1;
- (void)writeToURL:(id)arg1;

@end
