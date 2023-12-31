
@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;

- (id)allRepsContainedInGroup;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 withSlop:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })convertNaturalPointFromUnscaledCanvas:(struct CGPoint { double x1; double x2; })arg1;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInUnscaledCanvas;
- (bool)handleDoubleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)handleSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)intersectsUnscaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDraggable;
- (Class)layerClass;
- (void)processChangedProperty:(int)arg1;
- (void)recursivelyDrawInContext:(struct CGContext { }*)arg1;
- (struct CGColor { }*)selectionHighlightColor;
- (void)setNeedsDisplay;
- (bool)shouldShowCommentHighlight;
- (bool)shouldShowSelectionHighlight;
- (bool)wantsToHandleTapsWhenLocked;

@end
