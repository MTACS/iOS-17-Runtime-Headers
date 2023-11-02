
@interface NFECommercePaymentResponse : NSObject <NSSecureCoding> {
    NSArray * _SEPcerts;
    NSDictionary * _certs;
    NSData * _confirmationBlobHash;
    NSData * _confirmationBlobSignature;
    long long  _confirmationBlobVersion;
    NSData * _transactionData;
    NSString * _transactionIdentifier;
}

@property (nonatomic, readonly, retain) NSArray *SEPcerts;
@property (nonatomic, readonly, retain) NSDictionary *certs;
@property (nonatomic, readonly, retain) NSData *confirmationBlobHash;
@property (nonatomic, readonly, retain) NSData *confirmationBlobSignature;
@property (nonatomic, readonly) long long confirmationBlobVersion;
@property (nonatomic, readonly, retain) NSData *transactionData;
@property (nonatomic, readonly, retain) NSString *transactionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SEPcerts;
- (id)certs;
- (id)confirmationBlobHash;
- (id)confirmationBlobSignature;
- (long long)confirmationBlobVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setCerts:(id)arg1;
- (void)setConfirmationBlobHash:(id)arg1 withSignature:(id)arg2 version:(unsigned long long)arg3;
- (void)setSEPCerts:(id)arg1;
- (id)transactionData;
- (id)transactionIdentifier;

@end
