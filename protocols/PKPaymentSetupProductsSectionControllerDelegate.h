
@protocol PKPaymentSetupProductsSectionControllerDelegate <NSObject>

@required

- (void)deselectCells;
- (bool)didSelectManualEntryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)didSelectProduct:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKPaymentSetupProduct *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)displayNoResultsViewWithSubtitle:(NSString *)arg1 needsManualEntryButton:(bool)arg2;
- (void)hideNoResultsView;
- (void)reconfigureHeaderAndFooterForSectionIdentifier:(NSString *)arg1;
- (void)reloadData;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;
- (void)reloadSectionIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (void)reloadSectionsRequired;

@end
