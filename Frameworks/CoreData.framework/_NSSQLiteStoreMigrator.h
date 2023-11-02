
@interface _NSSQLiteStoreMigrator : NSObject {
    NSSQLiteAdapter * _adapter;
    NSMutableDictionary * _addedEntityMigrations;
    NSMutableDictionary * _attributeExtensionsToUpdate;
    NSMutableArray * _cloudKitUpdateStatements;
    NSSQLiteConnection * _connection;
    NSMutableDictionary * _copiedEntityMigrations;
    NSMutableArray * _defaultValueStatements;
    NSMutableArray * _derivationsToDrop;
    NSMutableArray * _derivationsToRun;
    NSString * _destinationConfigurationForCloudKitValidation;
    NSSQLModel * _dstModel;
    NSArray * _existingTableNames;
    bool  _forcedMigration;
    bool  _hasCloudKitTables;
    bool  _hasDeferredLightweightMigration;
    bool  _hasPKTableChanges;
    NSMutableDictionary * _historyMigrationPropertyDataForEntityCache;
    NSMutableArray * _indexesToCreate;
    NSMutableArray * _indexesToDrop;
    NSMappingModel * _mappingModel;
    NSMutableArray * _pkTableUpdateStatements;
    NSMutableDictionary * _reindexedEntities;
    NSMutableDictionary * _reindexedPropertiesByEntity;
    NSMutableDictionary * _removedEntityMigrations;
    NSMutableDictionary * _sourceToDestinationEntityMap;
    NSSQLModel * _srcModel;
    NSString * _stageLabel;
    NSSQLCore * _store;
    NSArray * _tableGenerationSQL;
    NSMutableDictionary * _tableMigrationDescriptionsByEntity;
    NSMutableDictionary * _transformedEntityMigrations;
}

@property (nonatomic, retain) NSString *destinationConfigurationForCloudKitValidation;

+ (bool)_annotatesMigrationMetadata;
+ (void)_setAnnotatesMigrationMetadata:(bool)arg1;

- (void)dealloc;
- (id)destinationConfigurationForCloudKitValidation;
- (void)setDestinationConfigurationForCloudKitValidation:(id)arg1;

@end
