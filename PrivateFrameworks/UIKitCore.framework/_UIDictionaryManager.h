
@interface _UIDictionaryManager : NSObject {
    NSArray * _availableDefinitionDictionaries;
}

@property (readonly) NSArray *availableDefinitionDictionaries;

+ (id)assetManager;

- (void).cxx_destruct;
- (id)_allAvailableDefinitionDictionaries;
- (id)_availableDictionaryAssets;
- (id)_definitionValuesForTerm:(id)arg1;
- (id)_dictionaryAssetType;
- (void)_downloadDictionaryAssetCatalog:(id /* block */)arg1;
- (bool)_hasDefinitionForTerm:(id)arg1;
- (bool)_isTTYEnabled;
- (id)availableDefinitionDictionaries;
- (id)init;

@end
