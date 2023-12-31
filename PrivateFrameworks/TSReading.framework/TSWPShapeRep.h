
@interface TSWPShapeRep : TSDShapeRep <CALayerDelegate, TSDContainerRep, TSWPShapeLayoutDelegate> {
    TSWPRep * _containedRep;
    bool  _editingContainedRep;
    CALayer * _overflowGlyphLayer;
}

@property (nonatomic, readonly) TSWPRep *containedRep;
@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (bool)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (bool)canSelectChildRep:(id)arg1;
- (id)childReps;
- (id)containedRep;
- (id)containerInfo;
- (void)dealloc;
- (int)dragTypeAtCanvasPoint:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)enabledKnobMask;
- (bool)handleSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitReps:(struct CGPoint { double x1; double x2; })arg1 withSlop:(struct CGSize { double x1; double x2; })arg2;
- (id)hyperlinkRegions;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isDraggable;
- (bool)isEditingChildRep;
- (bool)isInvisible;
- (bool)mustDrawTilingLayerOnMainThread:(id)arg1;
- (id)overlayLayers;
- (double)pParagraphAlignmentOffset;
- (id)p_overflowKnobImage;
- (void)p_resetOverflowGlyphLayerIfNecessary;
- (bool)p_shouldShowTextOverflowGlyph;
- (void)processChangedProperty:(int)arg1;
- (void)selectChildRep:(id)arg1;
- (void)shapeLayoutDidChangeContainedStorage:(id)arg1;
- (bool)shapeLayoutShouldUpdateInstructionalText:(id)arg1;
- (bool)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 withRecognizer:(id)arg2;
- (bool)shouldShowKnobs;
- (bool)shouldShowSelectionHighlight;
- (void)updateChildrenFromLayout;
- (bool)wantsToHandleTapsOnContainingGroup;
- (bool)wantsToHandleTapsWhenLocked;
- (void)willBeRemoved;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;

@end
