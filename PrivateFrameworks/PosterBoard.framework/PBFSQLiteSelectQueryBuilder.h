
@interface PBFSQLiteSelectQueryBuilder : NSObject <PBFSQLiteQueryBuilder> {
    NSMutableArray * _columnsToSelect;
    NSMutableArray * _orderByColumns;
    bool  _selectAllColumns;
    NSString * _tableName;
    PBFSQLiteWhereClauseBuilder * _whereClauseBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)appendOrderBy:(id)arg1 comparison:(long long)arg2;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTableName:(id)arg1;
- (id)selectAllColumns;
- (id)selectColumnNamed:(id)arg1;
- (id)selectColumnNamed:(id)arg1 as:(id)arg2;
- (id)setWhereClause:(id)arg1;
- (id)tableName;

@end
