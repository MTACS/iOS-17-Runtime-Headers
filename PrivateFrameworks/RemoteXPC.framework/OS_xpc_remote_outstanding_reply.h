
@interface OS_xpc_remote_outstanding_reply : NSObject {
    OS_xpc_remote_outstanding_reply * link_stqe_next;
    unsigned long long  msg_id;
    id /* block */  reply_handler;
    NSObject<OS_dispatch_queue> * reply_queue;
}

- (void).cxx_destruct;

@end
