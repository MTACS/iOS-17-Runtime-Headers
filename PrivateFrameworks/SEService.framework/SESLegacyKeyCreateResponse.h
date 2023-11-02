
@interface SESLegacyKeyCreateResponse : NSObject <NSSecureCoding> {
    NSData * _CASDSignature;
    NSNumber * _keySlot;
    NSData * _legacyKeyAttestation;
    NSData * _publicKeyData;
}

@property (nonatomic, retain) NSData *CASDSignature;
@property (nonatomic, retain) NSNumber *keySlot;
@property (nonatomic, retain) NSData *legacyKeyAttestation;
@property (nonatomic, retain) NSData *publicKeyData;

+ (bool)supportsSecureCoding;
+ (id)withPublicKeyData:(id)arg1 CASDSignature:(id)arg2 keySlot:(id)arg3 legacyKeyAttestation:(id)arg4;

- (void).cxx_destruct;
- (id)CASDSignature;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keySlot;
- (id)legacyKeyAttestation;
- (id)publicKeyData;
- (void)setCASDSignature:(id)arg1;
- (void)setKeySlot:(id)arg1;
- (void)setLegacyKeyAttestation:(id)arg1;
- (void)setPublicKeyData:(id)arg1;

@end
