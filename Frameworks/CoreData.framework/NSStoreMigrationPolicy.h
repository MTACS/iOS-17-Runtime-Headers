
@interface NSStoreMigrationPolicy : NSObject {
    NSPersistentStoreCoordinator * _coordinator;
    NSString * _destinationConfiguration;
    NSDictionary * _destinationOptions;
    NSString * _destinationType;
    NSURL * _destinationURL;
    bool  _forcedMigration;
    NSMappingModel * _mappingModel;
    NSMigrationManager * _migrationManager;
    void * _reserved2;
    void * _reserved3;
    void * _reserved4;
    NSArray * _resourceBundles;
    NSString * _sourceConfiguration;
    NSDictionary * _sourceMetadata;
    NSManagedObjectModel * _sourceModel;
    NSDictionary * _sourceOptions;
    NSURL * _sourceURL;
    NSString * _stageLabel;
    long long  _workingWithSkewedSource;
}

+ (id)destinationURLForMigrationSourceURL:(id)arg1 createDocumentReplacementDirectory:(bool)arg2 error:(id*)arg3;
+ (int)migrationDebugLevel;
+ (id)migrationStoreOptionsFromStoreOptions:(id)arg1;
+ (void)setMigrationDebugLevel:(int)arg1;

- (id)createMigrationManagerForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)migrateStoreAtURL:(id)arg1 withManager:(id)arg2 metadata:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)sourceModelForStoreAtURL:(id)arg1 metadata:(id)arg2 error:(id*)arg3;

@end
