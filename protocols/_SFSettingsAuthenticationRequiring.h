
@protocol _SFSettingsAuthenticationRequiring <NSObject>

@required

- (NSString *)authenticationPrompt;
- (bool)hasBeenAuthenticated;
- (void)setHasBeenAuthenticated:(bool)arg1;
- (bool)showsAuthenticationPromptAsTitle;

@optional

- (NSArray *)additionalViewControllersToPushHandlingURLResourceDictionary:(NSDictionary *)arg1 didAuthenticate:(bool)arg2;
- (NSDictionary *)customLocalAuthenticationOptions;
- (bool)shouldAuthenticateBeforeShowingSettings;

@end
