
@interface NWConcrete_nw_connection : NSObject <OS_nw_connection> {
    NWConcrete_nw_connection * _internal_reference;
    NSObject<OS_nw_array> * activities;
    int  alternate_path_state;
    id /* block */  alternate_path_state_handler;
    NSObject<OS_nw_array> * attempted_endpoints;
    unsigned int  attempted_probe;
    NSObject<OS_nw_read_request> * batched_receives;
    NSObject<OS_nw_write_request> * batched_sends;
    unsigned int  batching;
    id /* block */  better_path_available_handler;
    unsigned int  blocked_tracker;
    NSObject<OS_dispatch_group> * cancel_group;
    id /* block */  cancel_handler;
    unsigned int  cancelled;
    NSObject<OS_nw_candidate_manager> * candidate_manager;
    id /* block */  client_handler;
    unsigned int  client_qos_class;
    NSObject<OS_dispatch_queue> * client_queue;
    unsigned int  connected_fallback_generation;
    NSObject<OS_nw_context> * context;
    unsigned int  created_from_protocol;
    NSObject<OS_nw_interface> * current_interface;
    NSObject<OS_nw_array> * data_transfer_reports;
    NSObject<OS_nw_endpoint_handler> * dry_run_endpoint_handler;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned int  endpoint_handler_connected;
    NSObject<OS_nw_array> * errors;
    NSObject<OS_nw_establishment_report> * establishment_report;
    unsigned long long  estimated_bytes_download;
    unsigned long long  estimated_bytes_upload;
    NSObject<OS_nw_resolution_report> * failed_resolution_report;
    unsigned int  generic_stats_reported;
    unsigned char  group_uuid;
    unsigned int  has_called_update_block;
    unsigned int  hit_max_timestamps;
    NSObject<OS_nw_array> * ids_info;
    NSObject<OS_nw_read_request> * initial_read_requests;
    NSObject<OS_nw_write_request> * initial_write_requests;
    unsigned int  interface_time_delta;
    id /* block */  interface_use_update_block;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned char  logging_sequence_number;
    id /* block */  low_throughput_handler;
    struct metadata_changed_registration_list_s { 
        struct nw_connection_metadata_changed_registration {} *tqh_first; 
        struct nw_connection_metadata_changed_registration {} **tqh_last; 
    }  metadata_changed_registration_list;
    unsigned short  num_timestamps;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_endpoint_handler> * parent_endpoint_handler;
    unsigned char  parent_uuid;
    id /* block */  path_changed_handler;
    unsigned long long  pending_expected_progress_target;
    int  privacy_stance;
    NSObject<OS_nw_array> * probes;
    unsigned int  prohibit_set_queue;
    NSObject<OS_nw_endpoint_handler> * ready_dry_run_endpoint_handler;
    int  reported_viable;
    NSObject<OS_dispatch_queue> * request_queue;
    unsigned int  should_report_activities;
    unsigned int  should_report_generic_stats;
    unsigned int  should_report_probe_parent_stats;
    unsigned int  should_report_probe_stats;
    unsigned int  should_report_proxy_race_stats;
    unsigned int  should_report_stats;
    unsigned long long  start_time;
    NSObject<OS_dispatch_data> * start_trace;
    int  state;
    int  stats_reason;
    struct netcore_stats_tcp_report { union { struct { struct netcore_stats_tcp_statistics_report { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned long long x_1_3_5; unsigned long long x_1_3_6; unsigned long long x_1_3_7; unsigned long long x_1_3_8; unsigned long long x_1_3_9; unsigned long long x_1_3_10; unsigned long long x_1_3_11; unsigned long long x_1_3_12; unsigned long long x_1_3_13; unsigned long long x_1_3_14; unsigned long long x_1_3_15; unsigned long long x_1_3_16; unsigned int x_1_3_17; unsigned int x_1_3_18; unsigned int x_1_3_19; unsigned int x_1_3_20; unsigned int x_1_3_21; unsigned int x_1_3_22; unsigned int x_1_3_23; unsigned int x_1_3_24; unsigned int x_1_3_25; unsigned int x_1_3_26; unsigned int x_1_3_27; unsigned int x_1_3_28; unsigned int x_1_3_29; unsigned int x_1_3_30; unsigned int x_1_3_31; unsigned int x_1_3_32; unsigned int x_1_3_33; int x_1_3_34; int x_1_3_35; int x_1_3_36; unsigned int x_1_3_37 : 1; unsigned int x_1_3_38 : 1; unsigned int x_1_3_39 : 1; unsigned int x_1_3_40 : 1; unsigned int x_1_3_41 : 1; unsigned int x_1_3_42 : 1; } x_1_2_1; } x_1_1_1; } x1; } * stats_report;
    unsigned int  stats_reported;
    struct nw_connection_throughput_monitor_s { 
        unsigned long long current_bytes; 
        unsigned long long current_time; 
        unsigned long long last_bytes; 
        unsigned long long last_time; 
        void *timer; 
        unsigned int minimum; 
        unsigned char __pad[4]; 
    }  throughput_monitor;
    struct nw_connection_timestamp_s { unsigned long long x1; struct nw_endpoint_handler_event_s { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; union { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_3_1_1; struct { unsigned short x_2_2_1; } x_3_1_2; } x3; unsigned char x4[0]; } * timestamps;
    unsigned int  top_id;
    unsigned char  top_uuid;
    NSObject<OS_nw_endpoint_handler> * transport_endpoint_handler;
    unsigned int  unlisted_tracker;
    unsigned short  used_timestamps;
    id /* block */  viability_changed_handler;
    void * viability_changed_timer;
    NSObject<OS_dispatch_workloop> * workloop;
    unsigned int  xcode_issue_raised;
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
