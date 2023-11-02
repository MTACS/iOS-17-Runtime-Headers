
@interface NWConcrete_nw_path_flow : NSObject <OS_nw_path_flow> {
    unsigned int  assigned;
    NSObject<OS_nw_protocol_options> * assigned_protocol;
    unsigned int  ctl_command_code;
    unsigned int  ctl_command_tcp_seq_num;
    unsigned int  ctl_command_valid;
    unsigned int  ctl_command_value;
    unsigned int  defunct;
    NSObject<OS_nw_array> * discovered_endpoints;
    unsigned int  ecn_enabled;
    NSObject<OS_nw_error> * error;
    unsigned int  fast_open_blocked;
    unsigned char  flow_id;
    unsigned int  has_ipv4;
    unsigned int  has_ipv6;
    unsigned int  has_nat64;
    NSObject<OS_nw_interface> * interface;
    struct necp_client_result_interface { 
        unsigned int generation; 
        unsigned int index; 
    }  interface_struct;
    unsigned int  is_custom_ip;
    unsigned int  is_direct;
    unsigned int  is_local;
    NSObject<OS_nw_endpoint> * local_endpoint;
    NSObject<OS_xpc_object> * nexus_agent;
    struct necp_client_result_netagent { 
        unsigned int generation; 
        unsigned char netagent_uuid[16]; 
    }  nexus_agent_struct;
    unsigned int  nexus_flow_index;
    unsigned char  nexus_instance;
    void * nexus_key;
    unsigned int  nexus_key_length;
    unsigned int  nexus_port;
    NSObject<OS_nw_endpoint> * remote_endpoint;
    NSObject<OS_nw_array> * resolved_endpoints;
    unsigned char  tfo_cookie;
    unsigned char  tfo_cookie_len;
    unsigned int  viable;
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
