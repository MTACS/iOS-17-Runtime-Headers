
@interface AEAssessmentApplicationDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    bool  _requiresSignatureValidation;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool requiresSignatureValidation;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 requiresSignatureValidation:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)requiresSignatureValidation;
- (id)teamIdentifier;

@end
