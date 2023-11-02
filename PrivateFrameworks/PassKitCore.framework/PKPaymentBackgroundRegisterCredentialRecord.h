
@interface PKPaymentBackgroundRegisterCredentialRecord : PKPaymentBackgroundDownloadRecord {
    NSString * _credentialIdentifier;
    NSData * _responseData;
}

@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic, copy) NSData *responseData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)credentialIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialIdentifier:(id)arg1;
- (id)responseData;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setResponseData:(id)arg1;

@end
