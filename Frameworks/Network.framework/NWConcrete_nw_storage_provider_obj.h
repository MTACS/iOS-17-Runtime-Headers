
@interface NWConcrete_nw_storage_provider_obj : NSObject <OS_nw_storage_provider_obj> {
    struct nw_storage_provider { 
        int (*lookup)(); 
        int (*store)(); 
        int (*remove)(); 
        int (*key)(); 
        int (*canvas_create)(); 
        int (*canvas_deserialize)(); 
        int (*canvas_serialize)(); 
        int (*canvas_dirty)(); 
        int (*canvas_can_evict)(); 
        int (*canvas_memory_size)(); 
        int (*canvas_compact)(); 
        int (*needs_canvas_destroy)(); 
        int (*canvas_destroy)(); 
        int (*canvas_remove_past)(); 
    }  callbacks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;

@end
