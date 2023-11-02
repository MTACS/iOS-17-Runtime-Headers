
@interface RMStoreProfilesAdapter : NSObject {
    bool  _isSystemScope;
}

@property (nonatomic) bool isSystemScope;

- (bool)_canAssumeOwnershipOfProfile:(id)arg1 newProfile:(id)arg2 newDeclarationKey:(id)arg3 store:(id)arg4;
- (bool)_canInstallProfile:(id)arg1 store:(id)arg2 declarationKey:(id)arg3 outAssumeOwnership:(bool*)arg4 error:(id*)arg5;
- (bool)_canReplaceProfile:(id)arg1 newProfile:(id)arg2 newDeclarationKey:(id)arg3 store:(id)arg4 outAssumeOwnership:(bool*)arg5 error:(id*)arg6;
- (bool)_canUninstallProfileWithIdentifier:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (id)_declarationKeyForProfile:(id)arg1;
- (id)_declarationKeyForUserInfo:(id)arg1;
- (id)_disallowedPayloadTypes;
- (id)_installOptionsForStore:(id)arg1 declarationKey:(id)arg2 assumeOwnership:(bool)arg3;
- (id)_installProfileData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)_isManagedByMDM:(id)arg1;
- (id)_payloadStructure:(id)arg1;
- (id)_personaIDForStore:(id)arg1;
- (id)_profileForIdentifier:(id)arg1 rmOnly:(bool)arg2;
- (bool)_removeProfileWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithScope:(long long)arg1;
- (void)installProfileData:(id)arg1 store:(id)arg2 declarationKey:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)installedProfileIdentifierByDeclarationKey;
- (bool)isSystemScope;
- (id)profileNameForIdentifier:(id)arg1;
- (void)setIsSystemScope:(bool)arg1;
- (void)uninstallProfileWithIdentifier:(id)arg1 store:(id)arg2 completionHandler:(id /* block */)arg3;

@end
