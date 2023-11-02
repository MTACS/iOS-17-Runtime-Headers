
@interface NETrie : NSObject {
    bool  _partialSearchAllowed;
    BOOL  _partialSearchTerminator;
    bool  _reverse;
    struct ne_trie { 
        unsigned long long magic; 
        unsigned long long version; 
        struct ne_trie_node {} *nodes; 
        unsigned short *child_maps; 
        char *bytes; 
        void *memory; 
        unsigned short nodes_count; 
        unsigned short child_maps_count; 
        unsigned short bytes_count; 
        unsigned short nodes_free_next; 
        unsigned short child_maps_free_next; 
        unsigned short bytes_free_next; 
        unsigned short root; 
        unsigned long long trie_memory_size; 
        unsigned long long nodes_mem_size; 
        unsigned long long child_maps_mem_size; 
        unsigned long long bytes_mem_size; 
        bool is_mmap; 
        double timestamp; 
    }  _trie;
}

- (void)dealloc;
- (id)initWithDomains:(id)arg1 reverse:(bool)arg2 partialSearchAllowed:(bool)arg3 partialSearchTerminator:(BOOL)arg4;
- (bool)search:(const char *)arg1 length:(int)arg2;
- (bool)searchWithString:(id)arg1;

@end
