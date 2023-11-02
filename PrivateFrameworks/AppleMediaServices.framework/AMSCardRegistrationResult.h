
@interface AMSCardRegistrationResult : NSObject {
    NSURL * _brokerURL;
    NSData * _cardData;
    NSURL * _paymentServicesURL;
}

@property (nonatomic, readonly) NSURL *brokerURL;
@property (nonatomic, readonly) NSData *cardData;
@property (nonatomic, readonly) NSURL *paymentServicesURL;

- (void).cxx_destruct;
- (id)brokerURL;
- (id)cardData;
- (id)initWithCardRegistrationResponse:(id)arg1;
- (id)paymentServicesURL;

@end
