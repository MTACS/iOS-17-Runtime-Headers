
@interface TIAssetManagerMock : NSObject <TIAssetManaging> {
    id /* block */  enabledInputModeIdentifiersProviderBlock;
    id /* block */  preferencesProviderBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ enabledInputModeIdentifiersProviderBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ preferencesProviderBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(id /* block */)arg5;
- (id)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(bool)arg3;
- (void)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(bool)arg3 completion:(id /* block */)arg4;
- (void)ddsAssetsForInputMode:(id)arg1 cachedOnly:(bool)arg2 completion:(id /* block */)arg3;
- (id /* block */)enabledInputModeIdentifiersProviderBlock;
- (id)enabledInputModes;
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (id /* block */)preferencesProviderBlock;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)requestAssetDownloadForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)setEnabledInputModeIdentifiersProviderBlock:(id /* block */)arg1;
- (void)setPreferencesProviderBlock:(id /* block */)arg1;
- (id)topActiveRegions;
- (void)updateAssetForInputModeIdentifier:(id)arg1 callback:(id /* block */)arg2;

@end
