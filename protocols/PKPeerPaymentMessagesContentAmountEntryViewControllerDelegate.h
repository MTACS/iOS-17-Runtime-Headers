
@protocol PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate <NSObject>

@required

- (PKCurrencyAmount *)currentBalance;
- (void)handleAction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSDecimalNumber *)maximumTransferAmount;
- (NSDecimalNumber *)minimumTransferAmount;
- (double)percentExpanded;

@end
