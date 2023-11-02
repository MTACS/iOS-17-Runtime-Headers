
@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray * _items;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)allItems;
- (id)approximateLocation;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithItems:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)localEndDate;
- (id)localEndDateComponents;
- (id)localStartDate;
- (id)localStartDateComponents;
- (unsigned long long)numberOfItems;
- (id)universalEndDate;
- (id)universalStartDate;

@end
