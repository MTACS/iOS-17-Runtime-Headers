
@interface NWConcrete_nw_agent : NSObject <OS_nw_agent> {
    unsigned int  __pad_bits;
    id /* block */  activate_handler;
    id /* block */  add_members_handler;
    id /* block */  assert_handler;
    unsigned int  browse_agent;
    NSObject<OS_nw_dictionary> * channels;
    NSObject<OS_nw_dictionary> * clients;
    NSObject<OS_nw_context> * context;
    NSObject<OS_dispatch_data> * data;
    BOOL  description;
    unsigned int  do_not_coalesce_flow;
    BOOL  domain;
    id /* block */  error_handler;
    NSObject<OS_dispatch_source> * event_source;
    NSObject<OS_nw_fd_wrapper> * fd_wrapper;
    int  flow_endpoint_type;
    int  flow_protocol_level;
    unsigned char  flow_request_type_count;
    int  flow_request_types;
    unsigned int  group_agent;
    _Atomic unsigned int  last_client_id;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned int  logging_id;
    NSObject<OS_nw_nexus> * nexus;
    unsigned int  nexus_agent;
    int  options;
    NSObject<OS_dispatch_queue> * queue;
    unsigned int  registered;
    id /* block */  remove_members_handler;
    unsigned int  require_assert;
    unsigned int  resolve_agent;
    unsigned char  resolve_handler_count;
    struct nw_agent_resolve_handlers { 
        int resolve_from_type; 
        int resolve_to_type; 
        id /* block */ start_resolve_handler; 
        id /* block */ stop_resolve_handler; 
    }  resolve_handlers;
    unsigned long long  rx_slots;
    unsigned long long  slot_size;
    id /* block */  start_browse_handler;
    id /* block */  start_flow_handler;
    int  state;
    id /* block */  stop_browse_handler;
    id /* block */  stop_flow_handler;
    unsigned int  supports_listen;
    unsigned int  token_low_water;
    id /* block */  tokens_needed_handler;
    unsigned long long  tx_slots;
    BOOL  type;
    id /* block */  unassert_handler;
    unsigned char  uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
