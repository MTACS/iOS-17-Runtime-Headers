
@interface PKPendingPaymentRemoteCredential : PKPendingProvisioning <NSSecureCoding> {
    NSString * _cardIdentifier;
    long long  _cardType;
    bool  _couldSupportSuperEasyProvisioning;
    long long  _credentialType;
    NSString * _nonce;
    NSString * _ownershipToken;
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
    NSURL * _passURL;
    NSString * _sanitizedPrimaryAccountNumber;
    bool  _supportsSuperEasyProvisioning;
    NSString * _transferableFromDeviceIdentifier;
    NSString * _transferableFromDeviceSerialNumber;
}

@property (nonatomic, retain) NSString *cardIdentifier;
@property (nonatomic) long long cardType;
@property (nonatomic) bool couldSupportSuperEasyProvisioning;
@property (nonatomic, readonly) PKPaymentRemoteCredential *credential;
@property (nonatomic) long long credentialType;
@property (nonatomic, retain) NSString *nonce;
@property (nonatomic, retain) NSString *ownershipToken;
@property (nonatomic, retain) NSString *passSerialNumber;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) NSURL *passURL;
@property (nonatomic, retain) NSString *sanitizedPrimaryAccountNumber;
@property (nonatomic) bool supportsSuperEasyProvisioning;
@property (nonatomic, retain) NSString *transferableFromDeviceIdentifier;
@property (nonatomic, retain) NSString *transferableFromDeviceSerialNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardIdentifier;
- (long long)cardType;
- (bool)couldSupportSuperEasyProvisioning;
- (id)credential;
- (long long)credentialType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initForDatabase;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteCredential:(id)arg1;
- (id)nonce;
- (id)ownershipToken;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (id)passURL;
- (bool)representsCredential:(id)arg1;
- (bool)representsPass:(id)arg1;
- (id)sanitizedPrimaryAccountNumber;
- (void)setCardIdentifier:(id)arg1;
- (void)setCardType:(long long)arg1;
- (void)setCouldSupportSuperEasyProvisioning:(bool)arg1;
- (void)setCredentialType:(long long)arg1;
- (void)setNonce:(id)arg1;
- (void)setOwnershipToken:(id)arg1;
- (void)setPassSerialNumber:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;
- (void)setSupportsSuperEasyProvisioning:(bool)arg1;
- (void)setTransferableFromDeviceIdentifier:(id)arg1;
- (void)setTransferableFromDeviceSerialNumber:(id)arg1;
- (bool)supportsSuperEasyProvisioning;
- (id)transferableFromDeviceIdentifier;
- (id)transferableFromDeviceSerialNumber;
- (id)type;

@end
