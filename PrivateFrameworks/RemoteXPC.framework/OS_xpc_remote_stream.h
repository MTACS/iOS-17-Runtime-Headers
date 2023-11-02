
@interface OS_xpc_remote_stream : NSObject {
    OS_xpc_remote_channel * channel;
    OS_xpc_remote_stream * link_stqe_next;
}

- (void).cxx_destruct;

@end
