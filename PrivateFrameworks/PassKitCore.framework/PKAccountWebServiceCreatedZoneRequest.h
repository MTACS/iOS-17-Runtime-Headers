
@interface PKAccountWebServiceCreatedZoneRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    NSString * _containerName;
    NSString * _zoneName;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *containerName;
@property (nonatomic, copy) NSString *zoneName;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)containerName;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setContainerName:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)zoneName;

@end
