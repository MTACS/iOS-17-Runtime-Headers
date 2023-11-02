
@interface NWConcrete_nw_proxy_config : NSObject <OS_nw_proxy_config> {
    NSObject<OS_nw_agent> * agent;
    unsigned int  apply_tfo;
    unsigned short  config_epoch;
    NSObject<OS_nw_authentication_credential> * credential;
    unsigned int  disable_tfo_cookie;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned int  exclude_simple_hostnames;
    NSObject<OS_xpc_object> * excluded_domains;
    unsigned char  fallback_agent_uuid;
    NWConcrete_nw_proxy_config * fallback_config;
    unsigned int  force_multipath;
    unsigned int  force_tfo;
    unsigned int  generation;
    unsigned char  identifier;
    unsigned int  ignore_privacy_stance;
    unsigned int  is_fallback;
    unsigned int  is_privacy_proxy;
    unsigned int  match_address_family;
    NSObject<OS_xpc_object> * match_domains;
    int  mode;
    int  multipath_service;
    unsigned int  override_opaque_https;
    NSObject<OS_xpc_object> * pac_script;
    unsigned int  privacy_proxy_fail_open;
    unsigned int  prohibit_direct;
    unsigned int  prohibit_unsatisfied_paths;
    NSObject<OS_xpc_object> * proxied_transports;
    NSObject<OS_xpc_object> * remove_protocols;
    unsigned int  require_domain_match;
    NSObject<OS_xpc_object> * required_protocols;
    NSObject<OS_nw_array> * resolved_endpoints;
    NSObject<OS_nw_dictionary> * stacks;
    unsigned int  supports_bonjour;
    unsigned int  supports_udp_associate;
    int  type;
    unsigned int  use_fast_fallback;
    unsigned int  use_over_privacy_proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
