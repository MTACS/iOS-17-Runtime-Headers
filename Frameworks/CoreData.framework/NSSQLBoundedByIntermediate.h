
@interface NSSQLBoundedByIntermediate : NSSQLIntermediate {
    NSExpression * _bounds;
    NSSQLEntity * _entity;
    NSAttributeDescription * _target;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithWorkingEntity:(id)arg1 target:(id)arg2 bounds:(id)arg3 scope:(id)arg4;

@end
