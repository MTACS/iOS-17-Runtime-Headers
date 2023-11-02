
@interface EFSQLTableSchema : NSObject {
    NSHashTable * _associatedColumns;
    NSMutableArray * _checkConstraints;
    NSMutableArray * _columns;
    NSMutableDictionary * _columnsByName;
    NSHashTable * _foreignKeyReferences;
    NSMutableArray * _indexes;
    NSString * _name;
    NSArray * _primaryKeyColumns;
    unsigned long long  _primaryKeyConflictResolution;
    NSString * _rowIDColumnName;
    NSMutableArray * _uniquenessConstraints;
}

@property (nonatomic, readonly, copy) NSSet *associatedColumns;
@property (nonatomic, readonly, copy) NSArray *checkConstraints;
@property (nonatomic, readonly, copy) NSArray *columns;
@property (nonatomic, readonly, copy) NSSet *foreignKeyReferences;
@property (nonatomic, readonly, copy) NSArray *indexes;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *primaryKeyColumns;
@property (nonatomic, readonly) unsigned long long primaryKeyConflictResolution;
@property (nonatomic, readonly) EFSQLColumnSchema *rowIDColumn;
@property (nonatomic, readonly, copy) NSString *rowIDColumnName;
@property (nonatomic, readonly, copy) NSArray *uniqueColumns;

- (void).cxx_destruct;
- (id)_columnsForColumnNames:(id)arg1;
- (void)addAssociatedColumn:(id)arg1;
- (void)addCheckConstraintForExpression:(id)arg1;
- (void)addColumn:(id)arg1;
- (void)addForeignKeyReference:(id)arg1;
- (void)addIndex:(id)arg1;
- (void)addIndexForColumns:(id)arg1;
- (void)addUniquenessConstraintForColumns:(id)arg1 conflictResolution:(unsigned long long)arg2;
- (id)associatedColumns;
- (id)checkConstraints;
- (id)columnForName:(id)arg1;
- (id)columns;
- (id)definitionWithDatabaseName:(id)arg1;
- (id)definitionWithDatabaseName:(id)arg1 includeIndexes:(bool)arg2;
- (id)description;
- (id)foreignKeyReferences;
- (id)fullNameWithDatabaseName:(id)arg1;
- (id)indexDefinitionsWithDatabaseName:(id)arg1;
- (id)indexes;
- (id)initWithName:(id)arg1 columns:(id)arg2 primaryKeyColumns:(id)arg3;
- (id)initWithName:(id)arg1 columns:(id)arg2 primaryKeyColumns:(id)arg3 conflictResolution:(unsigned long long)arg4;
- (id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 columns:(id)arg3;
- (id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 rowIDAlias:(id)arg3 columns:(id)arg4;
- (id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 rowIDAlias:(id)arg3 columns:(id)arg4 primaryKeyColumns:(id)arg5 conflictResolution:(unsigned long long)arg6;
- (id)name;
- (id)primaryKeyColumns;
- (unsigned long long)primaryKeyConflictResolution;
- (void)removeColumn:(id)arg1;
- (id)rowIDColumn;
- (id)rowIDColumnName;
- (id)uniqueColumns;

@end
