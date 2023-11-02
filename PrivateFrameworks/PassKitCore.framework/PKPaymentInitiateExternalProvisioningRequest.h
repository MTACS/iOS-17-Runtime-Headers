
@interface PKPaymentInitiateExternalProvisioningRequest : PKPaymentWebServiceRequest {
    NSString * _cardIdentifier;
    NSArray * _externalDestinationDevices;
    NSString * _region;
}

@property (nonatomic, copy) NSString *cardIdentifier;
@property (nonatomic, copy) NSArray *externalDestinationDevices;
@property (nonatomic, retain) NSString *region;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)cardIdentifier;
- (id)externalDestinationDevices;
- (id)region;
- (void)setCardIdentifier:(id)arg1;
- (void)setExternalDestinationDevices:(id)arg1;
- (void)setRegion:(id)arg1;

@end
