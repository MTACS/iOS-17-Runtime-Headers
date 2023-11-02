
@interface PBFSQLiteDeleteQueryBuilder : NSObject <PBFSQLiteQueryBuilder> {
    NSString * _tableName;
    PBFSQLiteWhereClauseBuilder * _whereClauseBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTableName:(id)arg1;
- (id)setWhereClause:(id)arg1;
- (id)tableName;

@end
