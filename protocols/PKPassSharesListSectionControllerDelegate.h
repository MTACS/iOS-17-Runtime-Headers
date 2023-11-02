
@protocol PKPassSharesListSectionControllerDelegate <NSObject>

@required

- (void)deselectCells;
- (void)passSharesListSectionController:(PKPassSharesListSectionController *)arg1 didSelectShare:(PKPassShare *)arg2;
- (void)passSharesListSectionController:(PKPassSharesListSectionController *)arg1 presentAlert:(UIAlertController *)arg2;
- (void)passSharesListSectionController:(PKPassSharesListSectionController *)arg1 setIsLoading:(bool)arg2;
- (void)passSharesListSectionControllerDidFinishRevokingShares:(PKPassSharesListSectionController *)arg1;
- (void)passSharesListSectionControllerDidSelectAddShare:(PKPassSharesListSectionController *)arg1;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;

@end
