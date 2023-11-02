
@interface NSSQLRTreeIndexQueryIntermediate : NSSQLIntermediate {
    NSSQLEntity * _entity;
    NSExpression * _indexName;
    NSArray * _properties;
    NSArray * _ranges;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initForIndexNamed:(id)arg1 onEntity:(id)arg2 properties:(id)arg3 ranges:(id)arg4 inScope:(id)arg5;

@end
