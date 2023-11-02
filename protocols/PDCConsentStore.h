
@protocol PDCConsentStore <NSObject>

@required

- (NSSet *)consentedBundleIdentifiers;
- (NSString *)userConsentedRegulatoryDisclosureVersionForBundleIdentifier:(NSString *)arg1;
- (NSError *)writeUserConsentedRegulatoryDisclosureVersion:(NSString *)arg1 forBundleIdentifier:(NSString *)arg2;

@end
