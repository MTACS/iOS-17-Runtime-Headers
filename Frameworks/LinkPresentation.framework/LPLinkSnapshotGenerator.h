
@interface LPLinkSnapshotGenerator : NSObject {
    bool  _active;
    NSXPCConnection * _connectionToService;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)snapshotForMetadata:(id)arg1 configurations:(id)arg2 completionHandler:(id /* block */)arg3;

@end
