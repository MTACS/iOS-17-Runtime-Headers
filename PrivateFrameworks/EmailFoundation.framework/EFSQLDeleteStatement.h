
@interface EFSQLDeleteStatement : NSObject {
    unsigned long long  _limit;
    NSMutableArray * _orderExpressions;
    NSString * _table;
    <EFSQLValueExpressable> * _whereClause;
}

@property (nonatomic) unsigned long long limit;
@property (nonatomic, readonly, copy) NSString *queryString;

- (void).cxx_destruct;
- (id)initWithTable:(id)arg1;
- (id)initWithTable:(id)arg1 where:(id)arg2;
- (unsigned long long)limit;
- (void)orderBy:(id)arg1 ascending:(bool)arg2;
- (void)orderByColumn:(id)arg1 ascending:(bool)arg2;
- (id)queryString;
- (void)setLimit:(unsigned long long)arg1;

@end
