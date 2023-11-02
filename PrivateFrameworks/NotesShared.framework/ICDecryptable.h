
@interface ICDecryptable : NSObject {
    NSData * _cryptoInitializationVector;
    NSData * _cryptoTag;
    NSData * _encryptedData;
    NSData * _fallbackCryptoInitializationVector;
    NSData * _fallbackCryptoTag;
}

@property (nonatomic, retain) NSData *cryptoInitializationVector;
@property (nonatomic, retain) NSData *cryptoTag;
@property (nonatomic, retain) NSData *encryptedData;
@property (nonatomic, retain) NSData *fallbackCryptoInitializationVector;
@property (nonatomic, retain) NSData *fallbackCryptoTag;
@property (nonatomic, readonly) bool isValid;

- (void).cxx_destruct;
- (id)cryptoInitializationVector;
- (id)cryptoTag;
- (id)encryptedData;
- (id)fallbackCryptoInitializationVector;
- (id)fallbackCryptoTag;
- (id)initWithEncryptedData:(id)arg1 cryptoTag:(id)arg2 cryptoInitializationVector:(id)arg3;
- (id)initWithEncryptedData:(id)arg1 cryptoTag:(id)arg2 cryptoInitializationVector:(id)arg3 fallbackCryptoTag:(id)arg4 fallbackCryptoInitializationVector:(id)arg5;
- (bool)isValid;
- (void)setCryptoInitializationVector:(id)arg1;
- (void)setCryptoTag:(id)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setFallbackCryptoInitializationVector:(id)arg1;
- (void)setFallbackCryptoTag:(id)arg1;

@end
