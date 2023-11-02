
@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {
    bool  _substitutePK;
}

- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)generateSQLStringInContext:(id)arg1;

@end
