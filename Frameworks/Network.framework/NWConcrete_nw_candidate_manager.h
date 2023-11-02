
@interface NWConcrete_nw_candidate_manager : NSObject <OS_nw_candidate_manager> {
    id /* block */  add_eligible_details;
    NSObject<OS_nw_endpoint> * awdl_endpoint;
    NSObject<OS_nw_resolver> * awdl_service_resolver;
    NSObject<OS_nw_array> * candidates;
    NWConcrete_nw_connection * connection;
    unsigned int  currently_using_awdl;
    void * delay_timer;
    NSMutableDictionary * hostname_resolvers;
    NSObject<OS_nw_path_flow_registration> * ids_flow_registration;
    NSObject<OS_nw_ids_info> * ids_info;
    NSObject<OS_nw_path_evaluator> * ids_path_evaluator;
    NSObject<OS_nw_listener> * listener;
    unsigned long long  log_id;
    id /* block */  modify_ids_parameters;
    id /* block */  new_connection_handler;
    NSObject<OS_nw_endpoint> * original_remote_endpoint;
    NSObject<OS_nw_parameters> * parameters;
    id /* block */  remove_eligible_details;
    NSObject<OS_nw_endpoint> * service;
    NSObject<OS_nw_resolver> * service_resolver;
    unsigned int  should_connect;
    unsigned int  started_ids_injecting;
    unsigned int  started_injecting;
    int  state;
    id /* block */  state_handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)init:(id)arg1;

@end
