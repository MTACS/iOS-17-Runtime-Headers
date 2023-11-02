
@interface JFXEffectAsset : NSObject {
    NSString * _assetID;
    JFXEffectAssetAttributes * _attributes;
    bool  _contentUpdateAvailable;
    NSURL * _localURL;
}

@property (nonatomic, readonly) NSString *assetID;
@property (nonatomic, readonly) JFXEffectAssetAttributes *attributes;
@property (nonatomic, readonly) bool contentUpdateAvailable;
@property (nonatomic, readonly) NSURL *localURL;

+ (id)firstAssetInAssets:(id)arg1 matchingFilterAttributes:(id)arg2;

- (void).cxx_destruct;
- (id)assetID;
- (id)attributes;
- (bool)contentUpdateAvailable;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAssetID:(id)arg1 URL:(id)arg2 copyOfAttributes:(id)arg3;
- (id)initWithAssetID:(id)arg1 URL:(id)arg2 copyOfAttributes:(id)arg3 contentUpdateAvailable:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)localURL;

@end
