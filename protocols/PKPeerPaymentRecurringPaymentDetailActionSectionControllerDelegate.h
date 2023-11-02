
@protocol PKPeerPaymentRecurringPaymentDetailActionSectionControllerDelegate

@required

- (void)deselectCells;
- (void)performAction:(void *)arg1 startHandler:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)reloadDataAnimated:(bool)arg1;
- (void)updateFooterForSectionIdentifier:(NSString *)arg1;

@end
