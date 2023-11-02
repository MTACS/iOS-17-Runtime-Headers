
@interface RMConfigurationSingleApplicator : NSObject {
    <RMConfigurationSingleAdapter> * _adapter;
    bool  _doKeychainUnassign;
}

@property (nonatomic, readonly) <RMConfigurationSingleAdapter> *adapter;
@property (nonatomic) bool doKeychainUnassign;

- (void).cxx_destruct;
- (id)_configurationByDeclarationKeyFromConfigurations:(id)arg1;
- (void)_endProcessing:(bool)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)_supportedConfigurationType:(id)arg1;
- (bool)_unassignAssetReference:(id)arg1 scope:(long long)arg2 error:(id*)arg3;
- (bool)_usesKeychain;
- (id)adapter;
- (void)applyConfigurations:(id)arg1 storesByIdentifier:(id)arg2 scope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)configurationUIForConfiguration:(id)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)doKeychainUnassign;
- (id)initWithAdapter:(id)arg1;
- (void)setDoKeychainUnassign:(bool)arg1;

@end
