
@interface AVTComponentInstance : NSObject {
    NSString * _assetImage;
    NSString * _assetImageVariant;
    SCNNode * _assetNode;
    NSArray * _assets;
    bool  _didInitializeVariantSkinnerPairs;
    NSDictionary * _layers;
    NSString * _materialVariant;
    float  _skinnerVariantIntensity;
    NSMapTable * _variantSkinnerPairs;
    NSMutableDictionary * _visibilityRules;
}

@property (readonly) NSString *assetImage;
@property (readonly) SCNNode *assetNode;
@property (readonly) struct { bool x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; } uvRemappingInfo;

- (void).cxx_destruct;
- (void)_initializeVariantSkinnerPairsIfNeeded;
- (id)assetImage;
- (id)assetImageForAsset:(id)arg1;
- (id)assetImageWithLayerNamed:(id)arg1;
- (id)assetNode;
- (bool)has2DAsset;
- (bool)has3DAsset;
- (id)initWithComponent:(id)arg1 assetResourceCache:(id)arg2;
- (void)setImageVariant:(id)arg1;
- (void)setMaterialVariant:(id)arg1;
- (void)setSkinnerVariantIntensity:(float)arg1 skeleton:(id)arg2;
- (void)setVisibilityRules:(id)arg1 dictatedByCategory:(long long)arg2;
- (void)updateMaterialsWithComponent:(id)arg1;
- (struct { bool x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; })uvRemappingInfo;

@end
