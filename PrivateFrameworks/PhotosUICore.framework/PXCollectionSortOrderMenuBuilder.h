
@interface PXCollectionSortOrderMenuBuilder : NSObject

+ (void)_enumeratePossibleSortOrdersUsingBlock:(id /* block */)arg1;
+ (id)_localizedTitleForSortOrder:(long long)arg1;
+ (unsigned int)_sortKeyFromSortOrder:(long long)arg1;
+ (long long)_sortOrderFromCollection:(id)arg1 sortKey:(unsigned int)arg2;
+ (bool)_supportsAscendingDescending:(unsigned int)arg1;
+ (bool)_supportsFetchSortOrder:(long long)arg1 collection:(id)arg2;
+ (void)_updateSortOrderWithSortKey:(unsigned int)arg1 ascending:(bool)arg2 forCollection:(id)arg3;
+ (id)sortOrderMenuActionsForCollection:(id)arg1;
+ (id)sortOrderMenuConfigurationsForCollection:(id)arg1;

@end
