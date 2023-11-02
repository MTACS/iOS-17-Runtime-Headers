
@protocol PXContentPrivacyAuthenticationContext <NSObject>

@required

- (NSString *)authenticationTitle;
- (NSString *)passcodeAuthenticationReason;

@optional

- (NSString *)authenticationContextIdentifier;
- (bool)canPerformAuthentication;

@end
