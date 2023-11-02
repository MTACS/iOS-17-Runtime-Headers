
@interface NWConcrete_nw_context : NSObject <OS_nw_context> {
    unsigned int  _pad_bits;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  activate_lock;
    unsigned int  activated;
    long long  association_dormant_delay;
    struct nw_context_cache { struct _cache_entries_head { struct nw_association_cache_entry {} *x_1_1_1; struct nw_association_cache_entry {} **x_1_1_2; } x1; struct _idle_cache_entries_head { struct nw_association_cache_entry {} *x_2_1_1; struct nw_association_cache_entry {} **x_2_1_2; } x2; struct nw_hash_table {} *x3; struct nw_hash_table {} *x4; struct nw_hash_table {} *x5; void *x6; unsigned int x7; unsigned int x8; } * cache;
    long long  context_purge_delay;
    unsigned int  do_not_log_trackers;
    NSObject<OS_nw_resolver_config> * fallback_resolver_config;
    struct nw_context_globals { void *x1; struct nw_timer_list_head { struct nw_timer_entry {} *x_2_1_1; struct nw_timer_entry {} **x_2_1_2; } x2; struct nw_hash_table {} *x3; unsigned long long x4; struct os_unfair_lock_s { unsigned int x_5_1_1; } x5; struct os_unfair_lock_s { unsigned int x_6_1_1; } x6; struct os_unfair_lock_s { unsigned int x_7_1_1; } x7; struct nw_hash_table {} *x8; void *x9; void *x10; unsigned long long x11; id x12; id /* block */ x13; id x14; id x15; id x16; id x17; struct nw_mem_buffer_manager {} *x18; struct nw_mem_buffer_manager {} *x19; struct nw_mem_buffer_manager {} *x20; struct nw_mem_buffer_manager {} *x21; struct nw_mem_buffer_manager {} *x22; struct nw_mem_buffer_manager {} *x23; struct nw_mem_buffer_manager {} *x24; } * globals;
    unsigned int  has_active_instances;
    char * identifier;
    id /* block */  idle_block;
    NSObject<OS_dispatch_queue> * idle_block_queue;
    _Atomic unsigned long long  inline_tid;
    unsigned int  is_implicit;
    unsigned int  is_inline;
    unsigned int  is_inline_and_cancelled;
    unsigned int  is_isolated_context;
    unsigned int  isolate_protocol_cache;
    unsigned int  isolate_protocol_stack;
    NWConcrete_nw_context * isolated_context;
    unsigned int  max_cache_entries;
    unsigned int  max_idle_cache_entries;
    int  privacy_level;
    NSObject<OS_nw_array> * proxy_configs;
    unsigned int  required_encrypted_resolution;
    int  scheduling_mode;
    unsigned int  target_cache_entries;
    id /* block */  tracker_lookup_callback;
    NSObject<OS_dispatch_workloop> * workloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)redactedDescription;

@end
