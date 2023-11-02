
@interface NWConcrete_nw_endpoint_proxy : NSObject <OS_nw_endpoint_proxy> {
    unsigned int  allow_non_privacy_proxy_children;
    NSObject<OS_nw_array> * child_endpoint_handlers;
    NSObject<OS_nw_error> * child_error;
    void * child_timer;
    NWConcrete_nw_endpoint_handler * connected_child;
    NSObject<OS_nw_array> * custom_proxy_configs;
    unsigned int  direct_prohibited;
    NSObject<OS_nw_array> * failed_child_endpoint_handlers;
    unsigned int  has_pac;
    unsigned int  has_privacy_proxy;
    unsigned int  is_custom_proxy;
    unsigned int  is_http_scheme;
    unsigned int  is_https_scheme;
    unsigned int  is_known_tracker;
    unsigned int  is_pac_connection;
    unsigned int  next_child_endpoint_index;
    unsigned int  overrode_to_https;
    unsigned int  pac_failed_missing_url;
    NSObject<OS_nw_array> * pac_resolvers;
    NSObject<OS_nw_array> * parsed_proxy_configs;
    NSObject<OS_nw_array> * path_proxy_configs;
    unsigned int  privacy_proxy_detected_unreachable_host;
    unsigned int  privacy_proxy_fail_closed;
    unsigned int  privacy_proxy_fail_closed_for_unreachable_hosts;
    unsigned int  proxy_flow_finished;
    unsigned int  synthesized_url;
    unsigned int  transport_finished;
    struct __CFURL { } * url;
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
