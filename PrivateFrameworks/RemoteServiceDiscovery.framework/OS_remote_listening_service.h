
@interface OS_remote_listening_service : NSObject {
    id /* block */  accept_block;
    OS_remote_listening_service * next;
    NSObject<OS_dispatch_queue> * queue;
    const char * service_name;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
