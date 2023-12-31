
@interface MDLRelativeAssetResolver : NSObject <MDLAssetResolver> {
    MDLAsset * _asset;
}

@property (nonatomic) MDLAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)asset;
- (bool)canResolveAssetNamed:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)resolveAssetNamed:(id)arg1;
- (void)setAsset:(id)arg1;

@end
