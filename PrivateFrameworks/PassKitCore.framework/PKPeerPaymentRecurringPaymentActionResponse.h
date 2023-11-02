
@interface PKPeerPaymentRecurringPaymentActionResponse : PKPeerPaymentWebServiceResponse {
    PKPeerPaymentRecurringPayment * _recurringPayment;
}

@property (nonatomic, readonly) PKPeerPaymentRecurringPayment *recurringPayment;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 productTimeZone:(id)arg2;
- (id)recurringPayment;

@end
