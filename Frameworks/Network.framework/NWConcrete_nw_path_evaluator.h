
@interface NWConcrete_nw_path_evaluator : NSObject <OS_nw_path_evaluator> {
    NSObject<OS_nw_advertise_descriptor> * advertise_descriptor;
    NSObject<OS_nw_browse_descriptor> * browse_descriptor;
    id /* block */  cancel_handler;
    unsigned int  cancelled;
    unsigned char  client_id;
    NSObject<OS_dispatch_queue> * client_queue;
    unsigned short  custom_ethertype;
    unsigned char  custom_ip_protocol;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned int  flow_count;
    NSObject<OS_nw_group_descriptor> * group_descriptor;
    unsigned int  is_custom_ether;
    unsigned int  is_default;
    unsigned int  is_interpose;
    unsigned int  is_listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned int  logging;
    NSObject<OS_nw_parameters> * parameters;
    NWConcrete_nw_path * path;
    unsigned int  started;
    id /* block */  update_block;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)redactedDescription;

@end
