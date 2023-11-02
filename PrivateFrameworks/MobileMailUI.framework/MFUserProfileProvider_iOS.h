
@interface MFUserProfileProvider_iOS : EMUserProfileProvider <EMUserProfileProviderSubclassMethods>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultProvider;

- (id)_accountsEmailAddresses;
- (bool)hasAccountsConfigured;
- (id)init;

@end
