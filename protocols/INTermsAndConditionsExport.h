
@protocol INTermsAndConditionsExport <NSObject, JSExport>

@required

- (id)init;
- (NSString *)localizedTermsAndConditionsText;
- (NSURL *)privacyPolicyURL;
- (NSURL *)termsAndConditionsURL;

@end
