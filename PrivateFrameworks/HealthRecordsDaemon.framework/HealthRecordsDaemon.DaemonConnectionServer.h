
@interface HealthRecordsDaemon.DaemonConnectionServer : NSObject <HKHealthRecordsDaemonConnectionServerInterface, _HKXPCExportable> {
    void client;
    void serviceMap;
}

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)remote_fetchEndpointForServiceIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
