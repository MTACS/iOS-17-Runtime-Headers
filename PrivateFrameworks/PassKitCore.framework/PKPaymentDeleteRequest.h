
@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest {
    PKPaymentPass * _pass;
}

@property (nonatomic, retain) PKPaymentPass *pass;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPaymentPass:(id)arg1;
- (id)pass;
- (void)setPass:(id)arg1;

@end
