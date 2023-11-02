
@interface NWConcrete_nw_path_flow_registration : NSObject <OS_nw_path_flow_registration> {
    const struct sk_nexusadv { } * advisory;
    struct ifnet_stats_per_flow { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; } * flow_interface_stats;
    struct necp_all_stats { union { struct necp_tcp_stats { struct necp_stats_hdr { unsigned int x_1_3_1; unsigned int x_1_3_2; unsigned long long x_1_3_3; } x_1_2_1; struct necp_stat_counts { unsigned long long x_2_3_1; unsigned long long x_2_3_2; unsigned long long x_2_3_3; unsigned long long x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; unsigned int x_2_3_8; unsigned int x_2_3_9; unsigned int x_2_3_10; unsigned int x_2_3_11; unsigned int x_2_3_12; unsigned int x_2_3_13; } x_1_2_2; struct necp_basic_metadata { unsigned int x_3_3_1; unsigned int x_3_3_2; } x_1_2_3; struct necp_extra_tcp_metadata { struct necp_connection_probe_status { unsigned int x_1_4_1 : 1; unsigned int x_1_4_2 : 1; unsigned int x_1_4_3 : 1; unsigned int x_1_4_4 : 1; } x_4_3_1; unsigned int x_4_3_2; unsigned int x_4_3_3; unsigned int x_4_3_4; unsigned int x_4_3_5; unsigned int x_4_3_6; unsigned int x_4_3_7; unsigned int x_4_3_8; unsigned int x_4_3_9; unsigned int x_4_3_10; unsigned int x_4_3_11; } x_1_2_4; } x_1_1_1; struct necp_udp_stats { struct necp_stats_hdr { unsigned int x_1_3_1; unsigned int x_1_3_2; unsigned long long x_1_3_3; } x_2_2_1; struct necp_stat_counts { unsigned long long x_2_3_1; unsigned long long x_2_3_2; unsigned long long x_2_3_3; unsigned long long x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; unsigned int x_2_3_8; unsigned int x_2_3_9; unsigned int x_2_3_10; unsigned int x_2_3_11; unsigned int x_2_3_12; unsigned int x_2_3_13; } x_2_2_2; struct necp_basic_metadata { unsigned int x_3_3_1; unsigned int x_3_3_2; } x_2_2_3; } x_1_1_2; } x1; } * flow_stats_area;
    struct nw_protocol_identifier { BOOL x1[32]; int x2; int x3; } * internet_stats_protocol;
    void * internet_stats_region;
    unsigned char  nexus_agent;
    NSObject<OS_nw_array> * override_extra_interface_options;
    unsigned int  override_is_constrained;
    unsigned int  override_is_expensive;
    unsigned int  override_reason;
    unsigned int  override_traffic_class;
    unsigned int  override_uses_cellular;
    unsigned int  override_uses_wifi;
    NWConcrete_nw_path_evaluator * parent_evaluator;
    unsigned int  partial_checksum_offload;
    unsigned int  registered;
    unsigned char  registration_id;
    unsigned int  specific_use_only;
    NSObject<OS_nw_array> * subflow_registrations;
    struct nw_protocol_identifier { BOOL x1[32]; int x2; int x3; } * transport_stats_protocol;
    void * transport_stats_region;
    struct nw_protocol_identifier { BOOL x1[32]; int x2; int x3; } * upper_transport_stats_protocol;
    void * upper_transport_stats_region;
    unsigned int  uses_nexus;
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
