
@interface RMStoreProfilesController : NSObject {
    NSString * _profileIdentifierPrefix;
    RMStoreProfilesAdapter * _profilesAdapter;
}

@property (nonatomic, copy) NSString *profileIdentifierPrefix;
@property (nonatomic, retain) RMStoreProfilesAdapter *profilesAdapter;

+ (id)newProfileControllerWithPrefix:(id)arg1 scope:(long long)arg2;

- (void).cxx_destruct;
- (void)_installProfileAtPath:(id)arg1 store:(id)arg2 declaration:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_installProfileData:(id)arg1 store:(id)arg2 declaration:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)configurationByDeclarationKeyForConfigurations:(id)arg1;
- (id)declarationKeyForStore:(id)arg1 declaration:(id)arg2;
- (void)downloadAndInstallProfileConfiguration:(id)arg1 fromURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)downloadAndInstallProfileDeclaration:(id)arg1 store:(id)arg2 fromURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithProfileIdentifierPrefix:(id)arg1;
- (id)initWithProfileIdentifierPrefix:(id)arg1 scope:(long long)arg2;
- (id)initWithProfilesAdapter:(id)arg1 profileIdentifierPrefix:(id)arg2;
- (id)installedProfileIdentifierByDeclarationKey;
- (id)installedProfileIdentifiers;
- (id)profileIdentifierForConfiguration:(id)arg1;
- (id)profileIdentifierForDeclaration:(id)arg1 store:(id)arg2;
- (id)profileIdentifierPrefix;
- (id)profileNameForProfileIdentifier:(id)arg1;
- (id)profilesAdapter;
- (void)setProfileIdentifierPrefix:(id)arg1;
- (void)setProfilesAdapter:(id)arg1;
- (void)uninstallProfileWithIdentifier:(id)arg1 store:(id)arg2 completionHandler:(id /* block */)arg3;

@end
