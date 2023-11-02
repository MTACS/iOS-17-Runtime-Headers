
@interface AXLTLanguageAssetManager : NSObject

@property (nonatomic, readonly) bool languageAssetAvaliable;
@property (nonatomic, readonly) NSLocale *locale;

+ (id)sharedInstance;

- (void)deleteSpeechAsset;
- (void)downloadSpeechAsset:(id /* block */)arg1 completion:(id /* block */)arg2;
- (bool)languageAssetAvaliable;
- (id)locale;

@end
