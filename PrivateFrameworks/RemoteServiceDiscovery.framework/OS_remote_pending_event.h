
@interface OS_remote_pending_event : NSObject {
    NSObject<OS_xpc_object> * event;
    OS_remote_pending_event * next;
    const char * service_name;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
