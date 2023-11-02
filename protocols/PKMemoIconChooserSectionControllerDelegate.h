
@protocol PKMemoIconChooserSectionControllerDelegate

@required

- (void)cell:(PKMemoIconCell *)arg1 didUpdateText:(NSString *)arg2;
- (void)deselectCells;
- (void)didSelectItem:(PKMemoItem *)arg1;
- (void)invalidateLayout;
- (void)reloadDataForSectionIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;
- (void)selectCellForItem:(PKMemoItem *)arg1;

@end
