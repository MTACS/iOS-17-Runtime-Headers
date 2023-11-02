
@interface OS_xpc_remote_message : NSObject {
    id /* block */  barrier;
    NSObject<OS_dispatch_data> * body;
    OS_xpc_remote_message * link_stqe_next;
    unsigned long long  msg_id;
    NSObject<OS_xpc_object> * ool;
    int  ool_length;
    bool  wants_reply;
}

- (void).cxx_destruct;

@end
