
@interface PXHideAssetsAction : PXAssetsAction {
    bool  _hidden;
}

@property (getter=isHidden, nonatomic, readonly) bool hidden;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)currentValueForAssets:(id)arg1;
+ (bool)toggledValueForAssets:(id)arg1;

- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)arg1;
- (id)initWithAssets:(id)arg1 hidden:(bool)arg2;
- (bool)isHidden;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
