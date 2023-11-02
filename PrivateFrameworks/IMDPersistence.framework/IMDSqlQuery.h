
@interface IMDSqlQuery : NSObject {
    NSString * _columns;
    long long  _limit;
    NSString * _tableName;
    NSString * _where;
}

@property (nonatomic, copy) NSString *columns;
@property (nonatomic) long long limit;
@property (nonatomic, readonly, copy) NSString *tableName;
@property (nonatomic, copy) NSString *where;

+ (id)databaseQuery:(id)arg1;

- (id)columns;
- (id)createQueryString;
- (void)dealloc;
- (id)initWithTableName:(id)arg1;
- (long long)limit;
- (void)setColumns:(id)arg1;
- (void)setLimit:(long long)arg1;
- (void)setWhere:(id)arg1;
- (id)tableName;
- (id)where;

@end
