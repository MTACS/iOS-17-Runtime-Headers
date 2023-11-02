
@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse {
    NSURL * _brokerURL;
    NSNumber * _cardsOnFile;
    NSArray * _certificates;
    NSString * _deviceIdentifier;
    NSString * _environmentName;
    NSNumber * _maxCards;
    NSURL * _paymentServicesURL;
    NSString * _primaryRegion;
    NSDictionary * _regions;
    NSURL * _trustedServiceManagerURL;
}

@property (nonatomic, copy) NSURL *brokerURL;
@property (nonatomic, copy) NSNumber *cardsOnFile;
@property (nonatomic, copy) NSArray *certificates;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *environmentName;
@property (nonatomic, copy) NSNumber *maxCards;
@property (nonatomic, copy) NSURL *paymentServicesURL;
@property (nonatomic, readonly, copy) NSString *primaryRegion;
@property (nonatomic, copy) NSDictionary *regions;
@property (nonatomic, copy) NSURL *trustedServiceManagerURL;

- (void).cxx_destruct;
- (id)brokerURL;
- (id)cardsOnFile;
- (id)certificates;
- (id)deviceIdentifier;
- (id)environmentName;
- (id)initWithData:(id)arg1;
- (id)maxCards;
- (id)paymentServicesURL;
- (id)primaryRegion;
- (id)regions;
- (void)setBrokerURL:(id)arg1;
- (void)setCardsOnFile:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setEnvironmentName:(id)arg1;
- (void)setMaxCards:(id)arg1;
- (void)setPaymentServicesURL:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setTrustedServiceManagerURL:(id)arg1;
- (id)trustedServiceManagerURL;

@end
