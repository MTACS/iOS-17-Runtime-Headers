
@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest {
    PKPaymentPass * _pass;
    NSString * _stepIdentifier;
}

@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, copy) NSString *stepIdentifier;

+ (id)requestWithPass:(id)arg1;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)pass;
- (void)setPass:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (id)stepIdentifier;

@end
