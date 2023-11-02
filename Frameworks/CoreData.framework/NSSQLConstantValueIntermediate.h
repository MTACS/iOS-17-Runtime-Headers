
@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {
    id  _constantValue;
    unsigned char  _type;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithConstantValue:(id)arg1 inScope:(id)arg2 context:(id)arg3;
- (id)initWithConstantValue:(id)arg1 ofType:(unsigned char)arg2 inScope:(id)arg3 context:(id)arg4;

@end
