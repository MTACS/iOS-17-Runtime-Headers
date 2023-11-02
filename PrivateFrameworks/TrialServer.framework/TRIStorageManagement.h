
@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>

- (bool)_clearContainerStorage;
- (bool)_clearStorage;
- (void)_notifyNamespaceUpdated;
- (bool)_readDeviceIdWithSchemaVersion:(unsigned int)arg1 intoData:(id*)arg2;
- (bool)_readSchemaVersion:(unsigned int*)arg1;
- (bool)_runNamespaceDatabaseBlock:(id /* block */)arg1;
- (bool)_writeDeviceIdWithData:(id)arg1 schemaVersion:(unsigned int)arg2;
- (bool)_writeSchemaVersion:(unsigned int)arg1;
- (bool)prepareTrialStorage;
- (bool)requestTrialStorageResetOnNextLaunch;

@end
