
@interface EFSQLPreparedStatement : NSObject {
    double  _allowedExecutionTime;
    struct sqlite3_stmt { } * _compiled;
}

@property (nonatomic) double allowedExecutionTime;
@property (nonatomic, readonly) struct sqlite3_stmt { }*compiled;
@property (nonatomic, readonly) bool isFinalized;
@property (nonatomic, readonly, copy) NSString *originalString;

+ (id)log;

- (double)allowedExecutionTime;
- (bool)clearBindingsWithError:(id*)arg1;
- (struct sqlite3_stmt { }*)compiled;
- (void)dealloc;
- (id)debugDescription;
- (bool)executeUsingBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)executeWithIndexedBindings:(id)arg1 usingBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)executeWithNamedBindings:(id)arg1 rowsChanged:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)executeWithNamedBindings:(id)arg1 usingBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)finalizeWithError:(id*)arg1;
- (id)initWithString:(id)arg1 connection:(id)arg2;
- (bool)isFinalized;
- (id)originalString;
- (bool)resetWithError:(id*)arg1;
- (void)setAllowedExecutionTime:(double)arg1;

@end
