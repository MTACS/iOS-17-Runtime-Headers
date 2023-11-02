
@interface HealthAppHealthDaemonSupport.PinnedContentStore : NSObject <_HKXPCExportable> {
    void domain;
    void healthStore;
    void proxyProvider;
}

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;

@end
