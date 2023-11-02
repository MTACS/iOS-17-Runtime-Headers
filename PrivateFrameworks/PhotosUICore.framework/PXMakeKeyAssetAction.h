
@interface PXMakeKeyAssetAction : PXPhotosAction {
    PHObjectPlaceholder * _adaptiveHighlightPlaceholder;
    PHAssetCollection * _assetCollection;
    PHAsset * _redoKeyAsset;
    PHAsset * _undoKeyAsset;
}

@property (nonatomic, retain) PHObjectPlaceholder *adaptiveHighlightPlaceholder;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHAsset *redoKeyAsset;
@property (nonatomic, readonly) PHAsset *undoKeyAsset;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)adaptiveHighlightPlaceholder;
- (id)assetCollection;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)redoKeyAsset;
- (void)setAdaptiveHighlightPlaceholder:(id)arg1;
- (id)undoKeyAsset;

@end
