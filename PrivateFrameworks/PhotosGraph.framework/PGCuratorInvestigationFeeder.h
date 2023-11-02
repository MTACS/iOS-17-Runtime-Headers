
@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {
    NSArray * _items;
}

- (void).cxx_destruct;
- (id)allItems;
- (id)approximateLocation;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithItems:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
- (unsigned long long)numberOfItems;
- (id)privateItems;
- (id)sharedItems;
- (id)universalEndDate;
- (id)universalStartDate;

@end
