
@interface HMBModelFiniteQuery : HMBModelIndexedQuery

+ (id)queryWithSQLPredicate:(id)arg1 maximumRowsReturned:(unsigned long long)arg2 indexedProperties:(id)arg3 arguments:(id)arg4;

- (id)indexName;
- (id)performQueryOn:(id)arg1 arguments:(id)arg2;

@end
