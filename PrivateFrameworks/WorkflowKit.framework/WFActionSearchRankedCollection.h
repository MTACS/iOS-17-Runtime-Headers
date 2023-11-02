
@interface WFActionSearchRankedCollection : NSObject {
    NSMutableOrderedSet * _itemsWithCategoryMatch;
    NSMutableOrderedSet * _itemsWithExactNameMatch;
    NSMutableOrderedSet * _itemsWithKeywordMatch;
    NSMutableOrderedSet * _itemsWithNameMatch;
}

- (void).cxx_destruct;
- (void)addItem:(id)arg1 forType:(unsigned long long)arg2;
- (id)init;
- (id)orderedSetForType:(unsigned long long)arg1;
- (void)prioritizeItem:(id)arg1 type:(unsigned long long)arg2;
- (id)rankedItems;

@end
