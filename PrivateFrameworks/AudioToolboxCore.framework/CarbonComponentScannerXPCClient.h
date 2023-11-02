
@interface CarbonComponentScannerXPCClient : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)handleConnectionError:(bool)arg1;
- (id)init;
- (struct AudioComponentVector { void *x1; void *x2; struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { void *x_3_1_1; } x3; bool x4; })initialScan:(id)arg1;
- (void)rescan:(id)arg1 added:(void*)arg2 removed:(void*)arg3;
- (id)xpcConnection;

@end
