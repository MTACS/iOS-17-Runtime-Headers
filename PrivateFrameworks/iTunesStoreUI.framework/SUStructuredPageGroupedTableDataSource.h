
@interface SUStructuredPageGroupedTableDataSource : SUStructuredPageTableDataSource

- (id)_subtitleForSectionIndex:(long long)arg1;
- (bool)canShowItemOfferButtonForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id*)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (double)heightForFooterInSection:(long long)arg1;
- (id)newHeaderViewForSection:(long long)arg1;
- (void)reloadCellContexts;
- (long long)tableViewStyle;

@end
