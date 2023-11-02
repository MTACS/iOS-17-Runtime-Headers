
@interface NWConcrete_nw_socks5_server : NSObject <OS_nw_socks5_server> {
    unsigned int  ss_assertion;
    NSObject<OS_dispatch_source> * ss_assertion_timer;
    unsigned int  ss_assertion_timer_running;
    unsigned long long  ss_assertion_toggle_mach_time;
    unsigned int  ss_busy_count;
    NSObject<OS_dispatch_queue> * ss_client_queue;
    id /* block */  ss_error;
    unsigned long long  ss_id;
    NWConcrete_nw_socks5_server * ss_internally_retained_object;
    NSObject<OS_nw_listener> * ss_listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  ss_lock;
    NSObject<OS_nw_parameters> * ss_parameters;
    NSObject<OS_dispatch_queue> * ss_queue;
    unsigned int  ss_shoes;
    NSObject<OS_nw_array> * ss_socks5_connections;
    NSObject<OS_nw_dictionary> * ss_socks5_udp_associate_connections;
    id /* block */  ss_state_handler;
    struct nw_shoes_statistics { 
        unsigned int ss_max_simultaneous_connections; 
        unsigned int ss_total_connections; 
    }  ss_stats;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
