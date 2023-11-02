
@interface PKPeerPaymentRecurringPaymentActionRequest : PKPeerPaymentWebServiceRequest {
    NSString * _action;
    NSString * _recurringPaymentIdentifier;
}

@property (nonatomic, copy) NSString *action;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)action;
- (id)initWithRecurringPaymentIdentifier:(id)arg1;
- (void)setAction:(id)arg1;

@end
