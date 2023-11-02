
@interface WFContentLibraryFiltering : NSObject

+ (void)getItemsMatchingQuery:(id)arg1 withInput:(id)arg2 compoundPredicate:(id)arg3 resultHandler:(id /* block */)arg4;
+ (void)getItemsMatchingQuery:(id)arg1 withInput:(id)arg2 resultHandler:(id /* block */)arg3;
+ (void)performCustomFilteringUsingContentPredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2 forQuery:(id)arg3 withInput:(id)arg4 resultHandler:(id /* block */)arg5;
+ (void)performFallbackFilteringWithItems:(id)arg1 withContentPredicates:(id)arg2 compoundPredicateType:(unsigned long long)arg3 originalQuery:(id)arg4 resultHandler:(id /* block */)arg5;

@end
