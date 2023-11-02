
@interface PKPaymentVehicleManufacturerRequest : PKPaymentWebServiceRequest {
    NSDictionary * _encryptedVehicleDataRequest;
    NSDictionary * _metadata;
}

+ (id)requestMetadataWithPartnerIdentifier:(id)arg1 brandIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithInvitation:(id)arg1 encryptedVehicleDataRequest:(id)arg2;
- (id)initWithPartnerIdentifier:(id)arg1 brandIdentifier:(id)arg2 encryptedVehicleDataRequest:(id)arg3;
- (id)requestBody;

@end
