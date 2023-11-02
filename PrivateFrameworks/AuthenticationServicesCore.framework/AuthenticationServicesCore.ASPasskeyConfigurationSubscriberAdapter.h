
@interface AuthenticationServicesCore.ASPasskeyConfigurationSubscriberAdapter : NSObject <RMConfigurationMultipleAdapter> {
    void currentConfiguration;
}

- (void).cxx_destruct;
- (id)allDeclarationKeys;
- (bool)applyConfiguration:(id)arg1 scope:(long long)arg2 returningReasons:(id*)arg3 error:(id*)arg4;
- (id)configurationClasses;
- (id)declarationKeyForConfiguration:(id)arg1;
- (id)init;
- (bool)removeDeclarationKey:(id)arg1 scope:(long long)arg2 error:(id*)arg3;

@end
