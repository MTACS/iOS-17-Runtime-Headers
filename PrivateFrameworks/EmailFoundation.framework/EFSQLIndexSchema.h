
@interface EFSQLIndexSchema : NSObject {
    NSArray * _indexedColumns;
    NSString * _name;
    NSString * _tableName;
    bool  _unique;
    <EFSQLValueExpressable> * _where;
}

@property (nonatomic, readonly, copy) NSArray *indexedColumns;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *tableName;
@property (nonatomic, readonly) bool unique;
@property (nonatomic, readonly) <EFSQLValueExpressable> *where;

- (void).cxx_destruct;
- (id)definitionWithDatabaseName:(id)arg1;
- (id)indexedColumns;
- (id)initWithName:(id)arg1 tableName:(id)arg2 indexedColumns:(id)arg3 where:(id)arg4 unique:(bool)arg5;
- (id)initWithTableName:(id)arg1 columnNames:(id)arg2;
- (id)initWithTableName:(id)arg1 columnNames:(id)arg2 where:(id)arg3 unique:(bool)arg4;
- (id)initWithTableName:(id)arg1 indexedColumns:(id)arg2;
- (id)initWithTableName:(id)arg1 indexedColumns:(id)arg2 where:(id)arg3 unique:(bool)arg4;
- (id)name;
- (id)tableName;
- (bool)unique;
- (id)where;

@end
