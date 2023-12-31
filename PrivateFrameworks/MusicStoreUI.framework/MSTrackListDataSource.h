
@interface MSTrackListDataSource : MSStructuredPageTableDataSource

- (id)_stylesheetString;
- (bool)canDoubleTapIndexPath:(id)arg1;
- (bool)canShowItemOfferButtonForItem:(id)arg1;
- (bool)canShowPreviewForItem:(id)arg1;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (id)cellConfigurationForIndex:(long long)arg1 item:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (id)headerViewForSection:(long long)arg1;
- (double)heightForPlaceholderCells;
- (id)placeholderCellForIndexPath:(id)arg1;
- (void)reloadCellContexts;
- (long long)tableViewStyle;

@end
