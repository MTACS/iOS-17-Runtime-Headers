
@protocol PKDrawingPaletteViewStateSubject <PKPaletteViewStateSubject>

@required

- (double)_toolsContainerWidth;
- (bool)colorSwatchesVisible;
- (bool)enableKeyboardButtons;
- (long long)floatingKeyboardType;
- (bool)hasHandwritingTool;
- (NSArray *)inputAssistantItems;
- (double)interItemToolsSpacingInCompactSize;
- (double)interItemUndoRedoButtonsSpacing;
- (double)interItemUndoRedoButtonsSpacingInCompactSize;
- (NSString *)lassoToolEditingViewIdentifier;
- (UIMenu *)plusButtonMenu;
- (bool)prefersLargeContextualEditingUI;
- (PKTool *)selectedTool;
- (bool)shouldHideHoverPreviewToggle;
- (bool)showsLassoToolEditingView;
- (bool)showsPlusButton;
- (bool)showsShapeButton;
- (bool)showsTextButton;
- (bool)useEqualSpacingLayoutInCompactSize;
- (bool)wantsEllipsisButtonVisibleInCompactSize;
- (bool)wantsMulticolorSwatchShadowInCompactSize;
- (bool)wantsScrollableTools;
- (bool)wantsUndoRedoButtonsShadowInCompactSize;
- (bool)wantsUndoRedoButtonsVisibleInCompactSize;

@end
