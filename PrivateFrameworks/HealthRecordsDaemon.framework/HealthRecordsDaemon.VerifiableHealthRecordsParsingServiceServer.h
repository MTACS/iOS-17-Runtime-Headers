
@interface HealthRecordsDaemon.VerifiableHealthRecordsParsingServiceServer : NSObject <HKVerifiableHealthRecordsParsingServiceInterface, _HKXPCExportable> {
    void cancellables;
    void client;
}

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)remote_parseDataSource:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
