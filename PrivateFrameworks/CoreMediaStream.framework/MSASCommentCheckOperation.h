
@interface MSASCommentCheckOperation : NSObject {
    NSString * _albumGUID;
    NSString * _assetCollectionGUID;
}

@property (nonatomic, retain) NSString *albumGUID;
@property (nonatomic, retain) NSString *assetCollectionGUID;

- (void).cxx_destruct;
- (id)albumGUID;
- (id)assetCollectionGUID;
- (void)setAlbumGUID:(id)arg1;
- (void)setAssetCollectionGUID:(id)arg1;

@end
