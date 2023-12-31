
@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
    bool  _onlyFetchesAggregates;
    NSMutableDictionary * _propertyToAliasMappings;
    NSMutableDictionary * _variableToAliasMappings;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithScope:(id)arg1;
- (bool)onlyFetchesAggregates;
- (id)resolveVariableExpression:(id)arg1 inContext:(id)arg2;

@end
