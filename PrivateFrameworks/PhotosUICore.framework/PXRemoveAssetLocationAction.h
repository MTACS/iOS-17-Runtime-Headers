
@interface PXRemoveAssetLocationAction : PXAssetLocationAction

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)analyticsActionString;
- (id)locationForAsset:(id)arg1 shifted:(bool*)arg2;

@end
