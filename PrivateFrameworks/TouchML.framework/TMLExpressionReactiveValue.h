
@interface TMLExpressionReactiveValue : TMLReactiveValue {
    NSArray * _bindings;
    TMLContext * _context;
    NSString * _expression;
}

- (void).cxx_destruct;
- (id)initWithExpression:(id)arg1 context:(id)arg2 bindings:(id)arg3 valueType:(unsigned long long)arg4;
- (id)value;

@end
