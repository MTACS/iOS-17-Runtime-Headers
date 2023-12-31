
@interface TSDShapeRep : TSDStyledRep <CALayerDelegate, TSDMagicMoveMatching> {
    bool  mDirectlyManagesLayerContent;
    bool  mFrameInUnscaledCanvasIsValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mFrameInUnscaledCanvasRelativeToSuper;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mOriginalAliasedAlignmentFrameInLayerFrame;
    bool  mShadowOnChildrenDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shadowOnChildrenDisabled;
@property (readonly) Class superclass;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;

- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)addSelectionKnobsToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (bool)canBeUsedForImageMask;
- (bool)canDrawInParallel;
- (bool)canDrawShadowInOneStepWithChildren:(bool)arg1;
- (bool)canMakePathEditable;
- (bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (struct CGPoint { double x1; double x2; })centerForGuideLayerPlacement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (bool)directlyManagesVisibilityOfKnob:(id)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (id)editablePathSource;
- (unsigned long long)enabledKnobMask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInUnscaledCanvas;
- (bool)i_editMenuOverlapsEndKnobs;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)intersectsUnscaledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateEffectLayersForChildren;
- (bool)isDraggable;
- (bool)isEditingChildRep;
- (bool)isEditingPath;
- (bool)isInvisible;
- (bool)isPathEditable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrameInScaledCanvas;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrameInScaledCanvasRelativeToParent;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(bool)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })naturalToEditablePathSpaceTransform;
- (id)overlayLayers;
- (bool)p_beginApplyOpacity:(struct CGContext { }*)arg1 forDrawingInOneStep:(bool)arg2;
- (void)p_beginDynamicallyResizingOrMovingLineEnd;
- (bool)p_canApplyFillToLayer;
- (bool)p_canApplyStrokeToLayer;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext { }*)arg1;
- (void)p_drawInContext:(struct CGContext { }*)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(bool)arg4;
- (void)p_drawLineEndForHead:(bool)arg1 withDelta:(struct CGPoint { double x1; double x2; })arg2 andStroke:(id)arg3 inContext:(struct CGContext { }*)arg4 useFastDrawing:(bool)arg5;
- (bool)p_drawsSelfInOneStep;
- (void)p_endApplyOpacity:(struct CGContext { }*)arg1 apply:(bool)arg2;
- (void)p_endDynamicallyResizingOrMovingLineEnd;
- (bool)p_pathIsAxisAlignedRect;
- (id)pathSourceForSelectionHighlightBehavior;
- (void)processChangedProperty:(int)arg1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { }*)arg1;
- (void)setShadowOnChildrenDisabled:(bool)arg1;
- (bool)shadowOnChildrenDisabled;
- (id)shapeInfo;
- (id)shapeLayout;
- (double)shortestDistanceToPoint:(struct CGPoint { double x1; double x2; })arg1 countAsHit:(bool*)arg2;
- (bool)shouldExpandHitRegionWhenSmall;
- (bool)shouldHideSelectionHighlightDueToRectangularPath;
- (bool)shouldShowAdditionalKnobs;
- (bool)shouldShowAdvancedGradientKnobs;
- (bool)shouldShowSelectionHighlight;
- (bool)shouldShowShadow;
- (bool)shouldShowSmartShapeKnobs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForEditMenu;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)willBeRemoved;
- (void)willUpdateLayer:(id)arg1;

@end
