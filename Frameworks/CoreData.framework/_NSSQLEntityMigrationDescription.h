
@interface _NSSQLEntityMigrationDescription : NSObject {
    NSMutableArray * _addedManyToManys;
    NSSQLEntity * _dstEntity;
    NSEntityMapping * _entityMapping;
    int  _migrationType;
    NSMutableArray * _pendingTransforms;
    NSMutableArray * _processedTransforms;
    NSMutableArray * _removedManyToManys;
    NSMutableDictionary * _sourceEntitiesByToOneWithNewEntityKey;
    NSMutableDictionary * _sqlValuesByColumnName;
    NSSQLEntity * _srcEntity;
    NSMutableArray * _transformedManyToManys;
    bool  _updateUsingCopy;
}

@property (nonatomic, readonly) NSSQLEntity *sourceEntity;

- (void)dealloc;
- (id)description;
- (id)sourceEntity;
- (void)validateCloudKitEntityMigration;

@end
