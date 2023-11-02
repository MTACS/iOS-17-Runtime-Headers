
@protocol MRBannerRequestRepresentable <NSObject, NSSecureCoding>

@required

- (NSString *)bundleIdentifierAffinity;
- (NSString *)requestIdentifier;
- (void)setBundleIdentifierAffinity:(NSString *)arg1;
- (void)setRequestIdentifier:(NSString *)arg1;

@end
