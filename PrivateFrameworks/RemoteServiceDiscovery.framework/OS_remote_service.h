
@interface OS_remote_service : NSObject {
    unsigned int  connect_timeout;
    NSObject<OS_xpc_object> * connection;
    OS_remote_device * device;
    NSObject<OS_xpc_object> * keepalive;
    unsigned int  keepalive_time;
    unsigned int  keepcount;
    unsigned int  keepinterval;
    char * name;
    NSObject<OS_xpc_object> * properties;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
