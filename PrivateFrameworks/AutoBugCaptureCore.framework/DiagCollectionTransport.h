
@interface DiagCollectionTransport : NSObject {
    NSXPCListener * listener;
    DiagCollectionServiceImpl * service;
    NSObject<OS_dispatch_queue> * transport_queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setListeningPort:(const char *)arg1;
- (void)shutdown;

@end
