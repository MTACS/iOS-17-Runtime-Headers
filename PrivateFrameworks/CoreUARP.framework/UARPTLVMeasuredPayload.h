
@interface UARPTLVMeasuredPayload : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _digestListSize;
    NSNumber * _effectiveProductionMode;
    NSNumber * _effectiveSecurityMode;
    long long  _hashAlgorithm;
    NSNumber * _isTrusted;
    NSString * _payload4cc;
    NSString * _payloadLongname;
}

@property (retain) NSNumber *digestListSize;
@property (retain) NSNumber *effectiveProductionMode;
@property (retain) NSNumber *effectiveSecurityMode;
@property long long hashAlgorithm;
@property (retain) NSNumber *isTrusted;
@property (copy) NSString *payload4cc;
@property (copy) NSString *payloadLongname;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)digestListSize;
- (id)effectiveProductionMode;
- (id)effectiveSecurityMode;
- (void)encodeWithCoder:(id)arg1;
- (long long)hashAlgorithm;
- (id)initWithCoder:(id)arg1;
- (id)isTrusted;
- (id)payload4cc;
- (id)payloadLongname;
- (void)setDigestListSize:(id)arg1;
- (void)setEffectiveProductionMode:(id)arg1;
- (void)setEffectiveSecurityMode:(id)arg1;
- (void)setHashAlgorithm:(long long)arg1;
- (void)setIsTrusted:(id)arg1;
- (void)setPayload4cc:(id)arg1;
- (void)setPayloadLongname:(id)arg1;

@end
