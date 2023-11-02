
@interface _UIDefinitionDictionary : NSObject {
    bool  _activated;
    MAAsset * _assetToUpgrade;
    NSString * _definitionLanguage;
    struct __DCSDictionary { } * _dictionary;
    MAAsset * _rawAsset;
}

@property bool activated;
@property (retain) MAAsset *assetToUpgrade;
@property (readonly) NSString *definitionLanguage;
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *localizedLanguageName;
@property (readonly) MAAsset *rawAsset;

+ (id)_normalizedLanguageStringForLanguageCode:(id)arg1;

- (void).cxx_destruct;
- (id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2;
- (id)_attributedDefinitionForTerm:(id)arg1;
- (id)_definitionValueForTerm:(id)arg1;
- (id)_fullHTMLDefinitionForTerm:(id)arg1;
- (bool)_hasDefinitionForTerm:(id)arg1;
- (bool)_isTTYDictionary;
- (id)_shortHTMLDefinitionForTerm:(id)arg1;
- (bool)activated;
- (bool)assetIsDeletable;
- (bool)assetIsLocal;
- (id)assetToUpgrade;
- (void)dealloc;
- (id)definitionLanguage;
- (id)description;
- (id)initWithAsset:(id)arg1;
- (id)localizedDictionaryName;
- (id)localizedLanguageName;
- (id)rawAsset;
- (void)setActivated:(bool)arg1;
- (void)setAssetToUpgrade:(id)arg1;
- (void)updateAsset;

@end
