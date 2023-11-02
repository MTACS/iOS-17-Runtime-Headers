
@interface DiagnosticsTransport : NSObject {
    NSXPCListener * listener;
    DiagnosticsServiceImpl * service;
    NSObject<OS_dispatch_queue> * transport_queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)setListeningPort:(const char *)arg1;
- (void)shutdown;

@end
