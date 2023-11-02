
@interface PBFSQLiteUpdateQueryBuilder : NSObject <PBFSQLiteQueryBuilder> {
    NSString * _tableName;
    NSMutableArray * _updateColumns;
    PBFSQLiteWhereClauseBuilder * _whereClauseBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)appendUpdateColumnName:(id)arg1 toValue:(id)arg2;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTableName:(id)arg1;
- (id)setWhereClause:(id)arg1;
- (id)tableName;

@end
