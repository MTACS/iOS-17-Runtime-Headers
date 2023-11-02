
@interface HMBModelUnindexedQuery : HMBModelQuery

+ (id)queryWithSQLPredicate:(id)arg1 ascending:(bool)arg2 arguments:(id)arg3;

- (id)performQueryOn:(id)arg1 arguments:(id)arg2;

@end
