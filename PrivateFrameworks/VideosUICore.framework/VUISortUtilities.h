
@interface VUISortUtilities : NSObject

+ (id /* block */)ascendingDateSortComparatorWithBlock:(id /* block */)arg1;
+ (id /* block */)ascendingTitleSortComparator;
+ (long long)comparisonResultForObject1:(id)arg1 object2:(id)arg2 withComparators:(id)arg3;
+ (id /* block */)descendingDateSortComparatorWithBlock:(id /* block */)arg1;
+ (id /* block */)descendingTitleSortComparator;
+ (id /* block */)titleSortComparatorWithAscending:(bool)arg1;

@end
