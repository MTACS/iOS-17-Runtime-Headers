
@interface TSDStyledRep : TSDRep <TSDTilingLayerDelegate> {
    TSDMutableReflection * mDynamicReflection;
    TSDShadow * mDynamicShadow;
    struct { 
        unsigned int shadowInvalid : 1; 
    }  mFlags;
    bool  mIsUpdatingReflectionOpacity;
    bool  mIsUpdatingShadow;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOriginalReflectionLayerPositionInScaledCanvas;
    CALayer * mReflectionLayer;
    CALayer * mShadowLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) TSDReflection *reflection;
@property (nonatomic, readonly) CALayer *reflectionLayer;
@property (nonatomic, readonly) TSDShadow *shadow;
@property (nonatomic, readonly) CALayer *shadowLayer;
@property (readonly) Class superclass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)additionalLayersUnderLayer;
- (bool)canDrawShadowInOneStepWithChildren:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRectWithoutEffects;
- (void)createReflectionLayer;
- (void)dealloc;
- (id)description;
- (void)didUpdateEffectLayersForLayer:(id)arg1;
- (void)didUpdateLayer:(id)arg1;
- (void)disposeReflectionLayer;
- (void)drawGradientWithAlphaOverReflection:(struct CGContext { }*)arg1 applyingOpacity:(bool)arg2 reflectionSize:(struct CGSize { double x1; double x2; })arg3;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6;
- (void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffectsOrChildren:(struct CGContext { }*)arg1;
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawReflectionInContext:(struct CGContext { }*)arg1 drawChildren:(bool)arg2;
- (void)drawReflectionInContext:(struct CGContext { }*)arg1 withTransparencyLayer:(bool)arg2 applyingOpacity:(bool)arg3 shouldClipGradient:(bool)arg4 withBlock:(id /* block */)arg5;
- (void)drawReflectionIntoReflectionFrameInContext:(struct CGContext { }*)arg1 withTransparencyLayer:(bool)arg2 applyingOpacity:(bool)arg3 drawChildren:(bool)arg4;
- (void)drawShadowInContext:(struct CGContext { }*)arg1 withChildren:(bool)arg2 withDrawableOpacity:(bool)arg3;
- (void)invalidateShadowLayer;
- (bool)isInvisible;
- (struct CGImage { }*)newShadowImageWithSize:(struct CGSize { double x1; double x2; })arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(bool)arg4;
- (struct CGImage { }*)newShadowImageWithSize:(struct CGSize { double x1; double x2; })arg1 unflipped:(bool)arg2 withChildren:(bool)arg3;
- (double)opacity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_clipRectInRootForTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)p_drawReflectionInContext:(struct CGContext { }*)arg1;
- (void)p_drawReflectionIntoReflectionFrameInContext:(struct CGContext { }*)arg1 withTransparencyLayer:(bool)arg2 applyingOpacity:(bool)arg3 shouldClipGradient:(bool)arg4 withBlock:(id /* block */)arg5;
- (struct CGImage { }*)p_newReflectionImageWithSize:(struct CGSize { double x1; double x2; })arg1 applyOpacity:(bool)arg2 viewScale:(double)arg3 withBlock:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_rectWithEffectsAppliedToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 additionalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)pathSourceForSelectionHighlightBehavior;
- (void)positionShadowLayer:(id)arg1 forShadow:(id)arg2 withNaturalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)processChangedProperty:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectWithEffectsAppliedToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)reflection;
- (id)reflectionLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })reflectionLayerFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })reflectionLayerFrameInRoot;
- (void)setNeedsDisplay;
- (id)shadow;
- (id)shadowLayer;
- (bool)shouldHideSelectionHighlightDueToRectangularPath;
- (bool)shouldShowReflection;
- (bool)shouldShowSelectionHighlight;
- (bool)shouldShowShadow;
- (id)styledInfo;
- (id)styledLayout;
- (id)textureForContext:(id)arg1;
- (void)viewScaleDidChange;
- (void)willUpdateEffectLayersForLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;

@end
