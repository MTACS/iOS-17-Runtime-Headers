
@protocol PREditingColorItemsDataSource <NSObject>

@required

- (PREditingColorItem *)colorItemForIndex:(unsigned long long)arg1;
- (PREditingColorItem *)firstColorItemPassingTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, PREditingColorItem *, void*
- (unsigned long long)indexForItem:(PREditingColorItem *)arg1;
- (unsigned long long)numberOfItems;

@end
