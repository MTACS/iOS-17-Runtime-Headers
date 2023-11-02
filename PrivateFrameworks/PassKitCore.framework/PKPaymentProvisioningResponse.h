
@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse <NSSecureCoding> {
    NSArray * _downloadablePasses;
    PKExternalProvisioningOptions * _externalProvisioningOptions;
    PKContactInformation * _idmsContactInformation;
    NSArray * _moreInfoURLs;
    NSString * _nonce;
}

@property (nonatomic, readonly) NSArray *downloadablePasses;
@property (nonatomic, readonly, copy) PKExternalProvisioningOptions *externalProvisioningOptions;
@property (nonatomic, readonly) PKContactInformation *idmsContactInformation;
@property (nonatomic, readonly, copy) NSArray *moreInfoURLs;
@property (nonatomic, readonly) NSString *nonce;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)downloadablePasses;
- (void)encodeWithCoder:(id)arg1;
- (id)externalProvisioningOptions;
- (id)idmsContactInformation;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)moreInfoURLs;
- (id)nonce;

@end
