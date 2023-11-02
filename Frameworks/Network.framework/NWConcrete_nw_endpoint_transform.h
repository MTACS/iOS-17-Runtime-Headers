
@interface NWConcrete_nw_endpoint_transform : NSObject <OS_nw_endpoint_transform> {
    NSObject<OS_nw_array> * blocked_protocols;
    NSObject<OS_nw_array> * child_endpoint_handlers;
    void * child_timer;
    NWConcrete_nw_endpoint_handler * connected_child;
    unsigned int  connected_protocol;
    unsigned int  connected_protocol_index;
    NSObject<OS_nw_array> * failed_child_endpoint_handlers;
    NSObject<OS_xpc_object> * fallback_modes;
    unsigned int  first_protocol;
    unsigned long long  last_timeout_ms;
    unsigned int  next_child_endpoint_index;
    NSObject<OS_nw_endpoint> * primary_endpoint;
    bool  quic_alternative_present;
    bool  quic_application_deferred;
    bool  quic_deferred;
    bool  quic_denied;
    bool  quic_speculative_attempt;
    bool  quic_updated_alternative;
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
