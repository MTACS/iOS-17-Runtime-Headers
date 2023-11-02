
@interface WFRemindersLibraryFiltering : WFContentLibraryFiltering

+ (void)getItemsMatchingQuery:(id)arg1 withInput:(id)arg2 resultHandler:(id /* block */)arg3;
+ (void)performCustomFilteringUsingContentPredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2 forQuery:(id)arg3 withInput:(id)arg4 resultHandler:(id /* block */)arg5;

@end
