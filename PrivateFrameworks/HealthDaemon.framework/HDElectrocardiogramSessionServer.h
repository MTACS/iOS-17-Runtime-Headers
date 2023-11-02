
@interface HDElectrocardiogramSessionServer : HDStandardTaskServer <HKElectrocardiogramSessionServerInterface> {
    NSObject<OS_dispatch_queue> * _queue;
    HKElectrocardiogramSessionConfiguration * _sessionConfiguration;
    long long  _sessionState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_abortWithCompletion:(id /* block */)arg1;
- (void)remote_startWithCompletion:(id /* block */)arg1;

@end
