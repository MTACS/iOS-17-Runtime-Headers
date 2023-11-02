
@interface PXStorySongsConfiguration : NSObject {
    <PXAudioAssetFetchResult> * _curatedAudioAssets;
    <PXAudioAsset> * _currentAsset;
    <PXAudioAssetFetchResult> * _fallbackCuratedAssets;
}

@property (nonatomic, readonly) <PXAudioAssetFetchResult> *curatedAudioAssets;
@property (nonatomic, readonly) <PXAudioAsset> *currentAsset;
@property (nonatomic, readonly) <PXAudioAssetFetchResult> *fallbackCuratedAssets;

- (void).cxx_destruct;
- (id)curatedAudioAssets;
- (id)currentAsset;
- (id)description;
- (id)fallbackCuratedAssets;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCuratedAudioAssets:(id)arg1;
- (id)initWithCuratedAudioAssets:(id)arg1 currentAsset:(id)arg2;
- (id)initWithCuratedAudioAssets:(id)arg1 fallbackCuratedAssets:(id)arg2 currentAsset:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)previewConfiguration;

@end
