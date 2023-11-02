
@interface NWConcrete_nw_endpoint_handler : NSObject <OS_nw_endpoint_handler> {
    NSObject<OS_nw_association> * association;
    NSObject<OS_nw_object> * callback_context;
    NSObject<OS_nw_context> * context;
    NSObject<OS_nw_path> * current_path;
    unsigned int  dry_run;
    NSObject<OS_nw_endpoint> * endpoint;
    struct nw_endpoint_handler_event_s { 
        unsigned short domain; 
        unsigned short event; 
    }  event;
    void * fallback_timer;
    unsigned int  has_better_path;
    unsigned int  has_finished_transport;
    unsigned char  id_chain;
    BOOL  id_str;
    NSObject<OS_xpc_object> * inactive_agent_dictionaries;
    NSObject<OS_xpc_object> * inactive_agent_uuids;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  last_child_id;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned int  logging_disabled;
    id /* block */  migration_callback;
    int  mode;
    NSObject<NWConcrete_nw_endpoint_mode_handler> * mode_handler;
    NSObject<OS_nw_path_evaluator> * override_evaluator;
    NSObject<OS_nw_parameters> * parameters;
    NWConcrete_nw_endpoint_handler * parent_handler;
    int  privacy_stance;
    int (* report_callback;
    unsigned int  reuse_association;
    unsigned long long  start_time;
    int  state;
    unsigned int  top_id;
    NSObject<OS_xpc_object> * triggered_agent_uuids;
    unsigned int  triggering_voluntary_agents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end
