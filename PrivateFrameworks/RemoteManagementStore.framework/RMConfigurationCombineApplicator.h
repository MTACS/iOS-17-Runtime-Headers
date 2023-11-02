
@interface RMConfigurationCombineApplicator : NSObject {
    <RMConfigurationCombineAdapter> * _adapter;
}

@property (nonatomic, readonly) <RMConfigurationCombineAdapter> *adapter;

- (void).cxx_destruct;
- (id)_configurationByDeclarationKeyFromConfigurations:(id)arg1;
- (void)_endProcessing:(bool)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_processConfigurations:(id)arg1 storesByIdentifier:(id)arg2 scope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_processRemovalOfDeclarationKeys:(id)arg1 storesByIdentifier:(id)arg2 scope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)adapter;
- (void)applyConfigurations:(id)arg1 storesByIdentifier:(id)arg2 scope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)configurationUIForConfiguration:(id)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithAdapter:(id)arg1;

@end
