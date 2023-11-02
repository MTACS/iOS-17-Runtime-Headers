
@interface NWConcrete_nw_socks5_connection : NSObject <OS_nw_socks5_connection> {
    unsigned long long  sc_busy_counter;
    unsigned long long  sc_busy_start_time_nanos;
    id /* block */  sc_cancel;
    NSObject<OS_nw_error> * sc_error;
    unsigned int  sc_has_read_from_in_connection;
    unsigned long long  sc_id;
    NWConcrete_nw_connection * sc_in_connection;
    unsigned long long  sc_in_connection_bytes_read;
    unsigned long long  sc_in_connection_bytes_written;
    unsigned int  sc_in_connection_failed_or_sent_write_close;
    unsigned int  sc_in_connection_send_connected_endpoint;
    unsigned int  sc_in_connection_send_resolved_endpoint;
    NWConcrete_nw_connection * sc_in_udp_associated_tcp_connection;
    NWConcrete_nw_socks5_connection * sc_internally_retained_object;
    unsigned int  sc_is_udp_associate;
    union { 
        char *byte_pointer; 
        struct in_addr {} *ipv4_addr; 
        struct in6_addr {} *ipv6_addr; 
        char *domain; 
    }  sc_out_address;
    unsigned char  sc_out_address_domain_length;
    unsigned char  sc_out_address_type;
    NWConcrete_nw_connection * sc_out_connection;
    unsigned long long  sc_out_connection_bytes_read;
    unsigned long long  sc_out_connection_bytes_written;
    unsigned int  sc_out_connection_failed_or_sent_write_close;
    unsigned int  sc_out_disable_proxy;
    NSObject<OS_nw_establishment_report> * sc_out_establishment_report;
    unsigned int  sc_out_udp;
    NSObject<OS_nw_socks5_server> * sc_parent;
    NSObject<OS_nw_path_evaluator> * sc_prefer_wifi_path_evaluator;
    int  sc_prefer_wifi_previous_path_status;
    unsigned int  sc_processed_udp_associate_request;
    NSObject<OS_dispatch_queue> * sc_queue;
    unsigned int  sc_sent_reply;
    unsigned short  sc_shoes_request_length_hbo;
    unsigned int  sc_should_prefer_wifi;
    unsigned long long  sc_start_time_nanos;
    unsigned char  sc_state;
    unsigned long long  sc_total_busy_time_nanos;
    unsigned int  sc_udp_associate_verification_count;
    void * sc_udp_associate_verification_source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
