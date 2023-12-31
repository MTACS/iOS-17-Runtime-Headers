
@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier {
    id  _ecKeySpecifierInternal;
}

@property long long curve;

+ (Class)keyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)curve;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurve:(long long)arg1;
- (void)setCurve:(long long)arg1;

@end
