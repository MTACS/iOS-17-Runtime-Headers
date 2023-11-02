
@interface HMBSQLStatement : HMFObject {
    HMBSQLContext * _context;
    NSArray * _queryPlans;
    struct sqlite3_stmt { } * _statement;
}

@property (nonatomic, readonly) HMBSQLContext *context;
@property (nonatomic, readonly) NSArray *queryPlans;
@property (nonatomic) struct sqlite3_stmt { }*statement;

+ (bool)explainStatements;
+ (id)queryPlansForContext:(id)arg1 statement:(id)arg2;
+ (void)setExplainStatements:(bool)arg1;
+ (struct sqlite3_stmt { }*)sqlStatementForContext:(id)arg1 statement:(id)arg2;

- (void).cxx_destruct;
- (id)context;
- (void)dealloc;
- (void)finalize;
- (id)initWithContext:(id)arg1 statement:(id)arg2;
- (id)initWithContext:(id)arg1 statement:(struct sqlite3_stmt { }*)arg2 queryPlans:(id)arg3;
- (id)queryPlans;
- (void)setStatement:(struct sqlite3_stmt { }*)arg1;
- (struct sqlite3_stmt { }*)statement;

@end
