
@protocol MCMParametersCreateOrLookupWithBundle

@required

- (NSURL *)bundleURL;
- (bool)createIfNecessary;
- (NSURL *)executableURL;
- (bool)issueSandboxExtension;
- (const char *)sandboxToken;
- (bool)transient;

@end
