
@interface PBFSQLiteWhereClauseBuilder : NSObject {
    NSMutableArray * _componentStack;
    NSMutableString * _components;
}

- (void).cxx_destruct;
- (id)appendColumn:(id)arg1 comparison:(unsigned long long)arg2 toValue:(id)arg3 combinator:(unsigned long long)arg4;
- (id)appendEqualsDictionary:(id)arg1;
- (id)appendExpression:(id /* block */)arg1 combinator:(unsigned long long)arg2;
- (id)build;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentComponent;
- (id)init;

@end
