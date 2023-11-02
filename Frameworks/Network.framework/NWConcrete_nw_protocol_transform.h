
@interface NWConcrete_nw_protocol_transform : NSObject <OS_nw_protocol_transform> {
    unsigned int  clear_application;
    unsigned int  clear_internet;
    unsigned int  clear_transport;
    int  data_mode;
    NSObject<OS_xpc_object> * disabled_protocols;
    int  fallback_mode;
    unsigned int  fast_open_force_enable;
    NSObject<OS_xpc_object> * match_url_schemes;
    int  multipath_service;
    unsigned int  no_fallback;
    unsigned int  no_proxy;
    unsigned int  prohibit_direct;
    NSObject<OS_nw_endpoint> * replace_endpoint;
    unsigned int  set_multipath_service;
    unsigned int  set_traffic_class;
    unsigned int  tfo;
    unsigned int  tfo_no_cookie;
    unsigned int  traffic_class;
    NSObject<OS_nw_protocol_stack> * transform_stack;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
