
@interface HKHealthRecordsAccountInfoStore : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)determineMedicalRecordsAccountInfoStatusWithCompletion:(id /* block */)arg1;
- (id)exportedInterface;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;

@end
