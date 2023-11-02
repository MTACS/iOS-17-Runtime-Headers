
@interface _NSSQLTableMigrationDescription : NSObject {
    NSMutableSet * _addedColumnSet;
    NSMutableArray * _addedEntityMigrations;
    NSMutableArray * _addedManyToManys;
    NSMutableSet * _collapsedEntitySet;
    NSMutableSet * _columnsUpgradedToMandatory;
    NSMutableArray * _copiedEntityMigrations;
    NSMutableSet * _delayedDropColumnSet;
    NSMutableSet * _droppedEntitySet;
    NSNumber * _hasComplexSchemaTransformations;
    NSMutableDictionary * _migrationByEntity;
    int  _migrationType;
    NSMutableSet * _raisedColumnSet;
    NSMutableArray * _removedEntityMigrations;
    NSMutableArray * _removedManyToManys;
    NSMutableSet * _renamedColumnSet;
    NSMutableSet * _renamedMTMSet;
    NSMutableSet * _renamedTableSet;
    NSSQLEntity * _rootEntity;
    NSSQLEntity * _sourceRootEntity;
    NSMutableDictionary * _tempTableNames;
    NSMutableArray * _transformedEntityMigrations;
    NSMutableArray * _transformedManyToManys;
}

@property (nonatomic, readonly) NSSQLEntity *rootEntity;

- (void)dealloc;
- (id)description;
- (id)rootEntity;

@end
