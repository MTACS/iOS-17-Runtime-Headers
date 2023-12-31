
@interface PKApplePayTrustHashResponse : PKAccountWebServiceResponse <NSSecureCoding> {
    NSData * _nonce;
    NSString * _referenceIdentifier;
}

@property (nonatomic, readonly, copy) NSData *nonce;
@property (nonatomic, readonly, copy) NSString *referenceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)nonce;
- (id)referenceIdentifier;

@end
