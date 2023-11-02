
@protocol PKPeerPaymentRecurringPaymentDetailSectionControllerDelegate

@required

- (void)amountDidChange;
- (void)deselectCells;
- (void)makeCellFirstResponderWithItem:(PKPeerPaymentRecurringPaymentDetailRowItem *)arg1;
- (void)reloadDataAnimated:(bool)arg1;
- (void)updateFooterForSectionIdentifier:(NSString *)arg1;

@end
