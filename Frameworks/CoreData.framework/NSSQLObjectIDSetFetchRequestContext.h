
@interface NSSQLObjectIDSetFetchRequestContext : NSSQLFetchRequestContext {
    NSString * _columnName;
    NSArray * _idSets;
}

- (void)dealloc;
- (void)executeEpilogue;
- (bool)executeRequestCore:(id*)arg1;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 idSets:(id)arg4 columnName:(id)arg5;

@end
