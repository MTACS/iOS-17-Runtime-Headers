
@interface DDSAssetDownloadAnalytic : DDSTimedAnalytic {
    DDSAsset * _asset;
}

@property (nonatomic, retain) DDSAsset *asset;

- (void).cxx_destruct;
- (id)asset;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (void)setAsset:(id)arg1;

@end
