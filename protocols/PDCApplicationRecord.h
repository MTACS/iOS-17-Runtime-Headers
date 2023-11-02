
@protocol PDCApplicationRecord <NSObject>

@required

- (NSURL *)URL;
- (NSString *)bundleIdentifier;
- (NSArray *)identities;
- (NSString *)localizedName;
- (NSString *)regulatoryPrivacyDisclosureVersion;

@end
