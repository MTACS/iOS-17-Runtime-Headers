
@interface WorkoutCore.QueryClient : NSObject <_HKXPCExportable> {
    void clientQueue;
    void pluginProxyProvider;
    void serverQueue;
}

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;

@end
