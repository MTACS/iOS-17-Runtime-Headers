
@interface MSASAssetInfoToReauthForDownload : NSObject {
    MSASAlbum * _album;
    MSAsset * _asset;
}

@property (nonatomic, retain) MSASAlbum *album;
@property (nonatomic, retain) MSAsset *asset;

- (void).cxx_destruct;
- (id)album;
- (id)asset;
- (void)setAlbum:(id)arg1;
- (void)setAsset:(id)arg1;

@end
