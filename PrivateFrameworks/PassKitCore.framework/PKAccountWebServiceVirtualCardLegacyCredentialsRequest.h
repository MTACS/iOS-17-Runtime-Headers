
@interface PKAccountWebServiceVirtualCardLegacyCredentialsRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    PKVirtualCardEncryptionFields * _encryptionFields;
    NSString * _virtualCardIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) PKVirtualCardEncryptionFields *encryptionFields;
@property (nonatomic, copy) NSString *virtualCardIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)encryptionFields;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setEncryptionFields:(id)arg1;
- (void)setVirtualCardIdentifier:(id)arg1;
- (id)virtualCardIdentifier;

@end
