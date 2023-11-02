
@interface IDSCertifiedDeliveryReplayKey : NSObject <NSCopying, NSSecureCoding> {
    NSData * _payloadHash;
}

@property (nonatomic, retain) NSData *payloadHash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHash:(id)arg1;
- (id)initWithPayload:(id)arg1 legacyIdentity:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReplayKey:(id)arg1;
- (id)payloadHash;
- (void)setPayloadHash:(id)arg1;

@end
