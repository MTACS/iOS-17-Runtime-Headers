
@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding> {
    NSData * _encryptedData;
    NSData * _publicKeyHash;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_encryptedDataWithCertificatesResponse:(id)arg1 publicKeyHash:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)fundingDetailsUnencryptedDictionary;
- (id)hashComponentWithCertificatesResponse:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1;
- (id)jsonString;

@end
