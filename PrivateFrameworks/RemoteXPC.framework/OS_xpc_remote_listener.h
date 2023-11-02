
@interface OS_xpc_remote_listener : NSObject {
    id /* block */  accept_handler;
    id /* block */  cancel_handler;
    bool  canceled;
    NSObject<OS_dispatch_queue> * queue;
    int  type;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
