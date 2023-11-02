
@interface PGSinglePersonWallpaperAssetCandidate : NSObject {
    double  _aestheticScore;
    NSString * _assetUUID;
    NSDate * _creationDate;
    bool  _isFavorite;
    double  _score;
    double  _wallpaperScore;
}

@property (readonly) double aestheticScore;
@property (readonly) NSString *assetUUID;
@property (readonly) NSDate *creationDate;
@property (readonly) bool isFavorite;
@property (readonly) double score;
@property (readonly) double wallpaperScore;

- (void).cxx_destruct;
- (double)aestheticScore;
- (id)assetUUID;
- (id)creationDate;
- (id)initWithFace:(id)arg1 inAsset:(id)arg2;
- (bool)isFavorite;
- (double)score;
- (double)wallpaperScore;

@end
