
@interface PKTransactionAuthenticationContext : NSObject <NSSecureCoding> {
    long long  _authenticationFailure;
    bool  _complete;
    unsigned long long  _dataCollectedAuthenticationMechanisms;
    NSData * _nonce;
    NSData * _partialSignature;
    long long  _paymentPINFormat;
    unsigned long long  _processedAuthenticationMechanisms;
    unsigned long long  _requestedAuthenticationMechanisms;
    NSData * _signingKeyMaterial;
}

@property (nonatomic) long long authenticationFailure;
@property (nonatomic) bool complete;
@property (nonatomic) unsigned long long dataCollectedAuthenticationMechanisms;
@property (nonatomic, copy) NSData *nonce;
@property (nonatomic, copy) NSData *partialSignature;
@property (nonatomic) long long paymentPINFormat;
@property (nonatomic) unsigned long long processedAuthenticationMechanisms;
@property (nonatomic) unsigned long long requestedAuthenticationMechanisms;
@property (nonatomic, copy) NSData *signingKeyMaterial;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authenticationFailure;
- (bool)complete;
- (unsigned long long)dataCollectedAuthenticationMechanisms;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransactionAuthenticationContext:(id)arg1;
- (id)nonce;
- (id)partialSignature;
- (long long)paymentPINFormat;
- (unsigned long long)processedAuthenticationMechanisms;
- (unsigned long long)requestedAuthenticationMechanisms;
- (void)setAuthenticationFailure:(long long)arg1;
- (void)setComplete:(bool)arg1;
- (void)setDataCollectedAuthenticationMechanisms:(unsigned long long)arg1;
- (void)setNonce:(id)arg1;
- (void)setPartialSignature:(id)arg1;
- (void)setPaymentPINFormat:(long long)arg1;
- (void)setProcessedAuthenticationMechanisms:(unsigned long long)arg1;
- (void)setRequestedAuthenticationMechanisms:(unsigned long long)arg1;
- (void)setSigningKeyMaterial:(id)arg1;
- (id)signingKeyMaterial;

@end
