
@interface INUIExtensionRequestInfo : NSObject <NSCopying, NSSecureCoding> {
    INInteraction * _interaction;
    bool  _requiresUserConsent;
}

@property (nonatomic, readonly) INInteraction *interaction;
@property (nonatomic) bool requiresUserConsent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteraction:(id)arg1;
- (id)interaction;
- (bool)requiresUserConsent;
- (void)setRequiresUserConsent:(bool)arg1;

@end
