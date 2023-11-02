
@interface NWConcrete_nw_endpoint_resolver : NSObject <OS_nw_endpoint_resolver> {
    NSObject<OS_nw_array> * child_endpoint_handlers;
    void * child_timer;
    NWConcrete_nw_endpoint_handler * connected_child;
    void * desperate_ivan_timer;
    NSObject<OS_nw_array> * failed_child_endpoint_handlers;
    unsigned int  failed_to_start_next_child;
    int  last_resolver_status;
    NSObject<OS_nw_endpoint> * modified_endpoint;
    unsigned int  next_child_endpoint_index;
    NSObject<OS_nw_array> * path_resolved_endpoints;
    NSObject<OS_nw_dictionary> * resolve_flow_registrations;
    NSObject<OS_nw_resolver> * resolver;
    NSObject<OS_nw_array> * resolver_resolved_endpoints;
    unsigned int  started_desperate_ivan;
    unsigned int  transport_finished;
    void * trigger_agent_timer;
    unsigned int  waiting_for_desperate_ivan;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyWithHandler:(id)arg1 toChildren:(id /* block */)arg2;
- (void)cancelWithHandler:(id)arg1 forced:(bool)arg2;
- (void)dealloc;
- (id)init;
- (void)startWithHandler:(id)arg1;
- (void)updatePathWithHandler:(id)arg1;

@end
