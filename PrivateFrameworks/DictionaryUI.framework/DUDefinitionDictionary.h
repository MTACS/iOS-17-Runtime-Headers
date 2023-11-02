
@interface DUDefinitionDictionary : NSObject {
    bool  _activated;
    MAAsset * _assetToUpgrade;
    NSString * _definitionLanguage;
    struct __DCSDictionary { } * _dictionary;
    bool  _isAppleDictionary;
    bool  _isTTYDictionary;
    long long  _preferredOrder;
    float  _progress;
    MAAsset * _rawAsset;
}

@property (nonatomic) bool activated;
@property (readonly) NSString *definitionLanguage;
@property (readonly) struct __DCSDictionary { }*dictionaryRef;
@property bool isAppleDictionary;
@property bool isTTYDictionary;
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *localizedLanguageName;
@property (readonly) NSString *localizedSortName;
@property (readonly) bool needsDownloadNewerVersion;
@property long long preferredOrder;
@property float progress;
@property (readonly) MAAsset *rawAsset;

+ (id)displayNameForLanguageIdentifier:(id)arg1 context:(long long)arg2;

- (void).cxx_destruct;
- (id)_definitionValueForTerm:(id)arg1;
- (bool)_hasDefinitionForTerm:(id)arg1;
- (bool)activated;
- (void)dealloc;
- (id)definitionLanguage;
- (id)description;
- (struct __DCSDictionary { }*)dictionaryRef;
- (id)initWithAsset:(id)arg1;
- (bool)isAppleDictionary;
- (bool)isTTYDictionary;
- (id)localizedDictionaryName;
- (id)localizedLanguageName;
- (id)localizedSortName;
- (bool)needsDownloadNewerVersion;
- (long long)preferredOrder;
- (float)progress;
- (id)rawAsset;
- (void)setActivated:(bool)arg1;
- (void)setAssetToUpgrade:(id)arg1;
- (void)setIsAppleDictionary:(bool)arg1;
- (void)setIsTTYDictionary:(bool)arg1;
- (void)setPreferredOrder:(long long)arg1;
- (void)setProgress:(float)arg1;

@end
