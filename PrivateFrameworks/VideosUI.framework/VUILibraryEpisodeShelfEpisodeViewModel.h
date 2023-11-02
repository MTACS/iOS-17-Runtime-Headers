
@interface VUILibraryEpisodeShelfEpisodeViewModel : NSObject {
    NSObject<VUIMediaEntityAssetController> * _assetController;
    VUIMediaItem * _episode;
}

@property (nonatomic, retain) NSObject<VUIMediaEntityAssetController> *assetController;
@property (nonatomic, retain) VUIMediaItem *episode;

- (void).cxx_destruct;
- (id)assetController;
- (id)episode;
- (void)setAssetController:(id)arg1;
- (void)setEpisode:(id)arg1;

@end
