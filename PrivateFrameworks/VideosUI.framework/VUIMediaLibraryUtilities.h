
@interface VUIMediaLibraryUtilities : NSObject

+ (id)_sortIndexesForObjects:(id)arg1 titleForObjectBlock:(id /* block */)arg2;
+ (id)groupingForMediaEntities:(id)arg1 groupingKeyPath:(id)arg2 groupingSortComparator:(id /* block */)arg3 performDefaultSort:(bool)arg4 sortIndexPropertyKey:(id)arg5;
+ (id /* block */)mediaItemEntityTypesSortComparator;
+ (id)sortIndexesForGrouping:(id)arg1;
+ (id)sortIndexesForMediaEntities:(id)arg1 sortIndexPropertyKey:(id)arg2;

@end
