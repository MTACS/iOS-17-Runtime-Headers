
@interface JFXMediaReaderCreationAVAssetTrackAttributes : NSObject {
    AVAsset * _asset;
    AVAssetTrack * _assetTrack;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) AVAssetTrack *assetTrack;

- (void).cxx_destruct;
- (id)asset;
- (id)assetTrack;
- (id)initWithAssetTrack:(id)arg1;

@end
