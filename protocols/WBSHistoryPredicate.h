
@protocol WBSHistoryPredicate <NSObject, NSSecureCoding>

@required

- (WBSSQLiteStatement *)statementForDatabase:(WBSSQLiteDatabase *)arg1 cache:(WBSSQLiteStatementCache *)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4;

@end
