
@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {
    NSSQLUpdateColumnsIntermediate * _updateColumns;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;
- (bool)isUpdateScoped;

@end
