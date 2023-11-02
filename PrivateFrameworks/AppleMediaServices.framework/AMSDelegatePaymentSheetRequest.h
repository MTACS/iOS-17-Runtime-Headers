
@interface AMSDelegatePaymentSheetRequest : AMSPaymentSheetRequest {
    PKPaymentRequest * _paymentRequest;
}

@property (nonatomic, retain) PKPaymentRequest *paymentRequest;

- (void).cxx_destruct;
- (id)paymentRequest;
- (void)setPaymentRequest:(id)arg1;

@end
