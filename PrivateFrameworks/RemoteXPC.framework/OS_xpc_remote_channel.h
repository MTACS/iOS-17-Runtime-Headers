
@interface OS_xpc_remote_channel : NSObject {
    NSObject<OS_nw_connection> * conn;
    int  error;
    id /* block */  event_handler;
    id /* block */  msg_handler;
    NSObject<OS_dispatch_io> * parent_io;
    NSObject<OS_dispatch_queue> * queue;
    unsigned int  state;
    int  stream_direction;
    NSObject<OS_dispatch_io> * stream_io;
    bool  tx_complete;
    unsigned char  wire_version;
}

- (void).cxx_destruct;

@end
