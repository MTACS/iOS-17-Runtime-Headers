
@interface FKApplePayRowViewModelCollection : NSObject {
    FKApplePayBarcodeRowViewModel * _barcodeRowViewModel;
    FKApplePayOrderRowViewModel * _orderRowViewModel;
    FKApplePayReceiptRowViewModel * _receiptRowViewModel;
}

@property (nonatomic, readonly, copy) FKApplePayBarcodeRowViewModel *barcodeRowViewModel;
@property (nonatomic, readonly, copy) FKApplePayOrderRowViewModel *orderRowViewModel;
@property (nonatomic, readonly, copy) FKApplePayReceiptRowViewModel *receiptRowViewModel;

- (void).cxx_destruct;
- (id)barcodeRowViewModel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithOrderRowViewModel:(id)arg1 barcodeRowViewModel:(id)arg2 receiptRowViewModel:(id)arg3;
- (id)orderRowViewModel;
- (id)receiptRowViewModel;

@end
