
@protocol NPKBarcodePaymentSessionDelegate <NSObject>

@optional

- (void)barcodePaymentSession:(NPKBarcodePaymentSession *)arg1 didReceivePaymentBarcode:(NPKPaymentBarcode *)arg2;
- (void)barcodePaymentSession:(NPKBarcodePaymentSession *)arg1 didUpdateTransactionStatus:(unsigned long long)arg2 withTransaction:(PKPaymentTransaction *)arg3;

@end
