
@interface NWConcrete_nw_resolver : NSObject <OS_nw_resolver> {
    NSObject<OS_nw_array> * alternative_endpoints;
    id /* block */  alternative_handler;
    NSObject<OS_nw_array> * alternative_protocols;
    NSObject<OS_nw_browser> * awdl_trigger_browser;
    NSObject<OS_dispatch_group> * cancel_group;
    id /* block */  cancel_handler;
    NSObject<OS_dispatch_queue> * client_queue;
    unsigned int  config_allows_failover;
    NSObject<OS_nw_context> * context;
    void * delayed_reporting_timer;
    int  dns_error;
    struct _DNSServiceRef_t { } * dns_service;
    unsigned int  dns_service_id;
    struct _DNSServiceRef_t { } * dns_service_secondary_pointer;
    NSObject<OS_nw_endpoint> * endpoint;
    NSObject<OS_nw_array> * endpoint_array;
    unsigned short  extended_dns_error_code;
    char * extended_dns_error_extra_text;
    unsigned short  flags;
    unsigned int  forced_protocol;
    NSObject<OS_dnssd_getaddrinfo> * gai;
    unsigned int  has_completed_preferred_weighting;
    unsigned int  has_ipv4;
    unsigned int  has_ipv6;
    unsigned int  has_oblivious_config;
    NWConcrete_nw_resolver * internally_retained_object;
    unsigned int  ipv4_used_resolver_cache;
    unsigned int  ipv6_used_resolver_cache;
    unsigned int  is_custom_resolver;
    unsigned int  is_standalone;
    unsigned int  local_only;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    BOOL  log_str;
    NSObject<OS_nw_array> * non_preferred_endpoint_array;
    void * non_preferred_timer;
    unsigned int  oblivious_config_fell_back;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_path> * path;
    NSObject<OS_nw_interface> * path_required_interface;
    void * query_timer;
    int  result_protocol;
    int  result_provider;
    unsigned char  selected_resolver_config;
    NSObject<OS_nw_array> * services;
    int  status;
    unsigned int  suppress_logging;
    unsigned int  svcb_dohuri;
    unsigned int  svcb_received;
    unsigned int  svcb_requested;
    unsigned int  unique_id;
    id /* block */  update_block;
    unsigned int  used_local_cache;
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
