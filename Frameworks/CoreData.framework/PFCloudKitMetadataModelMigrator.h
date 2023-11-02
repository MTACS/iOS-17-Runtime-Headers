
@interface PFCloudKitMetadataModelMigrator : NSObject {
    PFCloudKitMetadataMigrationContext * _context;
    long long  _databaseScope;
    NSManagedObjectContext * _metadataContext;
    PFCloudKitMetricsClient * _metricsClient;
    NSSQLCore * _store;
}

- (void)dealloc;
- (id)initWithStore:(id)arg1 metadataContext:(id)arg2 databaseScope:(long long)arg3 metricsClient:(id)arg4;

@end
