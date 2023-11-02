
@interface STSMerchantPaymentResponse : STSInAppPaymentResponse {
    NSData * _confirmationBlobHash;
    NSData * _confirmationBlobSignature;
    NSNumber * _confirmationBlobVersion;
    NSArray * _sepCerts;
}

@property (nonatomic, readonly) NSData *confirmationBlobHash;
@property (nonatomic, readonly) NSData *confirmationBlobSignature;
@property (nonatomic, readonly) NSNumber *confirmationBlobVersion;
@property (nonatomic, readonly) NSArray *sepCerts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)confirmationBlobHash;
- (id)confirmationBlobSignature;
- (id)confirmationBlobVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromNFECommercePaymentResponse:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sepCerts;

@end
