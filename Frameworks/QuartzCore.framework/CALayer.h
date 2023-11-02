
@interface CALayer : NSObject <CAMediaTiming, CAPropertyInfo, NSSecureCoding, NTKDialMarkerView, PXGInternalReusableView, TSDContentsScaleProviding> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int magic; 
        void *layer; 
        void *_objc_observation_info; 
    }  _attr;
}

@property (copy) NSNumber *UICALayerRenderID;
@property (nonatomic, readonly) CALayer *_labelLayerToClipDuringBoundsSizeAnimation;
@property (nonatomic, readonly, retain) CALayer *_mapKit_mapLayer;
@property (setter=_ui_setLayoutRun:, nonatomic, retain) <_UIVectorTextLayoutRun> *_ui_layoutRun;
@property bool acceleratesDrawing;
@property (copy) NSDictionary *actions;
@property bool allowsDisplayCompositing;
@property bool allowsEdgeAntialiasing;
@property bool allowsGroupBlending;
@property bool allowsGroupOpacity;
@property bool allowsHitTesting;
@property (nonatomic) double alpha;
@property struct CGPoint { double x1; double x2; } anchorPoint;
@property double anchorPointZ;
@property bool autoreverses;
@property struct CGColor { }*backgroundColor;
@property struct CGSize { double x1; double x2; } backgroundColorPhase;
@property (copy) NSArray *backgroundFilters;
@property double beginTime;
@property struct CGColor { }*borderColor;
@property bool borderPathIsBounds;
@property double borderWidth;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property bool canDrawConcurrently;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } center;
@property bool clearsContext;
@property (retain) id compositingFilter;
@property (retain) id contents;
@property bool contentsAlignsToPixels;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsCenter;
@property bool contentsContainsSubtitles;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsDirtyRect;
@property bool contentsDither;
@property double contentsEDRStrength;
@property (copy) NSString *contentsFormat;
@property (copy) NSString *contentsGravity;
@property (readonly) long long contentsGravityEnum;
@property double contentsMaximumDesiredEDR;
@property struct CGColor { }*contentsMultiplyColor;
@property bool contentsOpaque;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (nonatomic, readonly) double contentsScale;
@property double contentsScale;
@property (copy) NSString *contentsScaling;
@property (copy) NSString *contentsSwizzle;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentsTransform;
@property bool continuousCorners;
@property (retain) id cornerContents;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cornerContentsCenter;
@property bool cornerContentsMasksEdges;
@property (copy) NSString *cornerCurve;
@property struct CACornerRadii { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; } cornerRadii;
@property double cornerRadius;
@property bool createsCompositingGroup;
@property (nonatomic, readonly, retain) CALayer *currentLayer;
@property (readonly, copy) NSString *debugDescription;
@property bool definesDisplayRegionOfInterest;
@property <CALayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property unsigned int disableUpdateMask;
@property (getter=isDoubleSided) bool doubleSided;
@property bool drawsAsynchronously;
@property double duration;
@property unsigned int edgeAntialiasingMask;
@property (copy) NSString *fillMode;
@property (copy) NSArray *filters;
@property bool flipsHorizontalAxis;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (getter=isFrozen) bool frozen;
@property float gain;
@property (getter=isGeometryFlipped) bool geometryFlipped;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (getter=isHidden) bool hidden;
@property bool hitTestsAsOpaque;
@property bool hitTestsContentsAlphaChannel;
@property (readonly) NSSet *identifiers;
@property bool inheritsTiming;
@property bool invertsMask;
@property bool invertsShadow;
@property (setter=is_setBlurRadius:, nonatomic) double is_blurRadius;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } jet_focusedFrame;
@property bool literalContentsCenter;
@property (copy) NSString *magnificationFilter;
@property (retain) CALayer *mask;
@property unsigned long long maskedCorners;
@property bool masksToBounds;
@property (copy) CAMeshTransform *meshTransform;
@property (copy) NSString *minificationFilter;
@property float minificationFilterBias;
@property double motionBlurAmount;
@property (copy) NSString *name;
@property bool needsDisplayOnBoundsChange;
@property bool needsLayoutOnGeometryChange;
@property float opacity;
@property (getter=isOpaque) bool opaque;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property struct CGPoint { double x1; double x2; } position;
@property bool preloadsCache;
@property (copy) NSArray *presentationModifiers;
@property bool punchoutShadow;
@property (nonatomic, readonly) bool px_supportsAlphaBlending;
@property bool rasterizationPrefersDisplayCompositing;
@property bool rasterizationPrefersWindowServerAwareBackdrops;
@property double rasterizationScale;
@property float repeatCount;
@property double repeatDuration;
@property struct CGColor { }*rimColor;
@property float rimOpacity;
@property bool rimPathIsBounds;
@property double rimWidth;
@property (copy) NSString *securityMode;
@property struct CGColor { }*shadowColor;
@property struct CGSize { double x1; double x2; } shadowOffset;
@property float shadowOpacity;
@property struct CGPath { }*shadowPath;
@property bool shadowPathIsBounds;
@property double shadowRadius;
@property bool shouldFlatten;
@property bool shouldRasterize;
@property bool shouldReflatten;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property struct CGSize { double x1; double x2; } sizeRequisition;
@property bool softRim;
@property bool sortsSublayers;
@property float speed;
@property (copy) NSArray *stateTransitions;
@property (copy) NSArray *states;
@property (copy) NSDictionary *style;
@property struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } sublayerTransform;
@property (copy) NSArray *sublayers;
@property (readonly) Class superclass;
@property (readonly) CALayer *superlayer;
@property (nonatomic) long long swiftUI_displayListID;
@property (nonatomic) unsigned long long swiftUI_viewTestProperties;
@property double timeOffset;
@property bool toneMapToStandardDynamicRange;
@property struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform;
@property bool treatRec709AsSRGB;
@property <CALayerDelegate> *unsafeUnretainedDelegate;
@property bool usesWebKitBehavior;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property bool wantsExtendedDynamicRangeContent;
@property double zPosition;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (void)CAMLParserEndElement:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (int (*)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; unsigned int x2 : 16; unsigned int x3 : 16; SEL x4[2]; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; unsigned int x2 : 16; unsigned int x3 : 16; SEL x4[2]; char *x5; struct __CFString {} *x6; }*)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (double)cornerCurveExpansionFactor:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (void)initialize;
+ (id)layer;
+ (id)layerWithRenderLayer:(void*)arg1;
+ (id)layerWithRenderLayer:(void*)arg1 options:(id)arg2;
+ (bool)needsDisplayForKey:(id)arg1;
+ (bool)needsLayoutForKey:(id)arg1;
+ (id)properties;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (bool)CAMLTypeSupportedForKey:(id)arg1;
- (id)CA_archivingValueForKey:(id)arg1;
- (bool)CA_validateValue:(id)arg1 forKey:(id)arg2;
- (bool)_canDisplayConcurrently;
- (void)_cancelAnimationTimer;
- (void)_colorSpaceDidChange;
- (void)_contentsFormatDidChange:(id)arg1;
- (bool)_continuousCorners;
- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)_dealloc;
- (bool)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(void*)arg1;
- (void)_display;
- (id)_initWithReference:(id)arg1;
- (id)_layoutHash;
- (int)_overrideImageFormat;
- (struct CGSize { double x1; double x2; })_preferredSize;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (id)_previousLayoutHash;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (unsigned int)_renderImageCopyFlags;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (struct CGColorSpace { }*)_retainColorSpace;
- (void)_saveCurrentLayoutHash;
- (bool)_scheduleAnimationTimer;
- (void)_scrollPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)_setPreviousLayoutHash:(id)arg1;
- (bool)_usesCornerRadii;
- (void)_validateLayoutHashHasChangedWithLayoutTime:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (bool)acceleratesDrawing;
- (id)actionForKey:(id)arg1;
- (id)actions;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addIdentifier:(id)arg1;
- (void)addPresentationModifier:(id)arg1;
- (void)addState:(id)arg1;
- (void)addSublayer:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (bool)allowsDisplayCompositing;
- (bool)allowsEdgeAntialiasing;
- (bool)allowsGroupBlending;
- (bool)allowsGroupOpacity;
- (bool)allowsHitTesting;
- (bool)allowsWeakReference;
- (id)ancestorSharedWithLayer:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (double)anchorPointZ;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (bool)autoreverses;
- (struct CGColor { }*)backgroundColor;
- (struct CGSize { double x1; double x2; })backgroundColorPhase;
- (id)backgroundFilters;
- (double)beginTime;
- (struct CGColor { }*)borderColor;
- (bool)borderPathIsBounds;
- (double)borderWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canDrawConcurrently;
- (void)clearHasBeenCommitted;
- (bool)clearsContext;
- (id)compositingFilter;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contents;
- (bool)contentsAlignsToPixels;
- (bool)contentsAreFlipped;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsCenter;
- (bool)contentsContainsSubtitles;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsDirtyRect;
- (bool)contentsDither;
- (double)contentsEDRStrength;
- (id)contentsFormat;
- (id)contentsGravity;
- (long long)contentsGravityEnum;
- (double)contentsMaximumDesiredEDR;
- (struct CGColor { }*)contentsMultiplyColor;
- (bool)contentsOpaque;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (double)contentsScale;
- (id)contentsScaling;
- (id)contentsSwizzle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentsTransform;
- (id)context;
- (bool)continuousCorners;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (id)cornerContents;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cornerContentsCenter;
- (bool)cornerContentsMasksEdges;
- (id)cornerCurve;
- (struct CACornerRadii { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })cornerRadii;
- (double)cornerRadius;
- (bool)createsCompositingGroup;
- (id)debugDescription;
- (bool)definesDisplayRegionOfInterest;
- (id)delegate;
- (id)dependentStatesOfState:(id)arg1;
- (unsigned int)disableUpdateMask;
- (void)display;
- (void)displayIfNeeded;
- (bool)doubleSided;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)drawsAsynchronously;
- (bool)drawsMipmapLevels;
- (double)duration;
- (unsigned int)edgeAntialiasingMask;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fillMode;
- (id)filters;
- (bool)flipsHorizontalAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (float)gain;
- (bool)getRendererInfo:(struct _CARenderRendererInfo { int x1; unsigned int x2; unsigned int x3; }*)arg1 size:(unsigned long long)arg2;
- (bool)hasBeenCommitted;
- (bool)hidden;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hitTestsAsOpaque;
- (bool)hitTestsContentsAlphaChannel;
- (id)identifiers;
- (bool)ignoresHitTesting;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (bool)inheritsTiming;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)invalidateContents;
- (bool)invertsMask;
- (bool)invertsShadow;
- (bool)isDescendantOf:(id)arg1;
- (bool)isDoubleSided;
- (bool)isFlipped;
- (bool)isFrozen;
- (bool)isGeometryFlipped;
- (bool)isHidden;
- (bool)isOpaque;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutBelowIfNeeded;
- (void)layoutIfNeeded;
- (bool)layoutIsActive;
- (void)layoutSublayers;
- (bool)literalContentsCenter;
- (id)magnificationFilter;
- (id)mask;
- (unsigned long long)maskedCorners;
- (bool)masksToBounds;
- (id)meshTransform;
- (id)minificationFilter;
- (float)minificationFilterBias;
- (id)modelLayer;
- (double)motionBlurAmount;
- (id)name;
- (bool)needsDisplay;
- (bool)needsDisplayOnBoundsChange;
- (bool)needsLayout;
- (bool)needsLayoutOnGeometryChange;
- (void*)observationInfo;
- (float)opacity;
- (bool)opaque;
- (id)optimizationOpportunities:(bool)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (bool)preloadsCache;
- (void)prepareContents;
- (id)presentationLayer;
- (id)presentationModifiers;
- (bool)punchoutShadow;
- (bool)rasterizationPrefersDisplayCompositing;
- (bool)rasterizationPrefersWindowServerAwareBackdrops;
- (double)rasterizationScale;
- (id)recursiveDescription;
- (void*)regionBeingDrawn;
- (oneway void)release;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeFromSuperlayer;
- (void)removeIdentifier:(id)arg1;
- (void)removePresentationModifier:(id)arg1;
- (void)removeState:(id)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (float)repeatCount;
- (double)repeatDuration;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;
- (struct CGColor { }*)rimColor;
- (float)rimOpacity;
- (bool)rimPathIsBounds;
- (double)rimWidth;
- (void)scrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)securityMode;
- (void)setAcceleratesDrawing:(bool)arg1;
- (void)setActions:(id)arg1;
- (void)setAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setAllowsDisplayCompositing:(bool)arg1;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (void)setAllowsGroupBlending:(bool)arg1;
- (void)setAllowsGroupOpacity:(bool)arg1;
- (void)setAllowsHitTesting:(bool)arg1;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnchorPointZ:(double)arg1;
- (void)setAutoreverses:(bool)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBackgroundColorPhase:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackgroundFilters:(id)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setBorderPathIsBounds:(bool)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCanDrawConcurrently:(bool)arg1;
- (void)setClearsContext:(bool)arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsAlignsToPixels:(bool)arg1;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsChanged;
- (void)setContentsContainsSubtitles:(bool)arg1;
- (void)setContentsDirtyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsDither:(bool)arg1;
- (void)setContentsEDRStrength:(double)arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setContentsMaximumDesiredEDR:(double)arg1;
- (void)setContentsMultiplyColor:(struct CGColor { }*)arg1;
- (void)setContentsOpaque:(bool)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(double)arg1;
- (void)setContentsScaling:(id)arg1;
- (void)setContentsSwizzle:(id)arg1;
- (void)setContentsTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setContinuousCorners:(bool)arg1;
- (void)setCornerContents:(id)arg1;
- (void)setCornerContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerContentsMasksEdges:(bool)arg1;
- (void)setCornerCurve:(id)arg1;
- (void)setCornerRadii:(struct CACornerRadii { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCreatesCompositingGroup:(bool)arg1;
- (void)setDefinesDisplayRegionOfInterest:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableUpdateMask:(unsigned int)arg1;
- (void)setDoubleSided:(bool)arg1;
- (void)setDrawsAsynchronously:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (void)setFillMode:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setFlipped:(bool)arg1;
- (void)setFlipsHorizontalAxis:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrozen:(bool)arg1;
- (void)setGain:(float)arg1;
- (void)setGeometryFlipped:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHitTestsAsOpaque:(bool)arg1;
- (void)setHitTestsContentsAlphaChannel:(bool)arg1;
- (void)setInheritsTiming:(bool)arg1;
- (void)setInvertsMask:(bool)arg1;
- (void)setInvertsShadow:(bool)arg1;
- (void)setLiteralContentsCenter:(bool)arg1;
- (void)setMagnificationFilter:(id)arg1;
- (void)setMask:(id)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setMasksToBounds:(bool)arg1;
- (void)setMeshTransform:(id)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (void)setMotionBlurAmount:(double)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayOnBoundsChange:(bool)arg1;
- (void)setNeedsLayout;
- (void)setNeedsLayoutOnGeometryChange:(bool)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setOpacity:(float)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreloadsCache:(bool)arg1;
- (void)setPresentationModifiers:(id)arg1;
- (void)setPunchoutShadow:(bool)arg1;
- (void)setRasterizationPrefersDisplayCompositing:(bool)arg1;
- (void)setRasterizationPrefersWindowServerAwareBackdrops:(bool)arg1;
- (void)setRasterizationScale:(double)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setRimColor:(struct CGColor { }*)arg1;
- (void)setRimOpacity:(float)arg1;
- (void)setRimPathIsBounds:(bool)arg1;
- (void)setRimWidth:(double)arg1;
- (void)setSecurityMode:(id)arg1;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (void)setShadowPathIsBounds:(bool)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShouldFlatten:(bool)arg1;
- (void)setShouldRasterize:(bool)arg1;
- (void)setShouldReflatten:(bool)arg1;
- (void)setSizeRequisition:(struct CGSize { double x1; double x2; })arg1;
- (void)setSoftRim:(bool)arg1;
- (void)setSortsSublayers:(bool)arg1;
- (void)setSpeed:(float)arg1;
- (void)setStyle:(id)arg1;
- (void)setSublayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setSublayers:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setToneMapToStandardDynamicRange:(bool)arg1;
- (void)setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setTreatRec709AsSRGB:(bool)arg1;
- (void)setUnsafeUnretainedDelegate:(id)arg1;
- (void)setUsesWebKitBehavior:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setWantsExtendedDynamicRangeContent:(bool)arg1;
- (void)setZPosition:(double)arg1;
- (struct CGColor { }*)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (float)shadowOpacity;
- (struct CGPath { }*)shadowPath;
- (bool)shadowPathIsBounds;
- (double)shadowRadius;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (bool)shouldFlatten;
- (bool)shouldRasterize;
- (bool)shouldReflatten;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeRequisition;
- (bool)softRim;
- (bool)sortsSublayers;
- (float)speed;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)stateWithName:(id)arg1;
- (id)style;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })sublayerTransform;
- (id)sublayers;
- (id)superlayer;
- (double)timeOffset;
- (bool)toneMapToStandardDynamicRange;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform;
- (bool)treatRec709AsSRGB;
- (id)unsafeUnretainedDelegate;
- (bool)usesWebKitBehavior;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (bool)wantsExtendedDynamicRangeContent;
- (double)zPosition;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (id)avkit_findFirstCALayerHost;
- (void)avkit_removeAllSublayerTransformAnimations;
- (id)avkit_sbdlpip_findFirstCALayerHost;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avkit_visibleRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inLayer:(id)arg2;
- (id)avkit_window;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapKit_mapLayer;
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;
- (void)_mapkit_setActionsToRemoveDefaultImplicitActions;
- (struct CGPoint { double x1; double x2; })convertDoublePoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertDoublePoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (id)currentLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (struct CGPoint { double x1; double x2; })doublePosition;
- (bool)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(bool)arg3;
- (bool)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(bool)arg4;
- (void)setDoubleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDoublePosition:(struct CGPoint { double x1; double x2; })arg1;

// Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox

- (id)queryDisplayName_Fig;

// Image: /System/Library/Frameworks/PDFKit.framework/PDFKit

- (id)PDFKitDumpToFile;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)SCNJSExportProtocol;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (void)setNoAnimationDelegate;
- (void)setSwiftUI_displayListID:(long long)arg1;
- (void)setSwiftUI_viewTestProperties:(unsigned long long)arg1;
- (long long)swiftUI_displayListID;
- (unsigned long long)swiftUI_viewTestProperties;

// Image: /System/Library/PrivateFrameworks/AmbientUI.framework/AmbientUI

+ (id)ringLayerWithBlendMode:(id)arg1 cornerRadius:(double)arg2 borderWidth:(double)arg3;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(bool)arg2;
- (id)mp_allAnimationsInTree;
- (id)mp_allLayersInTree;
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;
- (id)mp_basicPropertiesToCopy;
- (id)mp_deepCopyLayer;
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(bool)arg3 retinaScale:(double)arg4 animate:(bool)arg5;
- (id)mp_propertiesToCopy;

// Image: /System/Library/PrivateFrameworks/AppleIDSetupUI.framework/AppleIDSetupUI

- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(bool)arg2;
- (id)mp_allAnimationsInTree;
- (id)mp_allLayersInTree;
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;
- (id)mp_allLayersWithKindOfClass:(Class)arg1;
- (id)mp_basicPropertiesToCopy;
- (id)mp_deepCopyLayer;
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(bool)arg3 retinaScale:(double)arg4 animate:(bool)arg5;
- (id)mp_propertiesToCopy;
- (void)mp_setFillOfAllShapeLayersToColor:(struct CGColor { }*)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(bool)arg2;
- (id)mp_allAnimationsInTree;
- (id)mp_allLayersInTree;
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;
- (id)mp_allLayersWithKindOfClass:(Class)arg1;
- (id)mp_basicPropertiesToCopy;
- (id)mp_deepCopyLayer;
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(bool)arg3 retinaScale:(double)arg4 animate:(bool)arg5;
- (id)mp_propertiesToCopy;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic

- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(bool)arg2;
- (id)mp_allAnimationsInTree;
- (id)mp_allLayersInTree;
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;
- (id)mp_allLayersWithKindOfClass:(Class)arg1;
- (id)mp_basicPropertiesToCopy;
- (id)mp_deepCopyLayer;
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(bool)arg3 retinaScale:(double)arg4 animate:(bool)arg5;
- (id)mp_propertiesToCopy;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

- (id)_ak_nextAdditiveAnimationKeyWithKeyPath:(id)arg1;
- (id)ak_addAdditiveAnimation:(id)arg1;
- (id)ak_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2;
- (id)ak_additiveAnimationKeyPrefixForKeyPath:(id)arg1;
- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(bool)arg2;
- (id)mp_allAnimationsInTree;
- (id)mp_allLayersInTree;
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;
- (id)mp_basicPropertiesToCopy;
- (id)mp_deepCopyLayer;
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(bool)arg3 retinaScale:(double)arg4 animate:(bool)arg5;
- (id)mp_propertiesToCopy;

// Image: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI

- (void)cpui_enumerateSublayersWithBlock:(id /* block */)arg1;
- (void)cpui_startAnimating;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForMaskImage:(id)arg1 withOriginalSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })extraInsetsForImage:(id)arg1;
+ (double)maxInsetForImage:(id)arg1;

- (void)setMaskImage:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

- (void)cps_pauseAnimations;
- (void)cps_resumeAnimations;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (void)_ccuiEnumerateSubtreeUsingBlock:(id /* block */)arg1 stop:(bool*)arg2;
- (void)ccuiEnumerateSubtreeUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial

- (void)mt_applyVisualStying:(id)arg1;
- (void)mt_removeAllVisualStyling;
- (void)mt_replaceAllVisualStylingWithStyling:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet

+ (id)ringLayerWithBlendMode:(id)arg1 cornerRadius:(double)arg2 borderWidth:(double)arg3;

// Image: /System/Library/PrivateFrameworks/GPUToolsCapture.framework/GPUToolsCapture

- (void)dealloc;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id)_gkDescriptionWithChildren:(long long)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_gkParentSublayerTransform;
- (id)_gkRecursiveDescription;
- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(bool)arg2;
- (id)mp_allAnimationsInTree;
- (id)mp_allLayersInTree;
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;
- (id)mp_allLayersWithKindOfClass:(Class)arg1;
- (id)mp_basicPropertiesToCopy;
- (id)mp_deepCopyLayer;
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(bool)arg3 retinaScale:(double)arg4 animate:(bool)arg5;
- (id)mp_propertiesToCopy;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_addAnimationAdditively:(id)arg1 applyModelValue:(bool)arg2;
- (void)hu_applyModelValueFromAnimation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

- (bool)hasContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })jet_focusedFrame;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (void)safari_copyAnimationsFromLayer:(id)arg1 applyingModifications:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

- (void)addToParentView:(id)arg1;
- (double)alpha;
- (void)removeFromParent;
- (void)setAlpha:(double)arg1;

// Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit

- (void)_nu_recursiveDescriptionWithLevel:(long long)arg1 result:(id)arg2;
- (id)nu_layerRecursiveDescription;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)_pkui_createNextAdditiveAnimationKeyWithKeyPath:(id)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2;
- (id)pkui_additiveAnimationKeyPrefixForKeyPath:(id)arg1;
- (double)pkui_animateToOpacity:(double)arg1 withCompletion:(id /* block */)arg2;
- (double)pkui_elapsedDurationForAnimation:(id)arg1;
- (double)pkui_elapsedDurationForAnimationWithKey:(id)arg1;
- (bool)pkui_hasAdditiveAnimationForKeyPath:(id)arg1;
- (double)pkui_remainingDurationForAnimation:(id)arg1;
- (double)pkui_remainingDurationForAnimationWithKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (id)_is_blurFilter;
- (void)_is_removeBlurFilterIfNeeded;
- (void)_is_setBlurFilter:(id)arg1;
- (void)is_addBlurFilterIfNeeded;
- (void)is_addFilter:(id)arg1;
- (double)is_blurRadius;
- (void)is_removeFilter:(id)arg1;
- (void)is_setBlurRadius:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)px_setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)px_supportsAlphaBlending;
- (void)pxg_addToHostingView:(id)arg1;
- (void)pxg_addToScrollViewController:(id)arg1;
- (void)pxg_becomeReusable;
- (void)pxg_configureWithTexture:(id)arg1 geometry:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg2 info:(struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg3 style:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg4 textureInfo:(struct { float x1; }*)arg5 resizableCapInsets:(struct { float x1; float x2; float x3; float x4; })arg6 reusableViewInfo:(id)arg7 screenScale:(double)arg8 separateLayers:(bool)arg9;
- (bool)pxg_hasSuperview;
- (void)pxg_prepareForReuse;
- (void)pxg_removeFromSuperview;
- (void)pxg_shiftPosition:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldReloadForUserData:(id)arg1;
- (bool)shouldReuseWhenInvisible;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (void)pu_animateAlongsideView:(id)arg1 animations:(id /* block */)arg2;

- (id)_pu_uniqueAnimationKeyWithProposedKey:(id)arg1;
- (void)pu_setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)pu_setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;

// Image: /System/Library/PrivateFrameworks/ProximityAppleIDSetupUI.framework/ProximityAppleIDSetupUI

- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(bool)arg2;
- (id)mp_allAnimationsInTree;
- (id)mp_allLayersInTree;
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;
- (id)mp_allLayersWithKindOfClass:(Class)arg1;
- (id)mp_basicPropertiesToCopy;
- (id)mp_deepCopyLayer;
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(bool)arg3 retinaScale:(double)arg4 animate:(bool)arg5;
- (id)mp_propertiesToCopy;
- (void)mp_setFillOfAllShapeLayersToColor:(struct CGColor { }*)arg1;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

+ (struct CGSize { double x1; double x2; })smu_scaledSizeForSize:(struct CGSize { double x1; double x2; })arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;
+ (struct CGSize { double x1; double x2; })smu_scaledSizeForSize:(struct CGSize { double x1; double x2; })arg1 selectionStyle:(long long)arg2;

- (void)setSmu_allowsGroupBlending:(bool)arg1;
- (bool)smu_allowsGroupBlending;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameUsingCenterAndBounds;
- (void)setAnchorPointWithoutChangingPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrameUsingCenterAndBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore

- (id)_suic_addAdditiveAnimation:(id)arg1;
- (id)_suic_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2;
- (id)_suic_additiveAnimationKeyPrefixForKeyPath:(id)arg1;
- (id)_suic_nextAdditiveAnimationKeyWithKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (void)alignOnPixels;
- (void)animateMoveTo:(struct CGPoint { double x1; double x2; })arg1;
- (void)animateOpacityTo:(float)arg1;
- (void)animateResizeTo:(struct CGSize { double x1; double x2; })arg1;
- (void)animateTransformTo:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (bool)containsLayer:(id)arg1;
- (void)removeFromSuperlayerInstantly;
- (id)sublayerNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (Class)tsd_renderableClass;

- (void)addDistortAnimationWithVector:(struct CGPoint { double x1; double x2; })arg1;
- (void)addDragRotationAnimationWithDelta:(struct CGPoint { double x1; double x2; })arg1;
- (void)addFlipTransitionAnimationToLayer:(id)arg1;
- (void)addJiggleAnimation;
- (void)addJiggleAnimationWithDuration:(double)arg1 angle:(double)arg2;
- (void)addPerspectiveProjection;
- (void)addPerspectiveSublayerProjectionUsingScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)addPopInAnimation:(id)arg1;
- (void)addPopOutAnimation:(id)arg1;
- (void)addPulseAnimation;
- (void)addReflectionSubLayerWithHeight:(double)arg1 startOpacity:(double)arg2;
- (void)addResetAnimation;
- (void)addResetAnimationWithDelegate:(id)arg1;
- (void)addRippleAnimationFromPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)addRippleAnimationFromPosition:(struct CGPoint { double x1; double x2; })arg1 withScale:(double)arg2;
- (void)addRippleAnimationFromPosition:(struct CGPoint { double x1; double x2; })arg1 withScale:(double)arg2 addPerspectiveProjection:(bool)arg3;
- (void)addRotateInAnimationWithDuration:(double)arg1 delay:(double)arg2;
- (void)addSproingAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addWaveAnimation;
- (void)addWaveAnimationWithOffset:(struct CGSize { double x1; double x2; })arg1 zPosition:(double)arg2;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize { double x1; double x2; })arg2 zPosition:(double)arg3;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize { double x1; double x2; })arg2 zPosition:(double)arg3 addPerspectiveProjection:(bool)arg4;
- (void)addZoomAnimation;
- (void)addZoomAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addZoomAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1 startingScale:(double)arg2;
- (void)addZoomDownAnimation;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1 endingScale:(double)arg2 delay:(double)arg3;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)bakedLayer;
- (struct CGPoint { double x1; double x2; })center;
- (double)durationOfAllAnimations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameIncludingSublayers;
- (bool)hasPopInAnimation;
- (id)layerByAddingReflectionWithHeight:(double)arg1 startOpacity:(double)arg2;
- (void)makeStretchableLayerWithImage:(struct CGImage { }*)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;
- (void)makeStretchableLayerWithImage:(struct CGImage { }*)arg1 leftCap:(double)arg2 topCap:(double)arg3;
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(double)arg2 topCap:(double)arg3;
- (void)makeStretchableLayerWithoutImage:(struct CGImage { }*)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;
- (void)makeStretchableLayerWithoutImage:(struct CGImage { }*)arg1 leftCap:(double)arg2 topCap:(double)arg3;
- (struct CGImage { }*)newRasterizedImageRef;
- (double)opacityByApplyingAnimation:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (void)p_clearAllLayerDelegates;
- (double)p_perspectiveZDistanceUsingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)pause;
- (void)pauseAtTime:(double)arg1;
- (void)removeAllAnimationsOnLayerTree;
- (void)removeDistortAnimation;
- (void)removeDragRotationAnimation;
- (void)removeFlipTransitionAnimation;
- (void)removeJiggleAnimation;
- (void)removePopInAnimation;
- (void)removePopOutAnimation;
- (void)removePulseAnimation;
- (void)removeResetAnimation;
- (void)removeRippleAnimation;
- (void)removeRotateInAnimation;
- (void)removeSproingAnimation;
- (void)removeWaveAnimation;
- (void)removeWaveAnimationAnimated:(bool)arg1;
- (void)removeZoomAnimation;
- (void)removeZoomDownAnimation;
- (void)resume;
- (void)resumeAtTime:(double)arg1;
- (void)scale:(double)arg1 aroundAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 afterOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)scale:(double)arg1 aroundBoundsPoint:(struct CGPoint { double x1; double x2; })arg2 afterOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)setIfDifferentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)setNeedsLayoutForTilingLayers;
- (void)setTileContents:(id)arg1;
- (id)tileContentsLayer;
- (bool)tilingSafeHasContents;
- (void)tilingSafeSetSublayers:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform3DByApplyingAnimation:(id)arg1 atTime:(double)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 parentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 animationCache:(id)arg5;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformToScale:(double)arg1 aroundAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 afterOffset:(struct CGPoint { double x1; double x2; })arg3;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformToScale:(double)arg1 aroundBoundsPoint:(struct CGPoint { double x1; double x2; })arg2 afterOffset:(struct CGPoint { double x1; double x2; })arg3;
- (id)zoomDownAnimation;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (void)tsu_recursivelySetAllowsEdgeAntialiasing:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (void)setAnchorPointWithoutChangingPositionWithNewAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)ts_setContinuousCorners:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_labelLayerToClipDuringBoundsSizeAnimation;
- (void)_setLabelMasksToBoundsForAnimation:(bool)arg1;
- (id)_ui_layoutRun;
- (void)_ui_setLayoutRun:(id)arg1;
- (long long)compareTextEffectsOrdering:(id)arg1;
- (void)setPerspectiveDistance:(double)arg1;
- (bool)uiHasFilterWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (id)vk_autoFadeOutShapePointLayer;
- (id)vk_autoFadeOutShapeRectLayer;
- (id)vk_quadFromConvertingBoundsToLayer:(id)arg1;
- (id)vk_quadFromConvertingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

+ (id)_web_renderLayerWithContextID:(unsigned int)arg1 shouldPreserveFlip:(bool)arg2;

- (void)_web_clearContents;
- (bool)_web_maskContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_web_maskMayIntersectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_web_setLayerBoundsOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)_web_setLayerTopLeftPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)web_disableAllActions;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts

- (void)addCDEChartFlipAnimationFromPosition:(struct CGPoint { double x1; double x2; })arg1 beginTime:(double)arg2 toLeft:(bool)arg3 cameraDistance:(double)arg4;
- (void)addCDEChartFlipAnimationToFinalPosition:(struct CGPoint { double x1; double x2; })arg1 beginTime:(double)arg2 fromLeft:(bool)arg3 cameraDistance:(double)arg4;
- (void)addCDEEditorFlipInAnimationFromPosition:(struct CGPoint { double x1; double x2; })arg1 beginTime:(double)arg2 fromLeft:(bool)arg3 cameraDistance:(double)arg4;
- (void)addCDEEditorFlipOutAnimationToPosition:(struct CGPoint { double x1; double x2; })arg1 beginTime:(double)arg2 toLeft:(bool)arg3 cameraDistance:(double)arg4;
- (void)addCDEShieldInAnimation:(double)arg1;
- (void)addCDEShieldOutAnimation:(double)arg1;
- (void)addCallbackAnimationWithName:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 target:(id)arg4 selector:(SEL)arg5;
- (void)addPerspectiveProjectionWithDistance:(double)arg1;
- (void)addZoomAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1 speed:(double)arg2;
- (void)removeCDEChartFlipAnimationFromPosition;
- (void)removeCDEChartFlipAnimationToFinalPosition;
- (void)removeCDEEditorFlipInAnimation;
- (void)removeCDEEditorFlipOutAnimation;
- (void)removeCDEShieldInAnimation;
- (void)removeCDEShieldOutAnimation;
- (void)removeCallbackAnimationWithName:(id)arg1;
- (void)removeZoomAnimation;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

- (void)addPerspectiveProjection;
- (void)addPerspectiveSublayerProjectionUsingScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)addReflectionSubLayerWithHeight:(double)arg1 startOpacity:(double)arg2;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)bakedLayer;
- (id)bakedLayerForLayerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameIncludingSublayers;
- (struct CGImage { }*)newRasterizedImageRef;
- (struct CGImage { }*)newRasterizedImageRefForLayerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)opacityByApplyingAnimation:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (double)p_perspectiveZDistanceUsingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)pause;
- (void)pauseAtTime:(double)arg1;
- (void)removeAllAnimationsOnLayerTree;
- (void)resume;
- (void)resumeAtTime:(double)arg1;
- (void)setIfDifferentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform3DByApplyingAnimation:(id)arg1 atTime:(double)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 animationCache:(id)arg4;

@end
