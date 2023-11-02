
@interface NSSQLExpressionIntermediate : NSSQLIntermediate {
    bool  _allowToMany;
    NSExpression * _expression;
}

- (id)initWithExpression:(id)arg1 allowToMany:(bool)arg2 inScope:(id)arg3;

@end
