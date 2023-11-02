
@interface NWConcrete_nw_connection_group : NSObject <OS_nw_connection_group> {
    unsigned int  client_qos_class;
    NSObject<OS_dispatch_queue> * client_queue;
    unsigned int  connection_limit;
    NSObject<OS_nw_array> * connections;
    char * description;
    NSObject<OS_nw_group_descriptor> * group_descriptor;
    NSObject<OS_nw_path_evaluator> * group_evaluator;
    unsigned char  group_uuid;
    unsigned int  has_listener_started;
    unsigned int  has_user_cancelled;
    unsigned short  initial_port;
    NWConcrete_nw_connection_group * internally_retained_object;
    unsigned int  is_first_connection_ready;
    unsigned int  is_listener_ready;
    unsigned int  is_server;
    unsigned int  is_unicast_listener_ready;
    NSObject<OS_nw_error> * last_error;
    NSObject<OS_nw_listener> * listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned int  log_id;
    unsigned int  maximum_message_size;
    id /* block */  membership_change_handler;
    id /* block */  new_connection_handler;
    unsigned int  new_connection_limit;
    NSObject<OS_nw_parameters> * parameters;
    id /* block */  receive_handler;
    char * redacted_description;
    unsigned int  reject_oversized_messages;
    NSObject<OS_nw_array> * send_requests;
    unsigned int  started;
    int  state;
    id /* block */  state_changed_handler;
    NSObject<OS_nw_listener> * unicast_listener;
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
