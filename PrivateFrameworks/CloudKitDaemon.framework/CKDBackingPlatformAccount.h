
@interface CKDBackingPlatformAccount : CKDBackingAccount

- (long long)accountType;
- (id)ckAccount;
- (id)initWithAppleAccount:(id)arg1;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)arg1;

@end
