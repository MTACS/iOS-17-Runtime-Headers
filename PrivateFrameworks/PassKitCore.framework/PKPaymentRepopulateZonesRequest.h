
@interface PKPaymentRepopulateZonesRequest : PKPaymentWebServiceRequest {
    NSArray * _cloudStoreZoneNames;
}

@property (nonatomic, readonly) NSArray *cloudStoreZoneNames;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)cloudStoreZoneNames;
- (id)initWithCloudStoreZoneNames:(id)arg1;

@end
