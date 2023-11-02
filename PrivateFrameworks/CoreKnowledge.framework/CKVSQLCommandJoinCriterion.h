
@interface CKVSQLCommandJoinCriterion : NSObject <NSCopying> {
    NSString * _columnName;
    NSString * _comparingColumnName;
    NSString * _comparingTableName;
    long long  _sqlOperator;
    NSArray * _subCriteria;
    NSString * _tableName;
}

@property (nonatomic, readonly) NSString *columnName;
@property (nonatomic, readonly) NSString *comparingColumnName;
@property (nonatomic, readonly) NSString *comparingTableName;
@property (nonatomic, readonly) long long sqlOperator;
@property (nonatomic, readonly) NSArray *subCriteria;
@property (nonatomic, readonly) NSString *tableName;

+ (id)criterionWithANDSubCriteria:(id)arg1;
+ (id)criterionWithColumnName:(id)arg1 onTable:(id)arg2 EQUALSColumnName:(id)arg3 comparingTableName:(id)arg4;

- (void).cxx_destruct;
- (id)columnName;
- (id)comparingColumnName;
- (id)comparingTableName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithColumnName:(id)arg1 onTable:(id)arg2 comparingColumnName:(id)arg3 comparingTableName:(id)arg4 sqlOperator:(long long)arg5;
- (id)initWithSubCriteria:(id)arg1 sqlOperator:(long long)arg2;
- (long long)sqlOperator;
- (id)subCriteria;
- (id)tableName;

@end
