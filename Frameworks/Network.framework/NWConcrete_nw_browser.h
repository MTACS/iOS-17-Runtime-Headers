
@interface NWConcrete_nw_browser : NSObject <OS_nw_browser> {
    NSObject<OS_nw_path_evaluator> * browse_evaluator;
    NSObject<OS_nw_dictionary> * browse_flow_registrations;
    id /* block */  browse_results_changed_handler;
    NSObject<OS_xpc_object> * changes_map;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_path> * current_browse_path;
    char * description;
    NSObject<OS_nw_browse_descriptor> * descriptor;
    NSObject<OS_xpc_object> * dns_ref_map;
    NSObject<OS_nw_error> * error;
    bool  include_txt_record;
    NWConcrete_nw_browser * internally_retained_object;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned int  log_id;
    char * logging_description;
    struct _DNSServiceRef_t { } * main_dns_ref;
    NSObject<OS_nw_array> * new_results;
    NSObject<OS_nw_array> * old_results;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_array> * path_endpoint_array;
    bool  redact_logs;
    struct _DNSServiceRef_t { } * secondary_dns_ref;
    bool  sign_results;
    int  state;
    id /* block */  state_changed_handler;
    NSObject<OS_nw_dictionary> * txt_record_map;
    int  type;
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
