
@interface NWConcrete_nw_endpoint_fallback : NSObject <OS_nw_endpoint_fallback> {
    unsigned int  fallback_based_on_interface_type;
    unsigned long long  fallback_cap_interval;
    NWConcrete_nw_endpoint_handler * fallback_child;
    unsigned int  fallback_child_in_progress;
    unsigned int  fallback_child_indefinite_failed;
    unsigned int  fallback_disposition;
    NSObject<OS_nw_interface> * fallback_interface;
    unsigned int  fallback_is_cellular;
    unsigned int  fallback_is_forced;
    unsigned int  fallback_is_preferred;
    unsigned long long  fallback_timeout_nanos;
    void * fallback_timer;
    unsigned long long  fallback_timer_start;
    unsigned long long  fallback_usage_cap;
    unsigned int  no_fallback_timer;
    void * post_transport_timer;
    NWConcrete_nw_endpoint_handler * primary_child;
    unsigned int  primary_child_in_progress;
    unsigned int  primary_child_indefinite_failed;
    NSObject<OS_nw_interface> * primary_interface;
    unsigned int  received_primary_cancelled_error;
    int  result;
    unsigned int  started_fallback;
    void * usage_cap_timer;
    unsigned int  weak_fallback;
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
