
@interface PXHideAssetsFromHighlightAction : PXPhotosAction {
    PHObjectPlaceholder * _adaptiveHighlightPlaceholder;
    PHPhotosHighlight * _highlight;
    <PXFastEnumeration> * _redoHiddenAssets;
    <PXFastEnumeration> * _undoHiddenAssets;
}

@property (nonatomic, retain) PHObjectPlaceholder *adaptiveHighlightPlaceholder;
@property (nonatomic, readonly) PHPhotosHighlight *highlight;
@property (nonatomic, readonly) <PXFastEnumeration> *redoHiddenAssets;
@property (nonatomic, readonly) <PXFastEnumeration> *undoHiddenAssets;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)adaptiveHighlightPlaceholder;
- (id)highlight;
- (id)initWithAssets:(id)arg1 highlight:(id)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)redoHiddenAssets;
- (void)setAdaptiveHighlightPlaceholder:(id)arg1;
- (id)undoHiddenAssets;

@end
