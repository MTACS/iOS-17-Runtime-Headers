
@interface PKPaymentBrowseableBankAppsRequest : PKPaymentWebServiceRequest {
    NSString * _region;
}

@property (nonatomic, copy) NSString *region;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithRegion:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;

@end
