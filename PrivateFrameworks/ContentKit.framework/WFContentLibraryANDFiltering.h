
@interface WFContentLibraryANDFiltering : NSObject

+ (void)getItemsMatchingComparisonPredicates:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)getItemsMatchingPredicate:(id)arg1 resultHandler:(id /* block */)arg2;
+ (Class)objectClass;
+ (void)performCustomFilteringUsingComparisonPredicates:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)performCustomFilteringUsingORComparisonPredicates:(id)arg1 resultHandler:(id /* block */)arg2;

@end
