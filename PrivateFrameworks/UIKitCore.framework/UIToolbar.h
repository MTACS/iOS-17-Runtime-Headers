
@interface UIToolbar : UIView <UIAccessibilityHUDGestureDelegate, UIBarPositioning, UIGestureRecognizerDelegatePrivate, _UIBarPositioningInternal> {
    id  __appearanceStorage;
    bool  _autoHidesToolbarInFullscreen;
    UIAccessibilityHUDGestureManager * _axHUDGestureManager;
    NSArray * _backgroundEffects;
    long long  _barPosition;
    UIColor * _barTintColor;
    UIBarButtonItem * _centerItem;
    bool  _centerTextButtons;
    UIToolbarAppearance * _compactAppearance;
    UIToolbarAppearance * _compactScrollEdgeAppearance;
    <_UIToolbarDelegateInternal> * _delegate;
    unsigned long long  _disableAutolayoutWarnings;
    NSArray * _items;
    UIToolbarAppearance * _scrollEdgeAppearance;
    UIView * _shadowView;
    UIToolbarAppearance * _standardAppearance;
    struct { 
        unsigned int barStyle : 3; 
        unsigned int barTranslucence : 3; 
        unsigned int isLocked : 1; 
        unsigned int linkedBeforeWhitetailAndInitializedFromCoder : 1; 
        unsigned int disableBlurTinting : 1; 
        unsigned int delegateRespondsToInterfaceOrientationWindowSelector : 1; 
        unsigned int appearanceHint : 2; 
    }  _toolbarFlags;
    _UIToolbarVisualProvider * _visualProvider;
}

@property (setter=_setAppearanceHint:, nonatomic) long long _appearanceHint;
@property (getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:, nonatomic, copy) NSString *_backdropViewLayerGroupName;
@property (setter=_setBackgroundTransitionProgress:, nonatomic) double _backgroundTransitionProgress;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (nonatomic, readonly) long long _barTranslucence;
@property (setter=_setDisableBlurTinting:, nonatomic) bool _disableBlurTinting;
@property (setter=_setHidesShadow:, nonatomic) bool _hidesShadow;
@property (nonatomic, readonly) long long _hintFromCurrentAppearance;
@property (setter=_setItemDistribution:, nonatomic) long long _itemDistribution;
@property (getter=_isLocked, setter=_setLocked:, nonatomic) bool _locked;
@property (setter=_setShadowView:, nonatomic, retain) UIView *_shadowView;
@property (nonatomic, readonly) bool _shouldStretchDuringCrossfadeTransition;
@property (nonatomic) bool autoHidesToolbarInFullscreen;
@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, readonly) long long barPosition;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic, retain) UIBarButtonItem *centerItem;
@property (nonatomic) bool centerTextButtons;
@property (nonatomic, copy) UIToolbarAppearance *compactAppearance;
@property (nonatomic, copy) UIToolbarAppearance *compactScrollEdgeAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIToolbarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (getter=isMinibar, nonatomic, readonly) bool minibar;
@property (nonatomic, copy) UIToolbarAppearance *scrollEdgeAppearance;
@property (nonatomic, copy) UIToolbarAppearance *standardAppearance;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isTranslucent, nonatomic) bool translucent;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_forceLegacyVisualProvider;
+ (Class)_visualProviderClassForToolbar:(id)arg1;
+ (id)_visualProviderForToolbar:(id)arg1;
+ (id)defaultButtonFont;
+ (double)defaultHeight;
+ (double)defaultHeightForBarSize:(int)arg1;

- (void).cxx_destruct;
- (void)_46877859;
- (id)__appearanceStorage;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (long long)_appearanceHint;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (id)_backdropViewLayerGroupName;
- (double)_backgroundTransitionProgress;
- (id)_backgroundView;
- (long long)_barPosition;
- (long long)_barTranslucence;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (double)_defaultAutolayoutSpacing;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_disableBlurTinting;
- (void)_doCommonToolbarInit;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (long long)_expectedInterfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfBarButtonItem:(id)arg1;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(bool)arg1 wasMinibar:(bool)arg2;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hidesShadow;
- (long long)_hintFromCurrentAppearance;
- (bool)_hostsLayoutEngineAllowsTAMIC_NO;
- (void)_installDefaultAppearance;
- (bool)_isLocked;
- (id)_itemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)_itemDistribution;
- (void)_largeContentViewerEnabledStatusDidChange:(id)arg1;
- (bool)_linkedBeforeWhitetailAndInitializedFromCoder;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionToolbarButtonsAndResetFontScaleAdjustment:(bool)arg1;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setAppearanceHint:(long long)arg1;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setBackgroundTransitionProgress:(double)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarPosition:(long long)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setDisableBlurTinting:(bool)arg1;
- (void)_setForceTopBarAppearance:(bool)arg1;
- (void)_setHidesShadow:(bool)arg1;
- (void)_setItemDistribution:(long long)arg1;
- (void)_setLocked:(bool)arg1;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_setShadowView:(id)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupAXHUDGestureIfNecessary;
- (id)_shadowView;
- (bool)_shouldDecodeSubviews;
- (bool)_shouldStretchDuringCrossfadeTransition;
- (bool)_subclassImplementsDrawRect;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_updateBackgroundView;
- (void)_updateBarForStyle;
- (bool)autoHidesToolbarInFullscreen;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backgroundEffects;
- (id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (long long)barPosition;
- (long long)barStyle;
- (id)barTintColor;
- (id)centerItem;
- (bool)centerTextButtons;
- (id)compactAppearance;
- (id)compactScrollEdgeAppearance;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (id)delegate;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initInView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withItemList:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isMinibar;
- (bool)isTranslucent;
- (id)items;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)scrollEdgeAppearance;
- (void)setAutoHidesToolbarInFullscreen:(bool)arg1;
- (void)setBackgroundEffects:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenterItem:(id)arg1;
- (void)setCenterTextButtons:(bool)arg1;
- (void)setCompactAppearance:(id)arg1;
- (void)setCompactScrollEdgeAppearance:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setScrollEdgeAppearance:(id)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setStandardAppearance:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)setTranslucent:(bool)arg1;
- (id)shadowImageForToolbarPosition:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)standardAppearance;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (id)configuration;
- (void)configureTransparent;
- (void)configureWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (id)ts_barButtonViews;
- (void)ts_setBackgroundEffects:(id)arg1;
- (void)ts_setBlurthroughBackground;
- (void)ts_setTransparentBackground;

@end
