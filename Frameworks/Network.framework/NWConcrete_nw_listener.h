
@interface NWConcrete_nw_listener : NSObject <OS_nw_listener, nw_listener_inbox_delegate> {
    NSObject<OS_nw_advertise_descriptor> * advertise_descriptor;
    void * advertise_new_connection_timer;
    NSObject<OS_nw_endpoint> * advertised_endpoint;
    id /* block */  advertised_endpoint_changed_handler;
    NSArray * advertisers;
    unsigned int  allow_new_connection_inline;
    NSArray * authorized_keys;
    unsigned short  awdl_use_count;
    unsigned int  cancelling;
    unsigned int  client_qos_class;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_context> * context;
    NSObject<OS_nw_parameters> * current_derived_parameters;
    unsigned int  defer_socket;
    char * device_id;
    NSObject<OS_nw_path_evaluator> * evaluator;
    id /* block */  event_handler;
    NSObject<OS_nw_array> * flow_registrations;
    BOOL  id_str;
    unsigned short  id_value;
    NSObject<OS_nw_array> * ids_info;
    NSObject<OS_xpc_object> * inactive_agent_dictionaries;
    NSObject<OS_xpc_object> * inactive_agents;
    NSObject<OS_nw_array> * inboxes;
    NWConcrete_nw_listener * internally_retained_object;
    NWConcrete_nw_connection * join_connection;
    NSObject<OS_nw_error> * last_error;
    char * launchd_key;
    NSObject<OS_nw_endpoint> * local_endpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    NSObject<OS_nw_group_descriptor> * multicast_descriptor;
    id /* block */  new_connection_group_handler;
    id /* block */  new_connection_handler;
    unsigned int  new_connection_limit;
    id /* block */  new_packet_handler;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_path> * path;
    unsigned short  port;
    unsigned int  reported_state;
    int  state;
    NSObject<OS_xpc_object> * triggered_agents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canHandleNewConnection:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)getIDSInformation;
- (char *)getPeerDeviceID;
- (void)handleInbound:(id)arg1 addProtocolInbox:(bool)arg2;
- (void)handleInboundPacket:(const char *)arg1 length:(unsigned short)arg2 from:(id)arg3 to:(id)arg4 interface:(id)arg5 socket:(id)arg6;
- (void)handleInboxCancelComplete:(id)arg1;
- (void)handleInboxFailed:(id)arg1 error:(id)arg2;
- (void)updateParametersForNewConnection:(id)arg1;

@end
