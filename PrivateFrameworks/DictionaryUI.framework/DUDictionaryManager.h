
@interface DUDictionaryManager : NSObject {
    NSArray * _availableDefinitionDictionaries;
    bool  _initiallyEmptyAssets;
}

@property (readonly) NSArray *availableDefinitionDictionaries;

+ (id)assetManager;

- (void).cxx_destruct;
- (id)_allAvailableDefinitionDictionaries;
- (id)_availableDictionaryAssets;
- (long long)_compareOrderOfDictionary:(id)arg1 withDictionary:(id)arg2;
- (id)_definitionValuesForTerm:(id)arg1;
- (id)_dictionaryAssetType;
- (void)_downloadDictionaryAssetCatalogWithTimeout:(long long)arg1 completion:(id /* block */)arg2;
- (bool)_hasDefinitionForTerm:(id)arg1;
- (void)_migrateInstalledStateForNewDictionaries:(id)arg1;
- (id)availableDefinitionDictionaries;
- (id)init;

@end
