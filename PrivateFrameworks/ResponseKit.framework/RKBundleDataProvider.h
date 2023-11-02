
@interface RKBundleDataProvider : NSObject <RKDisplayStringsProvider, RKPolarityDataProvider> {
    NSURL * _assetPlistURL;
    RKAssets * _assets;
    NSBundle * _bundle;
    NSMutableDictionary * _displayStringsByPlatformByLanguage;
    NSMutableDictionary * _localizationsByLanguageID;
    NSMutableDictionary * _polarityMapsByLanguageID;
}

@property (readonly) NSURL *assetPlistURL;
@property (readonly) RKAssets *assets;
@property (readonly) NSBundle *bundle;
@property (readonly) NSMutableDictionary *displayStringsByPlatformByLanguage;
@property (retain) NSMutableDictionary *localizationsByLanguageID;
@property (readonly) NSMutableDictionary *polarityMapsByLanguageID;

- (void).cxx_destruct;
- (id)assetPlistURL;
- (id)assets;
- (id)bundle;
- (id)displayStringsByPlatformByLanguage;
- (id)displayStringsForPlatform:(id)arg1 languageID:(id)arg2;
- (id)init;
- (id)initWithAssetPlist:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)localizationsByLanguageID;
- (id)polarityMapsByLanguageID;
- (void)setLocalizationsByLanguageID:(id)arg1;
- (id)stringsFromTable:(id)arg1 forLanguageIdentifier:(id)arg2;

@end
