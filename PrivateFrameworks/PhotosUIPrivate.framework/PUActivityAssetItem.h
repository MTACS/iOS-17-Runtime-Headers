
@interface PUActivityAssetItem : NSObject <NSCopying> {
    PHAsset * _asset;
    bool  _excludeAccessibilityDescription;
    bool  _excludeCaption;
    bool  _excludeLiveness;
    bool  _excludeLocation;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic) bool excludeAccessibilityDescription;
@property (nonatomic) bool excludeCaption;
@property (nonatomic) bool excludeLiveness;
@property (nonatomic) bool excludeLocation;

+ (id)itemsForAssets:(id)arg1;

- (void).cxx_destruct;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)excludeAccessibilityDescription;
- (bool)excludeCaption;
- (bool)excludeLiveness;
- (bool)excludeLocation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActivityAssetItem:(id)arg1;
- (id)localIdentifier;
- (void)setExcludeAccessibilityDescription:(bool)arg1;
- (void)setExcludeCaption:(bool)arg1;
- (void)setExcludeLiveness:(bool)arg1;
- (void)setExcludeLocation:(bool)arg1;

@end
