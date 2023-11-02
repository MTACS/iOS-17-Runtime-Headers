
@protocol PKPaymentSetupChooseProductListSectionControllerDelegate

@required

- (void)deselectCells;
- (void)didSelectPKPaymentSetupChooseProductListItem:(PKPaymentSetupChooseProductListItem *)arg1;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;

@end
