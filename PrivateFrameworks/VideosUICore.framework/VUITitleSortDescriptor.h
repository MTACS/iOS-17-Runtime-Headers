
@interface VUITitleSortDescriptor : NSSortDescriptor

+ (id /* block */)ascendingTitleSortComparatorWithKey:(id)arg1;
+ (id /* block */)descendingTitleSortComparatorWithKey:(id)arg1;

- (long long)compareObject:(id)arg1 toObject:(id)arg2;

@end
