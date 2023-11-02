
@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo {
    NSArray * _plAssets;
}

@property (nonatomic, readonly) NSArray *plAssets;

- (void).cxx_destruct;
- (id)_fetchPhotoAssets:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (id)countsByAssetDisplayType;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)plAssets;
- (long long)sectionType;
- (long long)typeForItemAtIndex:(long long)arg1;

@end
