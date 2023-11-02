
@interface OS_xpc_remote_connection : NSObject <OS_xpc_object> {
    id /* block */  _event_handler;
    NSObject<OS_dispatch_queue> * _internal_queue;
    OS_xpc_remote_listener * _listener;
    bool  _send_in_progress;
    int  _state;
    NSObject<OS_dispatch_queue> * _target_queue;
    int  _type;
    int  error;
    unsigned long long  first_msg_id;
    unsigned long long  local_service_version;
    OS_xpc_remote_message * msgq_stqh_first;
    OS_xpc_remote_message * msgq_stqh_last;
    unsigned long long  next_msg_id;
    OS_xpc_remote_outstanding_reply * outstanding_replies_stqh_first;
    OS_xpc_remote_outstanding_reply * outstanding_replies_stqh_last;
    OS_xpc_remote_pending_stream * pending_streams_stqh_first;
    OS_xpc_remote_pending_stream * pending_streams_stqh_last;
    NSObject<OS_nw_connection> * preexisting_connection;
    int  preexisting_socket;
    unsigned long long  protocol_feature_flags;
    unsigned char  protocol_version_number;
    OS_remote_service * remote_service;
    char * remote_service_name;
    unsigned long long  remote_service_version;
    OS_xpc_remote_channel * reply_channel;
    bool  reply_channel_helo_received;
    bool  requires_nw_listener_create_workaround;
    OS_xpc_remote_channel * root_channel;
    bool  root_channel_helo_received;
    NSObject<OS_nw_connection> * root_connection;
    NSObject<OS_nw_listener> * root_listener;
    bool  server_mode;
    OS_xpc_remote_stream * streams_stqh_first;
    OS_xpc_remote_stream * streams_stqh_last;
    unsigned int  traffic_class;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ event_handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internal_queue;
@property (nonatomic, retain) OS_xpc_remote_listener *listener;
@property (nonatomic) bool send_in_progress;
@property int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *target_queue;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)event_handler;
- (id)internal_queue;
- (id)listener;
- (bool)send_in_progress;
- (void)setEvent_handler:(id /* block */)arg1;
- (void)setInternal_queue:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setSend_in_progress:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setTarget_queue:(id)arg1;
- (void)setType:(int)arg1;
- (int)state;
- (id)target_queue;
- (int)type;

@end
