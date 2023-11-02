
@interface MSVSQLStatement : NSObject {
    _MSVSQLConnection * _connection;
    MSVSQLDatabaseTransaction * _implicitTransaction;
    struct sqlite3_stmt { } * _statementHandle;
}

- (void).cxx_destruct;
- (void)bindBoolValue:(bool)arg1 toParameterAtIndex:(long long)arg2;
- (void)bindBoolValue:(bool)arg1 toParameterNamed:(id)arg2;
- (void)bindDataValue:(id)arg1 toParameterAtIndex:(long long)arg2;
- (void)bindDataValue:(id)arg1 toParameterNamed:(id)arg2;
- (void)bindDateValue:(id)arg1 toParameterAtIndex:(long long)arg2;
- (void)bindDateValue:(id)arg1 toParameterNamed:(id)arg2;
- (void)bindDoubleValue:(double)arg1 toParameterAtIndex:(long long)arg2;
- (void)bindDoubleValue:(double)arg1 toParameterNamed:(id)arg2;
- (void)bindFloatValue:(float)arg1 toParameterAtIndex:(long long)arg2;
- (void)bindFloatValue:(float)arg1 toParameterNamed:(id)arg2;
- (void)bindFunctionContext:(id)arg1 toParameterAtIndex:(long long)arg2;
- (void)bindFunctionContext:(id)arg1 toParameterNamed:(id)arg2;
- (void)bindInt64Value:(long long)arg1 toParameterAtIndex:(long long)arg2;
- (void)bindInt64Value:(long long)arg1 toParameterNamed:(id)arg2;
- (bool)bindJSONValue:(id)arg1 toParameterAtIndex:(long long)arg2 error:(id*)arg3;
- (bool)bindJSONValue:(id)arg1 toParameterNamed:(id)arg2 error:(id*)arg3;
- (void)bindNullValueToParameterAtIndex:(long long)arg1;
- (void)bindNullValueToParameterNamed:(id)arg1;
- (void)bindStringValue:(id)arg1 toParameterAtIndex:(long long)arg2;
- (void)bindStringValue:(id)arg1 toParameterNamed:(id)arg2;
- (void)bindUInt64Value:(unsigned long long)arg1 toParameterAtIndex:(long long)arg2;
- (void)bindUInt64Value:(unsigned long long)arg1 toParameterNamed:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)reset;

@end
