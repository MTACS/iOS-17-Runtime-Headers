
@interface PXSortOrderState : PXObservable {
    unsigned long long  _sortOrder;
}

@property (nonatomic, readonly) unsigned long long sortOrder;

- (void)enumeratePossibleSortOrdersUsingBlock:(id /* block */)arg1;
- (id)initWithSortOrder:(unsigned long long)arg1;
- (void)setSortOrder:(unsigned long long)arg1;
- (unsigned long long)sortOrder;

@end
