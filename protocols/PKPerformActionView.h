
@protocol PKPerformActionView <NSObject>

@required

- (UITextField *)amountTextField;
- (<PKPerformActionViewDelegate> *)delegate;
- (void)fetchServiceProviderDataWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (id)initWithPass:(PKPass *)arg1 action:(PKPaymentPassAction *)arg2 paymentDataProvider:(id <PKPaymentDataProvider>)arg3;
- (PKPass *)pass;
- (void)saveLastInputValues;
- (void)setDelegate:(id <PKPerformActionViewDelegate>)arg1;
- (NSDecimalNumber *)transactionAmount;
- (NSString *)transactionCurrency;

@optional

- (void)willDismissViewController;

@end
