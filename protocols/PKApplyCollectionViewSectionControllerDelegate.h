
@protocol PKApplyCollectionViewSectionControllerDelegate <NSObject>

@required

- (UICollectionViewCell *)cellForItem:(id)arg1;
- (void)deselectCells;
- (void)presentViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)recomputeSectionsWithReload:(bool)arg1;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadDataForSectionIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;

@optional

- (void)didSelectCell;
- (void)primaryButtonTapped;
- (void)pushViewController:(UIViewController *)arg1 animated:(bool)arg2;

@end
