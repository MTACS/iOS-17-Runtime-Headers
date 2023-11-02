
@interface _PHCropInfo : NSObject {
    PHAsset * _asset;
    double  _cropScore;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) double cropScore;

- (void).cxx_destruct;
- (id)asset;
- (double)cropScore;
- (id)initWithAsset:(id)arg1 cropScore:(double)arg2;

@end
