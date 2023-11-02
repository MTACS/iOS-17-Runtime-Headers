
@interface HealthRecordsDaemon.ClinicalSharingSyncObserverServer : NSObject <HKClinicalSharingSyncObserverServerInterface, _HKXPCExportable> {
    void client;
    void lock;
    void syncStateCancellable;
    void syncStateSubject;
}

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)remote_startObservingSyncStatusWithCompletion:(id /* block */)arg1;

@end
