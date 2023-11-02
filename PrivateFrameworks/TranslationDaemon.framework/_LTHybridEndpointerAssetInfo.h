
@interface _LTHybridEndpointerAssetInfo : NSObject {
    _LTTranslationContext * _context;
    NSString * _hybridepAssetFile;
    _LTDAssetModel * _sourceLanguageAsset;
    _LTDAssetModel * _spgAsset;
    NSString * _spgAssetFile;
    _LTDAssetModel * _targetLanguageAsset;
}

@property (nonatomic, readonly) NSString *hybridepAssetFile;
@property (nonatomic, readonly) NSString *spgAssetFile;

- (void).cxx_destruct;
- (id)caesuraModelURL;
- (bool)endpointerIsAvailableWithContext:(id)arg1;
- (id)endpointerModelURL:(id)arg1;
- (id)getPreferredAsset:(id)arg1 orAsset:(id)arg2 withLocale:(id)arg3;
- (id)hybridepAssetFile;
- (id)initWithAvailableAssets:(id)arg1 context:(id)arg2;
- (id)selectAsset:(id)arg1 withLocale:(id)arg2;
- (id)spgAssetFile;

@end
