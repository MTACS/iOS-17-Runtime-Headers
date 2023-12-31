
@interface NSSQLSelectIntermediate : NSSQLIntermediate {
    NSString * _columnAlias;
    NSString * _correlationTarget;
    NSSQLEntity * _entity;
    NSString * _entityAlias;
    NSArray * _fetchColumns;
    bool  _isCount;
    bool  _useDistinct;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initForCorrelationTarget:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;
- (bool)isTargetColumnsScoped;
- (bool)onlyFetchesAggregates;
- (id)resolveVariableExpression:(id)arg1 inContext:(id)arg2;

@end
