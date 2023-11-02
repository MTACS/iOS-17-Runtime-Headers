
@protocol PKPayLaterSectionControllerDelegate <NSObject>

@required

- (UICollectionViewCell *)cellForItem:(id)arg1;
- (void)deselectCells;
- (void)didTapHyperLink:(PKApplyFooterContentLink *)arg1;
- (void)presentViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)reconfigureHeaderAndFooterForSectionIdentifier:(NSString *)arg1;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadDataForSectionIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;
- (void)reloadNavigationBarHeaderFooterLayout;

@end
