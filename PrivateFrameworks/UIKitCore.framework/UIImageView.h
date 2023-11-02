
@interface UIImageView : UIView <CCUIPunchOutCompensating, CCUIPunchOutRendering, NUCrossFadeViewAnimatable, UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, _UIImageContentEffect, _UIImageContentLayoutTarget, _UIImageViewSymbolAnimationPresetClient> {
    bool  __animatesContents;
    bool  _adjustsImageWhenAncestorFocused;
    _UIImageViewSymbolAnimationPresetManager * _animationPresetManager;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedEdgeInsetsForEffects;
    bool  _edgeInsetsForEffectsAreValid;
    UILayoutGuide * _focusedFrameGuide;
    struct { 
        unsigned int canDrawContentIsValid : 1; 
        unsigned int canDrawContent : 1; 
        unsigned int needsUpdateState : 1; 
        unsigned int suppressPixelAlignment : 1; 
        unsigned int previousPixelAlignment : 1; 
        unsigned int previousEdgeAntialiasing : 1; 
        unsigned int guardAgainstDegenerateBaselineCalculation : 1; 
        unsigned int preferredImageDynamicRange : 2; 
    }  _imageViewFlags;
    UITraitCollection * _lastResolvedImageViewTraitCollection;
    bool  _masksFocusEffectToContents;
    long long  _preferredVibrancy;
    double  _previousBaselineOffsetFromBottom;
    double  _previousFirstBaselineOffsetFromTop;
    _UIImageViewStorage * _storage;
    bool  _templateSettingsAreInvalid;
}

@property (setter=_setAnimatesContents:, nonatomic) bool _animatesContents;
@property (setter=_setDefaultRenderingMode:, nonatomic) long long _defaultRenderingMode;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _edgeInsetsForEffects;
@property (setter=_setEdgeInsetsForEffectsAreValid:, nonatomic) bool _edgeInsetsForEffectsAreValid;
@property (setter=_setGuardAgainstDegenerateBaselineCalculation:, nonatomic) bool _guardAgainstDegenerateBaselineCalculation;
@property (nonatomic, readonly) bool _hasContentGravity;
@property (nonatomic, readonly) _UIImageLoader *_imageLoader;
@property (nonatomic, readonly) _UIStackedImageContainerView *_layeredImageContainer;
@property (setter=_setLayeredImageCornerRadius:, nonatomic) double _layeredImageCornerRadius;
@property (nonatomic, readonly) bool _layoutShouldFlipHorizontalOrientations;
@property (setter=_setMasksTemplateImages:, nonatomic) bool _masksTemplateImages;
@property (setter=_setOverridingSymbolConfiguration:, nonatomic, retain) UIImageSymbolConfiguration *_overridingSymbolConfiguration;
@property (setter=_setPlaceholderView:, nonatomic, retain) UIView *_placeholderView;
@property (setter=_setPreferredVibrancy:, nonatomic) long long _preferredVibrancy;
@property (setter=_setRBSymbolLayer:, nonatomic, retain) RBSymbolLayer *_rbSymbolLayer;
@property (nonatomic, readonly) bool _supportsContents;
@property (setter=_setSuppressPixelAlignment:, nonatomic) bool _suppressPixelAlignment;
@property (setter=_setTemplateImageRenderingEffects:, nonatomic) unsigned long long _templateImageRenderingEffects;
@property (nonatomic, readonly) bool _templateSettingsAreInvalid;
@property (nonatomic) bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) bool adjustsImageWhenAncestorFocused;
@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic) double animationDuration;
@property (nonatomic, copy) NSArray *animationImages;
@property (nonatomic) long long animationRepeatCount;
@property (setter=ccui_setCompensationAlpha:, nonatomic) double ccui_compensationAlpha;
@property (nonatomic, readonly) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int drawMode;
@property (readonly) UILayoutGuide *focusedFrameGuide;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, copy) NSArray *highlightedAnimationImages;
@property (nonatomic, retain) UIImage *highlightedImage;
@property (nonatomic, retain) UIImage *image;
@property (readonly) UILayoutGuide *imageContentGuide;
@property (nonatomic) long long imageContentMode;
@property (nonatomic, readonly) long long imageDynamicRange;
@property (nonatomic) bool masksFocusEffectToContents;
@property (nonatomic, readonly) UIView *overlayContentView;
@property (nonatomic, readonly) double preferredContentScaleFactor;
@property (nonatomic) long long preferredImageDynamicRange;
@property (nonatomic, retain) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, readonly) long long semanticContentAttribute;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageSymbolConfiguration *symbolConfiguration;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic, copy) UIColor *vk_contentTintColor;
@property (nonatomic, retain) UIImageSymbolConfiguration *vuiSymbolConfiguration;
@property (nonatomic, retain) UIColor *vuiTintColor;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_sharedDecodingQueue;

- (void).cxx_destruct;
- (id)_activeImage;
- (id)_adaptiveImageForImage:(id)arg1 assignedImage:(id)arg2 currentImage:(id)arg3 hasAdapted:(bool*)arg4;
- (void)_addSymbolEffect:(id)arg1;
- (void)_addSymbolEffect:(id)arg1 animated:(bool)arg2;
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_animatesContents;
- (id)_applyImageEffectsToCIImage:(id)arg1 effectiveTintColor:(id)arg2;
- (void)_applyImageLayout:(id)arg1 toLayer:(id)arg2;
- (void)_applySettingsForLegibilityStyle:(long long)arg1;
- (double)_baselineOffsetFromBottom;
- (void)_baselineOffsetParametersDidChangeHasBaselinePropertyChanged:(bool)arg1;
- (struct { double x1; double x2; })_baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_cachedPretiledImageForImage:(id)arg1;
- (bool)_canDrawContent;
- (id)_checkHighlightedImageForAdaptation:(id)arg1 hadAdapted:(bool*)arg2;
- (id)_checkImageForAdaptation:(id)arg1 hasAdapted:(bool*)arg2;
- (void)_cleanUpForStopAnimating;
- (void)_clearPretiledImageCacheForImage:(id)arg1;
- (void)_configureForLayeredImage:(id)arg1;
- (id)_contentsMultiplyColorForEffectiveTintColor:(id)arg1;
- (id)_currentAnimationKeyframeImage;
- (id)_currentHighlightedImage;
- (id)_currentImage;
- (void)_decodeQ_imageLoader:(id)arg1 decodeImage:(id)arg2 layout:(id)arg3;
- (id)_decompressingImageForType:(unsigned long long)arg1;
- (long long)_defaultRenderingMode;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didStopBeingDisplayedInPointerContentEffect;
- (bool)_displayImageAsLayered:(id)arg1;
- (void)_drawImageEffectsForImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 effectiveTintColor:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForEffects;
- (bool)_edgeInsetsForEffectsAreValid;
- (id)_effectForRenderingSource:(id)arg1;
- (long long)_effectiveRenderingModeForSource:(id)arg1 symbolConfiguration:(id)arg2;
- (id)_effectiveTintColorWithImage:(id)arg1 symbolConfiguration:(id)arg2;
- (id)_existingOverlayView;
- (double)_firstBaselineOffsetFromTop;
- (id)_generateBackdropMaskImage;
- (bool)_getDrawModeCompositeOperation:(int*)arg1 whiteComponent:(double*)arg2 drawingAlpha:(double*)arg3;
- (bool)_guardAgainstDegenerateBaselineCalculation;
- (bool)_hasBaseline;
- (bool)_hasContentGravity;
- (bool)_hasInstalledContentsAnimation;
- (bool)_hasNonDefaultSymbolAnimatorState;
- (bool)_hasReasonToUseRBSymbolLayerForImage:(id)arg1;
- (id)_imageContentGuideAllowingCreation:(bool)arg1;
- (void)_imageContentParametersDidChange;
- (id)_imageLoader;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateImageLayouts;
- (void)_invalidateResolvedImages;
- (void)_invalidateTemplateSettings;
- (bool)_isHasBaselinePropertyChangeable;
- (void)_kickoffQ_beginLoadingWithImageLoader:(id)arg1;
- (id)_layeredImageContainer;
- (double)_layeredImageCornerRadius;
- (id)_layoutForImage:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_layoutForImage:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2 cachePerSize:(bool)arg3 forBaselineOffset:(bool)arg4;
- (bool)_layoutShouldFlipHorizontalOrientations;
- (void)_loadImage:(id)arg1 delegate:(id)arg2;
- (void)_loadImageWithURL:(id)arg1;
- (void)_mainQ_beginLoadingIfApplicable;
- (void)_mainQ_imageLoader:(id)arg1 finishedOrSkippedDecodingImage:(id)arg2 layout:(id)arg3;
- (void)_mainQ_imageLoader:(id)arg1 finishedWithImage:(id)arg2 error:(id)arg3;
- (void)_mainQ_resetForLoader:(id)arg1 delegate:(id)arg2;
- (bool)_masksTemplateImages;
- (id)_materialForTintColor:(id)arg1;
- (double)_maximumEDRForDynamicRange:(long long)arg1;
- (bool)_needsImageEffectsForImage:(id)arg1;
- (bool)_needsImageEffectsForImage:(id)arg1 symbolConfiguration:(id)arg2 suppressColorizing:(bool)arg3;
- (id)_overridingSymbolConfiguration;
- (id)_placeholderView;
- (long long)_preferredVibrancy;
- (id)_rbSymbolLayer;
- (bool)_recomputePretilingState;
- (void)_removeAllSymbolEffects;
- (void)_removeAllSymbolEffectsAnimated:(bool)arg1;
- (void)_removeLayerAnimations;
- (void)_removeSymbolEffect:(id)arg1;
- (void)_removeSymbolEffect:(id)arg1 animated:(bool)arg2;
- (id)_renditionForSource:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 symbolConfiguration:(id)arg3 withRenditionResult:(id)arg4 lazy:(bool)arg5;
- (bool)_resolveImagesWithPreviouslyDisplayedImage:(id)arg1;
- (id)_resolvedImageFromImage:(id)arg1;
- (double)_scaleFactorForImage;
- (void)_setAnimatesContents:(bool)arg1;
- (void)_setDecompressingImage:(id)arg1 forType:(unsigned long long)arg2;
- (void)_setDefaultRenderingMode:(long long)arg1;
- (void)_setEdgeInsetsForEffectsAreValid:(bool)arg1;
- (void)_setGuardAgainstDegenerateBaselineCalculation:(bool)arg1;
- (void)_setImage:(id)arg1 invalidatingPendingSymbolTransitions:(bool)arg2;
- (bool)_setImageViewContents:(id)arg1;
- (bool)_setImageViewContentsForAnimatedImage:(id)arg1;
- (bool)_setImageViewContentsForCIImageBackedImage:(id)arg1;
- (void)_setLayeredImageContainer:(id)arg1;
- (void)_setLayeredImageCornerRadius:(double)arg1;
- (void)_setMasksTemplateImages:(bool)arg1;
- (void)_setNeedsUpdateState;
- (void)_setOverlayContentView:(id)arg1;
- (void)_setOverridingSymbolConfiguration:(id)arg1;
- (void)_setPlaceholderView:(id)arg1;
- (void)_setPreferredVibrancy:(long long)arg1;
- (void)_setRBSymbolLayer:(id)arg1;
- (void)_setSuppressPixelAlignment:(bool)arg1;
- (void)_setSymbolImage:(id)arg1 withSymbolTransition:(id)arg2;
- (void)_setTemplateImageRenderingEffects:(unsigned long long)arg1;
- (void)_setViewGeometry:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forMetric:(int)arg2;
- (void)_setupRBSymbolLayerWithSymbolImageLayout:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_shouldDrawVectorContentDirectly;
- (bool)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize { double x1; double x2; })arg1 oldSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)_shouldTreatImageAsTemplate:(id)arg1;
- (void)_stopLoading;
- (bool)_supportsContents;
- (bool)_suppressPixelAlignment;
- (id)_symbolConfigurationForImage:(id)arg1;
- (id)_symbolConfigurationForSource:(id)arg1;
- (void)_teardownLayeredImage;
- (void)_teardownRBSymbolLayerIfNeeded;
- (unsigned long long)_templateImageRenderingEffects;
- (bool)_templateSettingsAreInvalid;
- (void)_templateSettingsDidChange;
- (void)_updateContentsMultiplyColorAndSwizzleFromLayout:(id)arg1;
- (void)_updateHDRFlags:(bool)arg1;
- (void)_updateImageViewForOldImage:(id)arg1 newImage:(id)arg2;
- (void)_updateLayeredImageIsFocusedWithFocusedView:(id)arg1 focusAnimationCoordinator:(id)arg2;
- (void)_updateMasking;
- (void)_updateMaterialForImage:(id)arg1;
- (void)_updatePretiledImageCacheForImage:(id)arg1;
- (void)_updateResolvedImages;
- (void)_updateState;
- (void)_updateStateIfRBSymbolLayerNoLongerNeeded;
- (void)_updateTemplateProperties;
- (void)_updateVisibilityAndFrameOfPlaceholderView;
- (bool)_usesRenderBoxToRenderImage:(id)arg1 withLayout:(id)arg2;
- (void)_willBeginBeingDisplayedInPointerContentEffect;
- (void)addSymbolEffect:(id)arg1;
- (void)addSymbolEffect:(id)arg1 options:(id)arg2;
- (void)addSymbolEffect:(id)arg1 options:(id)arg2 animated:(bool)arg3;
- (void)addSymbolEffect:(id)arg1 options:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (bool)adjustsImageSizeForAccessibilityContentSizeCategory;
- (bool)adjustsImageWhenAncestorFocused;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (double)animationDuration;
- (id)animationImages;
- (void)animationPresetManager:(id)arg1 didActivateEffect:(id)arg2 options:(id)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)animationPresetManager:(id)arg1 didDiscardPendingContentTransition:(id)arg2;
- (void)animationPresetManager:(id)arg1 didRemoveEffect:(id)arg2 options:(id)arg3 animated:(bool)arg4 completion:(id /* block */)arg5 wasActive:(bool)arg6;
- (void)animationPresetManager:(id)arg1 didSetHiddenness:(bool)arg2 usingEffect:(id)arg3 options:(id)arg4 animated:(bool)arg5 completion:(id /* block */)arg6;
- (void)animationPresetManager:(id)arg1 didSetScale:(int)arg2 usingEffect:(id)arg3 options:(id)arg4 animated:(bool)arg5 completion:(id /* block */)arg6;
- (long long)animationRepeatCount;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (unsigned long long)defaultAccessibilityTraits;
- (id)description;
- (void)displayLayer:(id)arg1;
- (unsigned int)drawMode;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)focusedFrameGuide;
- (id)highlightedAnimationImages;
- (id)highlightedImage;
- (id)image;
- (id)imageContentGuide;
- (long long)imageDynamicRange;
- (struct CGImage { }*)imageRef;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (bool)isAccessibilityElementByDefault;
- (bool)isAnimating;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isHighlighted;
- (bool)isTransparentFocusItem;
- (id)largeContentImage;
- (void)layoutSubviews;
- (bool)masksFocusEffectToContents;
- (id)midlineGuide;
- (id)overlayContentView;
- (double)preferredContentScaleFactor;
- (long long)preferredImageDynamicRange;
- (id)preferredSymbolConfiguration;
- (void)removeAllSymbolEffects;
- (void)removeAllSymbolEffectsWithOptions:(id)arg1;
- (void)removeAllSymbolEffectsWithOptions:(id)arg1 animated:(bool)arg2;
- (void)removeSymbolEffectOfType:(id)arg1;
- (void)removeSymbolEffectOfType:(id)arg1 options:(id)arg2;
- (void)removeSymbolEffectOfType:(id)arg1 options:(id)arg2 animated:(bool)arg3;
- (void)removeSymbolEffectOfType:(id)arg1 options:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (bool)scalesLargeContentImage;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg1;
- (void)setAdjustsImageWhenAncestorFocused:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationImages:(id)arg1;
- (void)setAnimationRepeatCount:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCGImageRef:(struct CGImage { }*)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setDrawMode:(unsigned int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMasksFocusEffectToContents:(bool)arg1;
- (void)setPreferredImageDynamicRange:(long long)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSymbolConfiguration:(id)arg1;
- (void)setSymbolImage:(id)arg1 withContentTransition:(id)arg2;
- (void)setSymbolImage:(id)arg1 withContentTransition:(id)arg2 options:(id)arg3;
- (void)setSymbolImage:(id)arg1 withContentTransition:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (id)symbolConfiguration;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useBlockyMagnificationInClassic;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

+ (id)_inui_imageViewWithImage:(id)arg1;

- (void)_inui_setTintColor:(id)arg1;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

- (void)_lp_setTintColor:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (long long)imageContentMode;
- (void)setImageContentMode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

+ (id)imageViewWithImage:(id)arg1;

- (long long)_nui_baselineViewType;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (id)cps_imageViewWithImage:(id)arg1 tintColor:(id)arg2 backgroundColor:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (double)ccui_compensationAlpha;
- (bool)ccui_configureForPunchOutRendering:(bool)arg1;
- (id)ccui_punchOutCompensatingCopy;
- (void)ccui_setCompensationAlpha:(double)arg1;
- (void)ccui_updatePunchOutCompensationIfNecessary;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (double)largeLogoViewDimension;
+ (double)logoDimensionForImageViewSize:(struct CGSize { double x1; double x2; })arg1;
+ (double)logoInsetForImageViewSize:(struct CGSize { double x1; double x2; })arg1;
+ (double)mediumLogoViewDimension;
+ (double)providerDetailLogoViewDimension;
+ (double)smallLogoViewDimension;

- (void)applyAccountLogoStyleForIsMonogram:(bool)arg1 imageViewSize:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

- (void)mt_applyVisualStyling:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (void)mru_applyVisualStylingWithColor:(id)arg1 alpha:(double)arg2 blendMode:(long long)arg3;

// Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI

- (id)_imageFromImage:(id)arg1 scaledToSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setArtworkCatalog:(id)arg1 withPlaceholderImage:(id)arg2 withDesiredSize:(struct CGSize { double x1; double x2; })arg3;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

- (void)nu_crossFadeViewClearVisibleState;
- (void)nu_crossFadeViewSetValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_alignmentRect;
- (struct CGSize { double x1; double x2; })pkui_alignmentSize;
- (void)pkui_setAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (void)PG_updateVibrancyEffectForTintColor;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (id)pu_extractPlayOverlayBackgroundImageFromCenter:(struct CGPoint { double x1; double x2; })arg1 asynchronously:(bool)arg2 handler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore

- (void)sts_addAnimationsForSTSAnimatedImageInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI

+ (id)skui_imageViewForAuthGroup:(id)arg1 parentSize:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

+ (void)tmlLoadCategory;

- (void)tmlTraitCollectionDidChange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

+ (id)vui_imageViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)vui_imageViewWithImage:(id)arg1;

- (void)setVuiSymbolConfiguration:(id)arg1;
- (void)setVuiTintColor:(id)arg1;
- (id)vuiSymbolConfiguration;
- (id)vuiTintColor;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (void)setVk_contentTintColor:(id)arg1;
- (id)vk_contentTintColor;

@end
