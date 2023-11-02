
@interface HMBSQLQueryStatement : HMBSQLStatement {
    NSDictionary * _arguments;
}

@property (nonatomic, readonly) NSDictionary *arguments;

- (void).cxx_destruct;
- (id)arguments;
- (id)initWithContext:(id)arg1 statement:(id)arg2;
- (id)initWithContext:(id)arg1 statement:(struct sqlite3_stmt { }*)arg2 queryPlans:(id)arg3 arguments:(id)arg4;

@end
