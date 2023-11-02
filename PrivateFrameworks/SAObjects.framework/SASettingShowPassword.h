
@interface SASettingShowPassword : SASettingCommand

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSString *appOrWebsiteName;
@property (nonatomic, copy) NSNumber *shouldPromptForAuthentication;
@property (nonatomic, copy) NSString *spokenAppOrWebsiteName;

+ (id)showPassword;
+ (id)showPasswordWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)appOrWebsiteName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAppBundleId:(id)arg1;
- (void)setAppOrWebsiteName:(id)arg1;
- (void)setShouldPromptForAuthentication:(id)arg1;
- (void)setSpokenAppOrWebsiteName:(id)arg1;
- (id)shouldPromptForAuthentication;
- (id)spokenAppOrWebsiteName;

@end
