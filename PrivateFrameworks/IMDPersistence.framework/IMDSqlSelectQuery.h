
@interface IMDSqlSelectQuery : IMDSqlQuery

+ (id)selectQueryForTable:(id)arg1;
+ (id)selectQueryForTable:(id)arg1 withColumns:(id)arg2;
+ (id)selectQueryForTable:(id)arg1 withColumns:(id)arg2 where:(id)arg3;

- (id)createQueryString;
- (id)initWithTableName:(id)arg1;

@end
