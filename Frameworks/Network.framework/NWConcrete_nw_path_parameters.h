
@interface NWConcrete_nw_path_parameters : NSObject <OS_nw_path_parameters> {
    char * account_id;
    char * attributed_bundle;
    char * attribution_context;
    NSObject<OS_nw_context> * context;
    struct nw_parameters_extended_objects { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; } * extended_objects;
    NSObject<OS_nw_protocol_options> * internet_options;
    struct nw_parameters_joinable_path_value { 
        unsigned char attribution; 
        int multipath_service; 
        unsigned char fallback_mode; 
        unsigned int discretionary : 1; 
        unsigned int no_proxy : 1; 
        unsigned int no_transform : 1; 
        unsigned int use_awdl : 1; 
        unsigned int use_p2p : 1; 
        unsigned int no_fallback : 1; 
        unsigned int no_cellular_fallback : 1; 
        unsigned int no_wake_from_sleep : 1; 
        unsigned int prefer_no_proxy : 1; 
        unsigned int no_proxy_path_selection : 1; 
        unsigned int privacy_proxy_fail_closed : 1; 
        unsigned int privacy_proxy_fail_closed_for_unreachable_hosts : 1; 
        unsigned int prohibit_privacy_proxy : 1; 
        unsigned int fallback_applied : 1; 
        unsigned int proxy_applied : 1; 
        unsigned int system_proxy : 1; 
        unsigned int known_tracker : 1; 
        unsigned int third_party_web_content : 1; 
        unsigned int approved_app_domain : 1; 
        unsigned int enhanced_privacy : 1; 
        unsigned int web_search_content : 1; 
        unsigned int __pad_bits : 3; 
    }  joinable_path_value;
    NSObject<OS_nw_endpoint> * local_address;
    struct nw_parameters_path_value { 
        unsigned int traffic_class; 
        int required_interface_type; 
        int required_interface_subtype; 
        int companion_preference; 
        int companion_link_upgrade_preference; 
        int companion_proxy_required_interface_type; 
        unsigned int prohibit_expensive_paths : 1; 
        unsigned int prohibit_constrained_paths : 1; 
        unsigned int prohibit_roaming : 1; 
        unsigned int allow_socket_access : 1; 
        unsigned int only_primary_requires_type : 1; 
        unsigned int __pad_bits : 3; 
    }  path_value;
    struct nw_parameters_process_path_value { 
        unsigned char proc_uuid[16]; 
        unsigned char e_proc_uuid[16]; 
        unsigned long long delegated_upid; 
        int pid; 
        unsigned int uid; 
    }  process_path_value;
    NSObject<OS_nw_interface> * required_interface;
    NSObject<OS_nw_protocol_options> * transport_options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
