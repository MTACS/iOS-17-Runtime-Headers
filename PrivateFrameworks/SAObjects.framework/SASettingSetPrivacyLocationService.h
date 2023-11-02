
@interface SASettingSetPrivacyLocationService : SASettingSetBool

@property (nonatomic) bool userConfirmed;

+ (id)setPrivacyLocationService;
+ (id)setPrivacyLocationServiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setUserConfirmed:(bool)arg1;
- (bool)userConfirmed;

@end
