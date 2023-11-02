
@interface FudPersonalizationObjectInfo : NSObject <NSSecureCoding> {
    NSData * _digest;
    bool  _effectiveProductionMode;
    bool  _effectiveSecurityMode;
    bool  _eproSet;
    bool  _esecSet;
    NSString * _objectTag;
    bool  _trusted;
    bool  _trustedSet;
}

@property (nonatomic, retain) NSData *digest;
@property (nonatomic) bool effectiveProductionMode;
@property (nonatomic) bool effectiveSecurityMode;
@property (nonatomic, readonly, copy) NSString *objectTag;
@property (nonatomic) bool trusted;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)digest;
- (bool)effectiveProductionMode;
- (bool)effectiveSecurityMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1;
- (bool)isEffectiveProductionModeSet;
- (bool)isEffectiveSecurityModeSet;
- (bool)isTrustedSet;
- (id)objectTag;
- (void)setDigest:(id)arg1;
- (void)setEffectiveProductionMode:(bool)arg1;
- (void)setEffectiveSecurityMode:(bool)arg1;
- (void)setTrusted:(bool)arg1;
- (bool)trusted;

@end
