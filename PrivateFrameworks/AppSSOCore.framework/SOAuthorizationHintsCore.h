
@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding> {
    NSString * _localizedExtensionBundleDisplayName;
}

@property (nonatomic, readonly) NSString *localizedExtensionBundleDisplayName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedExtensionBundleDisplayName:(id)arg1;
- (id)localizedExtensionBundleDisplayName;

@end
