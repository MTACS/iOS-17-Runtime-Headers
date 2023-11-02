
@interface _UIImageAssetMapEnvelope : NSObject {
    NSString * _assetName;
    UIImageAsset * _imageAsset;
}

@property (nonatomic, copy) NSString *assetName;
@property (nonatomic) UIImageAsset *imageAsset;

+ (id)wrapAsset:(id)arg1;

- (void).cxx_destruct;
- (id)assetName;
- (id)description;
- (id)imageAsset;
- (void)setAssetName:(id)arg1;
- (void)setImageAsset:(id)arg1;

@end
