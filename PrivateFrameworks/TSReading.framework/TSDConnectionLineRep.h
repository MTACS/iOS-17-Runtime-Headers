
@interface TSDConnectionLineRep : TSDShapeRep {
    TSDPathSource * mLastPathSource;
}

+ (bool)canConnectToRep:(id)arg1;
+ (id)infosToConnectFromSelection:(id)arg1 withInteractiveCanvasController:(id)arg2;

- (id)additionalRepsForDragging;
- (bool)canBeUsedForImageMask;
- (bool)canConnectToRep:(id)arg1;
- (bool)canMakePathEditable;
- (bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (id)connectionLineLayout;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (bool)directlyManagesLayerContent;
- (unsigned long long)enabledKnobMask;
- (struct CGPoint { double x1; double x2; })i_dragOffset;
- (bool)i_editMenuOverlapsEndKnobs;
- (bool)isDraggable;
- (bool)isSelectable;
- (bool)p_controlKnobVisible;
- (bool)p_isConnected;
- (bool)p_isConnectedToLockedObjects;
- (double)shortestDistanceToPoint:(struct CGPoint { double x1; double x2; })arg1 countAsHit:(bool*)arg2;
- (bool)shouldCreateKnobs;
- (bool)shouldCreateSelectionKnobs;
- (bool)shouldShowCommentHighlight;
- (bool)shouldShowSmartShapeKnobs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForEditMenu;
- (void)updateFromLayout;

@end
