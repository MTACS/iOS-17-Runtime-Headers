
@interface PXFavoriteAssetsAction : PXAssetsAction {
    bool  _favorite;
}

@property (getter=isFavorite, nonatomic, readonly) bool favorite;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)currentValueForAssets:(id)arg1;
+ (bool)toggledValueForAssets:(id)arg1;

- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)arg1;
- (id)initWithAssets:(id)arg1 favorite:(bool)arg2;
- (bool)isFavorite;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
