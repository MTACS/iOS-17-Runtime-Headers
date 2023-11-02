
@interface HKDatabaseValidation : NSObject <HKDatabaseValidationClientInterface, _HKXPCExportable> {
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    id /* block */  _integrityErrorHandler;
    NSMutableDictionary * _integrityErrorHandlerDict;
    HKTaskServerProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _validationErrorHandler;
    NSMutableDictionary * _validationErrorHandlerDict;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)clientRemote_processIntegrityErrorString:(id)arg1 errorHandlerIdentifier:(id)arg2;
- (void)clientRemote_processValidationError:(id)arg1 errorHandlerIdentifier:(id)arg2;
- (void)clientRemote_synchronizeWithCompletion:(id /* block */)arg1 success:(bool)arg2 error:(id)arg3;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (void)performIntegrityCheckOnDatabase:(long long)arg1 identifier:(id)arg2 errorHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)remoteInterface;
- (void)validateEntitiesWithIdentifier:(id)arg1 errorHandler:(id /* block */)arg2 completion:(id /* block */)arg3;

@end
