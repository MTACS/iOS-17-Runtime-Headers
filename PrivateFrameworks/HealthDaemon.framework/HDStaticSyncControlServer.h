
@interface HDStaticSyncControlServer : HDStandardTaskServer <HKStaticSyncControlServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)remote_runStaticSyncExportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 batchSize:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)remote_runStaticSyncImportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 completion:(id /* block */)arg4;

@end
