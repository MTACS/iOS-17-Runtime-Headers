
@interface NWConcrete_nw_parameters : NSObject <OS_nw_parameters> {
    NSObject<OS_nw_array> * custom_proxy_configs;
    NWConcrete_nw_protocol_stack * default_stack;
    char * e_bundle_id;
    NSObject<OS_nw_proxy_config> * effective_proxy_config;
    NSObject<OS_xpc_object> * extra_parent_ids;
    NSObject<OS_dispatch_data> * initial_data_payload;
    NSObject<OS_nw_endpoint> * main_document_url_endpoint;
    NSObject<OS_xpc_object> * metadata;
    NWConcrete_nw_path_parameters * path_parameters;
    char * proxy_bundle_id;
    NSObject<OS_nw_array> * proxy_options;
    NSObject<OS_nw_proxy_config> * raced_proxy_config;
    NSObject<OS_xpc_object> * tls_session_id;
    NSObject<OS_nw_array> * transforms;
    NSObject<OS_nw_endpoint> * url_endpoint;
    struct { 
        unsigned char parent_id[16]; 
        unsigned char listener_uuid[16]; 
        struct { 
            unsigned int val[8]; 
        } e_audit_token; 
        unsigned long long expected_workload; 
        unsigned long long channel_teardown_delay; 
        unsigned int sleep_keepalive_interval; 
        unsigned char data_mode; 
        unsigned char ecn_mode; 
        unsigned char service_class; 
        unsigned char expired_dns_behavior; 
        unsigned int dry_run : 1; 
        unsigned int no_opaque_proxy : 1; 
        unsigned int fast_open_enabled : 1; 
        unsigned int use_long_outstanding_queries : 1; 
        unsigned int ignore_resolver_stats : 1; 
        unsigned int resolve_ptr : 1; 
        unsigned int indefinite : 1; 
        unsigned int indefinite_set : 1; 
        unsigned int reuse_local_address : 1; 
        unsigned int receive_any_interface : 1; 
        unsigned int is_probe : 1; 
        unsigned int custom_protocols_only : 1; 
        unsigned int bundle_id_to_uuid_mapping_failed : 1; 
        unsigned int pid_to_uuid_mapping_failed : 1; 
        unsigned int local_only : 1; 
        unsigned int server : 1; 
        unsigned int is_fallback : 1; 
        unsigned int no_fullstack_fallback : 1; 
        unsigned int desperate_ivan : 1; 
        unsigned int allow_unusable_addresses : 1; 
        unsigned int https_proxy_is_opaque : 1; 
        unsigned int https_proxy_over_tls : 1; 
        unsigned int attach_protocol_listener : 1; 
        unsigned int prohibit_joining_protocols : 1; 
        unsigned int allow_joining_connected_fd : 1; 
        unsigned int multipath_force_enable : 1; 
        unsigned int allow_duplicate_state_updates : 1; 
        unsigned int always_open_listener_socket : 1; 
        unsigned int never_open_listener_socket : 1; 
        unsigned int disable_listener_datapath : 1; 
        unsigned int requires_dnssec_validation : 1; 
        unsigned int parent_is_known_tracker : 1; 
        unsigned int prohibit_encrypted_dns : 1; 
        unsigned int block_trackers : 1; 
        unsigned int fail_if_svcb_received : 1; 
        unsigned int include_ble : 1; 
        unsigned int screen_off : 1; 
        unsigned int internet_fallback : 1; 
        unsigned int minimize_logging : 1; 
        unsigned int skip_stack_trace_capture : 1; 
        unsigned int stricter_path_scoping : 1; 
        unsigned int tls_should_trust_invalid_certificates : 1; 
        unsigned int skip_probe_sampling : 1; 
        unsigned int __pad_bits : 21; 
    }  value;
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
