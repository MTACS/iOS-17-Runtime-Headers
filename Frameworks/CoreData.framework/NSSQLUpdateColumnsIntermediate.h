
@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate {
    NSDictionary * _propertiesToUpdate;
}

@property (nonatomic, retain) NSDictionary *propertiesToUpdate;

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)initWithPropertiesToUpdate:(id)arg1 inScope:(id)arg2;
- (bool)isUpdateColumnsScoped;
- (id)propertiesToUpdate;
- (void)setPropertiesToUpdate:(id)arg1;

@end
