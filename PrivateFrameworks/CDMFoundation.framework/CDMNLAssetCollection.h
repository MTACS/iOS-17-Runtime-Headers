
@interface CDMNLAssetCollection : NSObject {
    NSDictionary * _assetPaths;
    NSString * _languageCode;
}

@property (nonatomic, readonly) NSDictionary *assetPaths;
@property (nonatomic, readonly) NSString *languageCode;

+ (id)assetCollectionWithAssetPaths:(id)arg1 withLanguageCode:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithAssetPaths:(id)arg1 withLanguageCode:(id)arg2;
- (id)assetPaths;
- (id)getAssetBundlePathForFactorName:(id)arg1;
- (id)getAssetForFactorName:(id)arg1;
- (id)getAssetPaths;
- (id)languageCode;

@end
