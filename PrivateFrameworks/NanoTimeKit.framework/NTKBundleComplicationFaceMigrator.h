
@interface NTKBundleComplicationFaceMigrator : NSObject {
    NTKBundleComplicationMigrationProvider * _migrationProvider;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_enumerateMigratableComplicationsOnFace:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_migrateFace:(id)arg1 slot:(id)arg2 complication:(id)arg3 completion:(id /* block */)arg4;
- (bool)_shouldAttemptToMigrateComplicationType:(unsigned long long)arg1;
- (id)init;
- (id)initWithMigrationProvider:(id)arg1;
- (void)migrateFace:(id)arg1 completion:(id /* block */)arg2;
- (void)migrateFaces:(id)arg1 completion:(id /* block */)arg2;

@end
