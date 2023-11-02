
@protocol PXMutableZoomablePhotosViewModel <NSObject>

@required

- (bool)allowsCaptionsInSquare;
- (bool)alwaysShowTopBadges;
- (bool)aspectFit;
- (bool)captionsVisible;
- (NSSet *)draggedAssetReferences;
- (PXAssetReference *)dropTargetAssetReference;
- (id /* block */)effectProvider:(void *)arg1; // needs 1 arg types, found 6: id /* block */, PXGEntityManager *, <PXDisplayAsset> *, void*, id, SEL
- (bool)isFaceModeEnabled;
- (bool)isInSelectMode;
- (bool)isInteractiveZooming;
- (bool)isPinching;
- (bool)layoutExtendsContentBelowBounds;
- (bool)lowMemoryMode;
- (void)resetColumns;
- (void)setAllowsCaptionsInSquare:(bool)arg1;
- (void)setAlwaysShowTopBadges:(bool)arg1;
- (void)setAspectFit:(bool)arg1;
- (void)setCaptionsVisible:(bool)arg1;
- (void)setDraggedAssetReferences:(NSSet *)arg1;
- (void)setDropTargetAssetReference:(PXAssetReference *)arg1;
- (void)setEffectProvider:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, PXGEffect *, id /* block */, PXGEntityManager *, <PXDisplayAsset> *, void*
- (void)setFaceModeEnabled:(bool)arg1;
- (void)setInteractiveZoomColumnIndex:(double)arg1 withAnchorAssetReference:(PXAssetReference *)arg2;
- (void)setIsInSelectMode:(bool)arg1;
- (void)setIsInteractiveZooming:(bool)arg1;
- (void)setIsPinching:(bool)arg1;
- (void)setLayoutExtendsContentBelowBounds:(bool)arg1;
- (void)setLowMemoryMode:(bool)arg1;
- (void)setPinchState:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; long long x7; double x8; })arg1 withAnchorAssetReference:(PXAssetReference *)arg2;
- (void)setUseLowMemoryDecode:(bool)arg1;
- (void)setViewBasedDecorationsEnabled:(bool)arg1;
- (void)setWantsDimmedSelectionStyle:(bool)arg1;
- (void)setWantsFileSizeBadge:(bool)arg1;
- (void)setWantsNumberedSelectionStyle:(bool)arg1;
- (void)setWantsOverBackgroundFloatingHeaderAppearance:(bool)arg1;
- (bool)useLowMemoryDecode;
- (bool)viewBasedDecorationsEnabled;
- (bool)wantsDimmedSelectionStyle;
- (bool)wantsFileSizeBadge;
- (bool)wantsNumberedSelectionStyle;
- (bool)wantsOverBackgroundFloatingHeaderAppearance;
- (void)zoomInToIndividualItemsWithAnchorAssetReference:(PXAssetReference *)arg1 animated:(bool)arg2;
- (void)zoomInToLastRememberedWithAnchorAssetReference:(PXAssetReference *)arg1 animated:(bool)arg2;
- (void)zoomToColumnIndex:(long long)arg1 withAnchorAssetReference:(PXAssetReference *)arg2 animated:(bool)arg3;

@end
