
@interface PKEncryptedVPANPaymentCredentials : NSObject {
    NSData * _encryptedCardData;
    NSData * _ephemeralPublicKey;
}

@property (nonatomic, readonly, copy) NSData *encryptedCardData;
@property (nonatomic, readonly, copy) NSData *ephemeralPublicKey;

- (void).cxx_destruct;
- (id)encryptedCardData;
- (id)ephemeralPublicKey;
- (id)initWithDictionary:(id)arg1;

@end
