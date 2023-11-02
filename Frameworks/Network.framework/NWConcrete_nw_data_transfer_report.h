
@interface NWConcrete_nw_data_transfer_report : NSObject <OS_nw_data_transfer_report> {
    unsigned int  __pad_bits;
    unsigned int  allocated_path_count;
    unsigned int  collection_in_progress;
    NWConcrete_nw_connection * connection;
    NSObject<OS_nw_interface> * currently_collecting_interface;
    unsigned long long  duration_milliseconds;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned int  path_count;
    struct nw_data_transfer_path_report { 
        struct nw_data_transfer_path_report_value { 
            unsigned long long received_ip_packet_count; 
            unsigned long long received_ip_ect1_packet_count; 
            unsigned long long received_ip_ect0_packet_count; 
            unsigned long long received_ip_ce_packet_count; 
            unsigned long long sent_ip_packet_count; 
            unsigned long long received_transport_byte_count; 
            unsigned long long received_transport_duplicate_byte_count; 
            unsigned long long received_transport_out_of_order_byte_count; 
            unsigned long long sent_transport_byte_count; 
            unsigned long long sent_transport_retransmitted_byte_count; 
            unsigned long long sent_transport_ecn_capable_packet_count; 
            unsigned long long sent_transport_ecn_capable_acked_packet_count; 
            unsigned long long sent_transport_ecn_capable_marked_packet_count; 
            unsigned long long sent_transport_ecn_capable_lost_packet_count; 
            unsigned long long transport_smoothed_rtt_milliseconds; 
            unsigned long long transport_minimum_rtt_milliseconds; 
            unsigned long long transport_current_rtt_milliseconds; 
            unsigned long long transport_rtt_variance; 
            unsigned long long transport_congestion_window; 
            unsigned long long transport_slow_start_threshold; 
            unsigned long long received_application_byte_count; 
            unsigned long long sent_application_byte_count; 
            unsigned char __pad[0]; 
        } total; 
        struct nw_data_transfer_path_report_value { 
            unsigned long long received_ip_packet_count; 
            unsigned long long received_ip_ect1_packet_count; 
            unsigned long long received_ip_ect0_packet_count; 
            unsigned long long received_ip_ce_packet_count; 
            unsigned long long sent_ip_packet_count; 
            unsigned long long received_transport_byte_count; 
            unsigned long long received_transport_duplicate_byte_count; 
            unsigned long long received_transport_out_of_order_byte_count; 
            unsigned long long sent_transport_byte_count; 
            unsigned long long sent_transport_retransmitted_byte_count; 
            unsigned long long sent_transport_ecn_capable_packet_count; 
            unsigned long long sent_transport_ecn_capable_acked_packet_count; 
            unsigned long long sent_transport_ecn_capable_marked_packet_count; 
            unsigned long long sent_transport_ecn_capable_lost_packet_count; 
            unsigned long long transport_smoothed_rtt_milliseconds; 
            unsigned long long transport_minimum_rtt_milliseconds; 
            unsigned long long transport_current_rtt_milliseconds; 
            unsigned long long transport_rtt_variance; 
            unsigned long long transport_congestion_window; 
            unsigned long long transport_slow_start_threshold; 
            unsigned long long received_application_byte_count; 
            unsigned long long sent_application_byte_count; 
            unsigned char __pad[0]; 
        } incremental; 
        NSObject<OS_nw_interface> *interface; 
        unsigned char __pad[0]; 
    }  primary_path;
    struct nw_data_transfer_path_report { struct nw_data_transfer_path_report_value { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned long long x_1_1_9; unsigned long long x_1_1_10; unsigned long long x_1_1_11; unsigned long long x_1_1_12; unsigned long long x_1_1_13; unsigned long long x_1_1_14; unsigned long long x_1_1_15; unsigned long long x_1_1_16; unsigned long long x_1_1_17; unsigned long long x_1_1_18; unsigned long long x_1_1_19; unsigned long long x_1_1_20; unsigned long long x_1_1_21; unsigned long long x_1_1_22; unsigned char x_1_1_23[0]; } x1; struct nw_data_transfer_path_report_value { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; unsigned long long x_2_1_6; unsigned long long x_2_1_7; unsigned long long x_2_1_8; unsigned long long x_2_1_9; unsigned long long x_2_1_10; unsigned long long x_2_1_11; unsigned long long x_2_1_12; unsigned long long x_2_1_13; unsigned long long x_2_1_14; unsigned long long x_2_1_15; unsigned long long x_2_1_16; unsigned long long x_2_1_17; unsigned long long x_2_1_18; unsigned long long x_2_1_19; unsigned long long x_2_1_20; unsigned long long x_2_1_21; unsigned long long x_2_1_22; unsigned char x_2_1_23[0]; } x2; } * secondary_paths;
    unsigned long long  start_time;
    int  state;
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
