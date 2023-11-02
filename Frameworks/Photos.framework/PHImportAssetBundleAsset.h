
@interface PHImportAssetBundleAsset : PHImportAsset {
    PFAssetBundle * _assetBundle;
}

@property (nonatomic, retain) PFAssetBundle *assetBundle;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)assetBundle;
- (id)assetDescription;
- (id)creationDate;
- (id)initWithAssetBundleAtURL:(id)arg1 withImportSource:(id)arg2;
- (id)keywordTitles;
- (void)setAssetBundle:(id)arg1;
- (id)timeZone;
- (id)title;

@end
