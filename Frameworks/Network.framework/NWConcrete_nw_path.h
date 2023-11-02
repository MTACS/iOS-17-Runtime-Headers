
@interface NWConcrete_nw_path : NSObject <NSCopying, OS_nw_path> {
    unsigned int  __pad_bits;
    NSObject<OS_nw_advertise_descriptor> * advertise_descriptor;
    NSObject<OS_nw_browse_descriptor> * browse_descriptor;
    unsigned int  changed_from_previous;
    unsigned int  checked_dns;
    unsigned char  client_id;
    unsigned short  custom_ethertype;
    unsigned char  custom_ip_protocol;
    NSObject<OS_nw_interface> * delegate;
    NSString * description;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  description_lock;
    NSObject<OS_nw_interface> * direct;
    NSObject<OS_nw_array> * discovered_endpoints;
    unsigned int  effective_mtu;
    unsigned int  effective_traffic_class;
    NSObject<OS_nw_endpoint> * endpoint;
    struct necp_client_result_estimated_throughput { 
        unsigned char up; 
        unsigned char down; 
    }  estimates;
    unsigned char  fallback_agent;
    NSObject<OS_xpc_object> * fallback_agent_domains;
    NSObject<OS_xpc_object> * fallback_agent_types;
    unsigned int  fallback_generation;
    NSObject<OS_nw_interface> * fallback_interface;
    unsigned int  fallback_is_forced;
    unsigned int  fallback_is_preferred;
    unsigned char  flow_registration_id;
    NSObject<OS_nw_array> * flows;
    NSObject<OS_nw_array> * gateways;
    NSObject<OS_nw_group_descriptor> * group_descriptor;
    NSObject<OS_nw_array> * group_members;
    unsigned int  has_application_level_firewall;
    unsigned int  has_ipv4;
    unsigned int  has_ipv6;
    unsigned int  has_kext_filter;
    unsigned int  has_nat64;
    unsigned int  has_parental_controls;
    unsigned int  has_pf_rules;
    unsigned int  interface_time_delta;
    unsigned int  is_direct;
    unsigned int  is_interpose;
    unsigned int  is_listener;
    unsigned int  is_local;
    unsigned int  link_quality_abort;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned int  merged_proxy_configs;
    struct ipv6_prefix { 
        struct in6_addr { 
            union { 
                unsigned char __u6_addr8[16]; 
                unsigned short __u6_addr16[8]; 
                unsigned int __u6_addr32[4]; 
            } __u6_addr; 
        } ipv6_prefix; 
        unsigned int prefix_len; 
    }  nat64_prefixes;
    unsigned int  necp_satisfied;
    NSObject<OS_xpc_object> * network_agent_dictionary;
    unsigned int  no_fallback_timer;
    NSObject<OS_nw_array> * override_extra_interface_options;
    NSObject<OS_nw_interface> * override_interface;
    unsigned int  override_interface_scoped;
    unsigned int  override_is_constrained;
    unsigned int  override_is_expensive;
    unsigned int  override_is_roaming;
    NSObject<OS_nw_endpoint> * override_local_endpoint;
    NSObject<OS_nw_array> * override_resolver_configs;
    unsigned int  override_uses_cellular;
    unsigned int  override_uses_wifi;
    unsigned int  override_viable;
    NSObject<OS_nw_parameters> * parameters;
    struct nw_path_necp_result { 
        unsigned int routing_result; 
        union { 
            unsigned int tunnel_interface_index; 
            unsigned int scoped_interface_index; 
            unsigned int flow_divert_control_unit; 
            unsigned int filter_control_unit; 
            unsigned int pass_flags; 
            unsigned int drop_flags; 
        } routing_result_parameter; 
        unsigned int filter_control_unit; 
        unsigned int service_action; 
        unsigned char service_uuid[16]; 
        struct necp_client_result_netagent {} *netagents; 
        struct necp_client_interface_option {} *interface_options; 
        unsigned int service_flags; 
        unsigned int service_data; 
        unsigned int routed_interface_index; 
        unsigned int direct_interface_index; 
        unsigned int direct_interface_generation; 
        unsigned int delegate_interface_index; 
        unsigned int delegate_interface_generation; 
        unsigned int policy_id; 
        unsigned int num_interface_options; 
        unsigned int num_netagents; 
        unsigned int flow_divert_aggregate_unit; 
        unsigned int padding; 
    }  policy_result;
    unsigned int  probe_connectivity;
    NSObject<OS_nw_array> * proxy_configs;
    NSObject<OS_xpc_object> * proxy_settings;
    int  reason;
    char * reason_description;
    unsigned char  recommended_mss;
    NSObject<OS_nw_array> * resolved_endpoints;
    NSObject<OS_nw_array> * resolver_configs;
    unsigned int  specific_listener;
    int  status;
    unsigned int  traffic_mgmt_background;
    unsigned int  weak_fallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)redactedDescription;

@end
