
@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService <PLAssetsdMigrationServiceProtocol> {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSObject<OS_dispatch_queue> * _dataMigratordQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)applyBackupExclusionToFileProviderDocumentStorage:(id*)arg1;
+ (id)photosFileProviderManagerDocumentStorageURL:(id*)arg1;

- (void).cxx_destruct;
- (void)_migrateWellknownLibraries;
- (void)cleanupModelForDataMigrationForRestoreType:(long long)arg1 reply:(id /* block */)arg2;
- (void)dataMigrationWillFinishWithReply:(id /* block */)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;

@end
