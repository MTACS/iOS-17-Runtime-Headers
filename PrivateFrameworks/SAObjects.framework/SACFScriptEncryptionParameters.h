
@interface SACFScriptEncryptionParameters : SABaseAceObject

@property (nonatomic, copy) NSData *encryptionKey;
@property (nonatomic, copy) NSData *hmac;
@property (nonatomic, copy) NSData *hmacKey;
@property (nonatomic, copy) NSData *initializationVector;
@property (nonatomic, copy) NSString *type;

+ (id)scriptEncryptionParameters;
+ (id)scriptEncryptionParametersWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)encryptionKey;
- (id)groupIdentifier;
- (id)hmac;
- (id)hmacKey;
- (id)initializationVector;
- (void)setEncryptionKey:(id)arg1;
- (void)setHmac:(id)arg1;
- (void)setHmacKey:(id)arg1;
- (void)setInitializationVector:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
