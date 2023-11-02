
@interface WCAFetchSQLiteRequest : WCAFetchRequest {
    NSArray * _columnNames;
    long long  _limit;
    NSDictionary * _parameters;
    NSString * _tableName;
}

@property (nonatomic, copy) NSArray *columnNames;
@property (nonatomic) long long limit;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSString *tableName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)columnNames;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)limit;
- (id)parameters;
- (void)setColumnNames:(id)arg1;
- (void)setLimit:(long long)arg1;
- (void)setParameters:(id)arg1;
- (void)setTableName:(id)arg1;
- (id)tableName;

@end
