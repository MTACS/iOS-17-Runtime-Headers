
@interface ASCLockupFeatureSingleSignOn : NSObject <ASCLockupFeature> {
    bool  _requiresSSOEntitlement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool requiresSSOEntitlement;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequiresSSOEntitlement:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)requiresSSOEntitlement;

@end
