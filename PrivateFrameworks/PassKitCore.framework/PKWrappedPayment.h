
@interface PKWrappedPayment : NSObject <NSSecureCoding> {
    NSArray * _SEPCertificates;
    PKSecureElementCertificateSet * _certificates;
    NSData * _confirmationBlobHash;
    long long  _confirmationBlobVersion;
    NSData * _enrollmentSignature;
    NSString * _kextBlacklistVersion;
    NSString * _merchantCountryCode;
    NSData * _transactionData;
    NSString * _transactionIdentifier;
    NSData * _transactionInstructionsSignature;
}

@property (nonatomic, copy) NSArray *SEPCertificates;
@property (nonatomic, copy) PKSecureElementCertificateSet *certificates;
@property (nonatomic, copy) NSData *confirmationBlobHash;
@property (nonatomic) long long confirmationBlobVersion;
@property (nonatomic, copy) NSData *enrollmentSignature;
@property (nonatomic, copy) NSString *kextBlacklistVersion;
@property (nonatomic, copy) NSString *merchantCountryCode;
@property (nonatomic, copy) NSData *transactionData;
@property (nonatomic, copy) NSString *transactionIdentifier;
@property (nonatomic, copy) NSData *transactionInstructionsSignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SEPCertificates;
- (id)certificates;
- (id)confirmationBlobHash;
- (long long)confirmationBlobVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)enrollmentSignature;
- (id)initWithCoder:(id)arg1;
- (id)kextBlacklistVersion;
- (id)merchantCountryCode;
- (void)setCertificates:(id)arg1;
- (void)setConfirmationBlobHash:(id)arg1;
- (void)setConfirmationBlobVersion:(long long)arg1;
- (void)setEnrollmentSignature:(id)arg1;
- (void)setKextBlacklistVersion:(id)arg1;
- (void)setMerchantCountryCode:(id)arg1;
- (void)setSEPCertificates:(id)arg1;
- (void)setTransactionData:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setTransactionInstructionsSignature:(id)arg1;
- (id)transactionData;
- (id)transactionIdentifier;
- (id)transactionInstructionsSignature;

@end
