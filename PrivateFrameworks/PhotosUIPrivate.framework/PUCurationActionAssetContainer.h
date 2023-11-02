
@interface PUCurationActionAssetContainer : NSObject {
    PHAsset * _asset;
    double  _score;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)asset;
- (double)score;
- (void)setAsset:(id)arg1;
- (void)setScore:(double)arg1;

@end
