
@protocol PKPeerPaymentRecurringPaymentDetailViewControllerDelegate <NSObject>

@optional

- (void)recurringPaymentDetailViewControllerDidDisappearWithRecurringPayment:(PKPeerPaymentRecurringPayment *)arg1;
- (void)stageRecurringPayment:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: PKPeerPaymentRecurringPayment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
