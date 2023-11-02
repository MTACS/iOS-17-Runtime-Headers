
@interface PKPeerPaymentRecurringPaymentsResponse : PKPeerPaymentWebServiceResponse {
    NSArray * _recurringPayments;
}

@property (nonatomic, readonly) NSArray *recurringPayments;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 productTimeZone:(id)arg2;
- (id)recurringPayments;

@end
