
@interface CKVSQLCommandCriterion : NSObject <NSCopying> {
    NSString * _columnName;
    NSArray * _columnValues;
    NSString * _comparingColumnName;
    long long  _sqlOperator;
    NSArray * _subCriteria;
    NSString * _tableName;
}

@property (nonatomic, readonly) NSString *columnName;
@property (nonatomic, readonly) NSArray *columnValues;
@property (nonatomic, readonly) NSString *comparingColumnName;
@property (nonatomic, readonly) long long sqlOperator;
@property (nonatomic, readonly) NSArray *subCriteria;
@property (nonatomic, readonly) NSString *tableName;

+ (id)criterionWithANDSubCriteria:(id)arg1;
+ (id)criterionWithColumnName:(id)arg1 BETWEENLowerColumnValue:(id)arg2 ANDUpperColumnValue:(id)arg3;
+ (id)criterionWithColumnName:(id)arg1 EQUALSColumnValue:(id)arg2;
+ (id)criterionWithColumnName:(id)arg1 INColumnValues:(id)arg2;
+ (id)criterionWithColumnName:(id)arg1 LESSTHANColumnValue:(id)arg2;
+ (id)criterionWithColumnName:(id)arg1 LIKEWildcardPattern:(id)arg2;
+ (id)criterionWithColumnName:(id)arg1 MATCHSearchPhrase:(id)arg2;
+ (id)criterionWithColumnName:(id)arg1 NOTEQUALSColumnValue:(id)arg2;
+ (id)criterionWithColumnName:(id)arg1 onTable:(id)arg2 EQUALSColumnValue:(id)arg3;
+ (id)criterionWithORSubCriteria:(id)arg1;

- (void).cxx_destruct;
- (id)columnName;
- (id)columnValues;
- (id)comparingColumnName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithColumnName:(id)arg1 columnValue:(id)arg2 sqlOperator:(long long)arg3;
- (id)initWithColumnName:(id)arg1 columnValues:(id)arg2 sqlOperator:(long long)arg3;
- (id)initWithColumnName:(id)arg1 tableName:(id)arg2 columnValue:(id)arg3 sqlOperator:(long long)arg4;
- (id)initWithSubCriteria:(id)arg1 sqlOperator:(long long)arg2;
- (long long)sqlOperator;
- (id)subCriteria;
- (id)tableName;

@end
