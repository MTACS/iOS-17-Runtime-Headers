
@protocol AVTStoreBackendMigrator <NSObject>

@required

- (bool)migrateContentFromSource:(id <AVTStoreBackendMigratableSource>)arg1 toDestination:(id <AVTStoreBackend>)arg2 error:(id*)arg3;

@end
