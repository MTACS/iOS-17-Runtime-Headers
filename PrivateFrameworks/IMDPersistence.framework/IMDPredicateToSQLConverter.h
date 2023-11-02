
@interface IMDPredicateToSQLConverter : NSObject {
    NSString * _expression;
    NSMutableArray * _foundParameters;
    NSDictionary * _keyPathsToColumns;
}

@property (nonatomic, readonly, copy) NSString *expression;
@property (nonatomic, readonly, copy) NSDictionary *keyPathsToColumns;
@property (nonatomic, readonly, copy) NSArray *parameters;

- (void).cxx_destruct;
- (void)bindParametersToSqliteWithStatement:(struct CSDBSqliteStatement { struct CSDBSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; int x3; }*)arg1;
- (id)expression;
- (id)init;
- (id)initWithPredicate:(id)arg1 keyPathsToColumns:(id)arg2;
- (id)keyPathsToColumns;
- (id)parameters;

@end
