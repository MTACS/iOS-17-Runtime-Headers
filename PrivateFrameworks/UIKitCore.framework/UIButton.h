
@interface UIButton : UIControl <ABText, CAMAccessibilityHUDItemProvider, MUActivityObserving, NSCoding, TSDPlatformButtonProtocol, UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, UIButtonControl, UIGestureRecognizerDelegate, UIMenuForcedAutomaticSelectionDelegate, _UISelectionInteractionDelegate> {
    long long  __imageContentMode;
    UIColor * __plainButtonBackgroundColor;
    NSISEngine * _activeSizeToFitLayoutEngine;
    struct { 
        unsigned int reversesTitleShadowWhenHighlighted : 1; 
        unsigned int adjustsImageWhenHighlighted : 1; 
        unsigned int adjustsImageWhenDisabled : 1; 
        unsigned int autosizeToFit : 1; 
        unsigned int disabledDimsImage : 1; 
        unsigned int showsTouchWhenHighlighted : 1; 
        unsigned int buttonType : 8; 
        unsigned int role : 8; 
        unsigned int shouldHandleScrollerMouseEvent : 1; 
        unsigned int titleFrozen : 1; 
        unsigned int resendTraitToImageViews : 2; 
        unsigned int animateNextHighlightChange : 1; 
        unsigned int blurEnabled : 1; 
        unsigned int visualEffectViewEnabled : 1; 
        unsigned int suppressAccessibilityUnderline : 1; 
        unsigned int requiresLayoutForPropertyChange : 1; 
        unsigned int needsTitleViewDefaultColorUpdate : 1; 
        unsigned int adjustsImageSizeForAccessibilityContentSizeCategory : 1; 
        unsigned int disableAutomaticTitleAnimations : 1; 
        unsigned int overridesRectAccessors : 1; 
        unsigned int hasActivePointerEffect : 1; 
        unsigned int automaticallyUpdatesConfiguration : 1; 
        unsigned int changesSelectionAsPrimaryAction : 1; 
    }  _buttonFlags;
    struct { 
        unsigned int isPopulated : 1; 
        unsigned int implementsButton : 1; 
        unsigned int implementsModernProvider : 1; 
        unsigned int implementsArchiving : 1; 
        unsigned int implementsEffectSupport : 1; 
        unsigned int implementsDeprecatedAPISupport : 1; 
        unsigned int implementsDeprecatedSPISupport : 1; 
        unsigned int preferredBehavioralStyle : 4; 
    }  _buttonVisualProviderFlags;
    <_UIButtonConfigurationShim> * _configuration;
    id /* block */  _configurationUpdateHandler;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    NSMutableDictionary * _contentLookup;
    unsigned long long  _externalFlatEdge;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageEdgeInsets;
    bool  _initialized;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _internalTitlePaddingInsets;
    unsigned long long  _lastDrawingControlState;
    UIFont * _lazyTitleViewFont;
    bool  _lazyTitleViewFontIsDefaultForIdiom;
    UIMenu * _menu;
    id /* block */  _menuProvider;
    id /* block */  _pointerStyleProvider;
    long long  _preferredMenuElementOrder;
    bool  _prefersHorizontalMenuAttachment;
    UITapGestureRecognizer * _selectGestureRecognizer;
    _UISelectionInteraction * _selectionInteraction;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _titleEdgeInsets;
    <UIButtonVisualProvider> * _visualProvider;
}

@property (setter=_setActiveSizeToFitLayoutEngine:, nonatomic) NSISEngine *_activeSizeToFitLayoutEngine;
@property (setter=_setAutomaticallyUpdatesButtonConfiguration:, nonatomic) bool _automaticallyUpdatesButtonConfiguration;
@property (nonatomic, readonly) bool _calloutBar_shouldHideTitleLabel;
@property (setter=_setChangesSelectionAsPrimaryAction:, nonatomic) bool _changesSelectionAsPrimaryAction;
@property (setter=_setConfiguration:, nonatomic, copy) _UIButtonConfiguration *_configuration;
@property (nonatomic, readonly, copy) _UIButtonConfigurationState *_configurationState;
@property (setter=_setConfigurationUpdateHandler:, nonatomic, copy) id /* block */ _configurationUpdateHandler;
@property (setter=_setCurrentConfiguration:, nonatomic, retain) <_UIButtonConfigurationShim> *_currentConfiguration;
@property (nonatomic, readonly, retain) UIColor *_currentImageColor;
@property (getter=_disableAutomaticTitleAnimations, setter=_setDisableAutomaticTitleAnimations:, nonatomic) bool _disableAutomaticTitleAnimations;
@property (setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge;
@property (setter=_setImageContentMode:, nonatomic) long long _imageContentMode;
@property (setter=_setInternalTitlePaddingInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _internalTitlePaddingInsets;
@property (setter=_setIsMicButton:, nonatomic) bool _isMicButton;
@property (nonatomic, retain) NSString *_mapsui_title;
@property (nonatomic, readonly) bool _menuEnabled;
@property (setter=_setMenuProvider:, nonatomic, copy) id /* block */ _menuProvider;
@property (getter=_plainButtonBackgroundColor, setter=_setPlainButtonBackgroundColor:, nonatomic, retain) UIColor *_plainButtonBackgroundColor;
@property (nonatomic, readonly) UILabel *_subtitleLabel;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _visualBounds;
@property (nonatomic, readonly, retain) <UIButtonVisualProvider> *_visualProvider;
@property (setter=_setWantsAccessibilityUnderline:, nonatomic) bool _wantsAccessibilityUnderline;
@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic) bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) bool adjustsImageWhenDisabled;
@property (nonatomic) bool adjustsImageWhenHighlighted;
@property (nonatomic) bool automaticallyUpdatesConfiguration;
@property (nonatomic, readonly) unsigned long long behavioralStyle;
@property (nonatomic, readonly) long long buttonType;
@property (nonatomic) bool changesSelectionAsPrimaryAction;
@property (nonatomic, copy) UIButtonConfiguration *configuration;
@property (nonatomic, copy) id /* block */ configurationUpdateHandler;
@property (getter=_isContentBackgroundHidden, setter=_setContentBackgroundHidden:, nonatomic) bool contentBackgroundHidden;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic, readonly) NSAttributedString *currentAttributedTitle;
@property (nonatomic, readonly) UIImage *currentBackgroundImage;
@property (nonatomic, readonly) UIImage *currentImage;
@property (nonatomic, readonly) UIImageSymbolConfiguration *currentPreferredSymbolConfiguration;
@property (nonatomic, readonly) NSString *currentTitle;
@property (nonatomic, readonly) UIColor *currentTitleColor;
@property (nonatomic, readonly) UIColor *currentTitleShadowColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (getter=isHeld, nonatomic, readonly) bool held;
@property (getter=isHovered, nonatomic, readonly) bool hovered;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageEdgeInsets;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) double lastBaselineFromBottom;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic, copy) UIMenu *menu;
@property (getter=isPointerInteractionEnabled, nonatomic) bool pointerInteractionEnabled;
@property (nonatomic, copy) id /* block */ pointerStyleProvider;
@property (nonatomic) unsigned long long preferredBehavioralStyle;
@property (nonatomic) long long preferredMenuElementOrder;
@property (nonatomic) bool prefersHorizontalMenuAttachment;
@property (nonatomic) bool reversesTitleShadowWhenHighlighted;
@property (nonatomic) long long role;
@property (nonatomic) bool roundedFont;
@property (nonatomic, retain) _UISelectionInteraction *selectionInteraction;
@property (nonatomic) bool showsTouchWhenHighlighted;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleEdgeInsets;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } titleShadowOffset;
@property (nonatomic, copy) NSString *vs_normalTitle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_allowsUnsupportedMacIdiomBehavior;
+ (bool)_buttonTypeIsModernUI:(long long)arg1;
+ (bool)_buttonTypeIsSystemProvided:(long long)arg1;
+ (bool)_buttonTypeIsiOSSystemProvided:(long long)arg1;
+ (id)_defaultBackgroundImageColorForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultBackgroundImageNameForType:(long long)arg1 andState:(unsigned long long)arg2 compact:(bool)arg3;
+ (id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_defaultImageColorForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2 withConfiguration:(id)arg3;
+ (id)_defaultImageNameForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (double)_defaultNeighborSpacingForAxis:(long long)arg1;
+ (id)_defaultNormalTitleColor;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultSymbolConfigurationForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultSymbolConfigurationForType:(long long)arg1 andState:(unsigned long long)arg2 compact:(bool)arg3;
+ (id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2 isTintColor:(bool*)arg3;
+ (void)_registerVisualProviderClass:(Class)arg1 forIdiom:(long long)arg2;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(bool)arg1;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3 baseAlpha:(double)arg4;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3 highlightBlock:(id /* block */)arg4;
+ (id)_systemButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (Class)_visualProviderClass;
+ (id)buttonWithConfiguration:(id)arg1 primaryAction:(id)arg2;
+ (id)buttonWithType:(long long)arg1;
+ (id)buttonWithType:(long long)arg1 primaryAction:(id)arg2;
+ (id)systemButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)systemButtonWithPrimaryAction:(id)arg1;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (bool)_accessibilityShouldActivateOnHUDLift;
- (id)_activeSizeToFitLayoutEngine;
- (double)_additionalBaselineSpacingForEdge:(int)arg1;
- (void)_alignmentRectInsetsHaveChangedForChildImageView:(id)arg1;
- (id)_allButtonContent;
- (bool)_alwaysHandleScrollerMouseEvent;
- (void)_applyCarPlaySystemButtonCustomizations;
- (id)_archivableContent:(id*)arg1;
- (id)_attributedSubtitleForState:(unsigned long long)arg1;
- (id)_attributedTitleForState:(unsigned long long)arg1;
- (id)_attributedTitleForState:(unsigned long long)arg1 adjustedToTraitCollection:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(id)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
- (bool)_automaticallyUpdatesButtonConfiguration;
- (id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(bool*)arg2;
- (id)_backgroundView;
- (double)_baselineOffsetFromBottom;
- (double)_baselineOffsetFromNearestEdgeForLayoutAttribute:(long long)arg1;
- (struct { double x1; double x2; })_baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_blurEnabled;
- (id)_borderColorForState:(unsigned long long)arg1;
- (long long)_buttonType;
- (bool)_calloutBar_shouldHideTitleLabel;
- (bool)_canHaveTitle;
- (bool)_changesSelectionAsPrimaryAction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippedHighlightBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_combinedContentPaddingInsets;
- (void)_commonInitForPrimaryAction:(id)arg1;
- (id)_configuration;
- (id)_configurationState;
- (id /* block */)_configurationUpdateHandler;
- (id)_contentBackdropView;
- (id)_contentForState:(unsigned long long)arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_currentConfiguration;
- (id)_currentImageColor;
- (id)_currentImageWithResolvedConfiguration;
- (id)_defaultFocusEffect;
- (id)_defaultFontForIdiom:(long long)arg1;
- (id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_disableAutomaticTitleAnimations;
- (double)_drawingStrokeForState:(unsigned long long)arg1;
- (double)_drawingStrokeForStyle:(long long)arg1;
- (long long)_drawingStyleForState:(unsigned long long)arg1;
- (long long)_drawingStyleForStroke:(double)arg1;
- (id)_effectiveContentView;
- (struct CGSize { double x1; double x2; })_effectiveSizeForImage:(id)arg1;
- (id)_encodableSubviews;
- (id)_externalBorderColorForState:(unsigned long long)arg1;
- (long long)_externalDrawingStyleForState:(unsigned long long)arg1;
- (unsigned long long)_externalFlatEdge;
- (id)_externalFocusedTitleColor;
- (id)_externalImageColorForState:(unsigned long long)arg1;
- (id)_externalTitleColorForState:(unsigned long long)arg1 isTintColor:(bool*)arg2;
- (id)_externalUnfocusedBorderColor;
- (double)_firstBaselineOffsetFromTop;
- (id)_font;
- (bool)_fontIsDefaultForIdiom;
- (bool)_hasBaseline;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hasDrawingStyle;
- (bool)_hasHighlightColor;
- (bool)_hasImageForProperty:(id)arg1;
- (bool)_hasVisibleDefaultSelectionIndicator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightBounds;
- (double)_highlightCornerRadius;
- (id)_imageColorForState:(unsigned long long)arg1;
- (long long)_imageContentMode;
- (id)_imageForState:(unsigned long long)arg1 applyingConfiguration:(bool)arg2 usesImageForNormalState:(bool*)arg3;
- (id)_imageView;
- (id)_imageViewIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_internalTitlePaddingInsets;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateConfiguration;
- (void)_invalidateForPropertyChange;
- (bool)_isCarPlaySystemTypeButton;
- (bool)_isContentBackgroundHidden;
- (bool)_isEffectivelyDisabledExternalButton;
- (bool)_isInCarPlay;
- (bool)_isMicButton;
- (bool)_isModernButton;
- (bool)_isOn;
- (bool)_isPopUpMenuButtonWithMenu:(id)arg1;
- (bool)_isSystemProvidedButton;
- (bool)_isTitleFrozen;
- (bool)_isToggleButton;
- (bool)_isiOSSystemProvidedButton;
- (id)_layoutDebuggingTitle;
- (id)_lazyTitleViewFontIsDefaultForIdiom:(bool*)arg1;
- (bool)_likelyToHaveTitle;
- (long long)_lineBreakMode;
- (bool)_menuEnabled;
- (id /* block */)_menuProvider;
- (bool)_needsDoubleUpdateConstraintsPass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pathImageEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pathTitleEdgeInsets;
- (id)_plainButtonBackgroundColor;
- (id)_pointerEffect;
- (id)_pointerEffectPreviewParameters;
- (id)_pointerEffectWithPreview:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)_preferredConfigurationForState:(unsigned long long)arg1;
- (id)_preferredConfigurationForState:(unsigned long long)arg1 includeDefault:(bool)arg2;
- (id)_preferredHoverEffect;
- (id)_preferredHoverShape;
- (double)_preferredMaxLayoutWidth;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_refreshVisualProvider;
- (void)_refreshVisualProviderForTraitCollection:(id)arg1;
- (void)_refreshVisualProviderForTraitCollection:(id)arg1 populatingAPIProperties:(bool)arg2;
- (bool)_requiresLayoutForPropertyChange;
- (void)_resetLazyTitleViewFont;
- (struct CGSize { double x1; double x2; })_roundSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_scaleFactorForImage;
- (double)_selectedIndicatorAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (id)_selectionIndicatorView;
- (void)_selectionInteractionDidBeginHinting:(id)arg1;
- (void)_selectionInteractionDidCancelHinting:(id)arg1;
- (void)_selectionInteractionDidSelect:(id)arg1;
- (bool)_selectorOverridden:(SEL)arg1;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setActiveSizeToFitLayoutEngine:(id)arg1;
- (void)_setAttributedSubtitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setAutomaticallyUpdatesButtonConfiguration:(bool)arg1;
- (void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setBlurEnabled:(bool)arg1;
- (void)_setButtonType:(long long)arg1;
- (void)_setChangesSelectionAsPrimaryAction:(bool)arg1;
- (void)_setConfiguration:(id)arg1;
- (void)_setConfigurationUpdateHandler:(id /* block */)arg1;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setContentBackgroundHidden:(bool)arg1;
- (void)_setContentHuggingPriorities:(struct CGSize { double x1; double x2; })arg1;
- (void)_setCurrentConfiguration:(id)arg1;
- (void)_setDefaultFontForIdiom;
- (void)_setDisableAutomaticTitleAnimations:(bool)arg1;
- (void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;
- (void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (void)_setExternalFlatEdge:(unsigned long long)arg1;
- (void)_setFont:(id)arg1;
- (void)_setFont:(id)arg1 isDefaultForIdiom:(bool)arg2;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 deferLayout:(bool)arg2;
- (void)_setHasActiveMenuPresentation:(bool)arg1;
- (void)_setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_setHighlightedWithoutUpdatingState:(bool)arg1;
- (void)_setHovered:(bool)arg1;
- (void)_setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageContentMode:(long long)arg1;
- (void)_setInternalTitlePaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setIsMicButton:(bool)arg1;
- (void)_setLazyTitleViewFont:(id)arg1 isDefaultForIdiom:(bool)arg2;
- (void)_setLineBreakMode:(long long)arg1;
- (void)_setMenuProvider:(id /* block */)arg1;
- (void)_setNeedsUpdateConfiguration;
- (void)_setOn:(bool)arg1;
- (void)_setPlainButtonBackgroundColor:(id)arg1;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setShouldHandleScrollerMouseEvent:(bool)arg1;
- (void)_setSubtitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleFrozen:(bool)arg1;
- (void)_setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setVisualEffectViewEnabled:(bool)arg1 backgroundColor:(id)arg2;
- (void)_setVisualProvider:(id)arg1;
- (void)_setWantsAccessibilityUnderline:(bool)arg1;
- (id)_shadowColorForState:(unsigned long long)arg1;
- (id)_shapeInContainer:(id)arg1;
- (id)_shapeInContainer:(id)arg1 proposal:(id /* block */)arg2;
- (void)_shim_setConfiguration:(id)arg1;
- (bool)_shouldAdjustToTraitCollection;
- (bool)_shouldHaveFloatingAppearance;
- (bool)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize { double x1; double x2; })arg1 oldSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_subtitleForState:(unsigned long long)arg1;
- (id)_subtitleLabel;
- (bool)_supportsMacIdiom;
- (void)_takeContentFromArchivableContent:(id)arg1;
- (id)_titleColorForState:(unsigned long long)arg1;
- (id)_titleColorForState:(unsigned long long)arg1 suppressTintColorFollowing:(bool*)arg2;
- (id)_titleForState:(unsigned long long)arg1;
- (id)_titleOrImageViewForBaselineLayout;
- (struct CGSize { double x1; double x2; })_titleShadowOffset;
- (id)_titleView;
- (void)_titleViewLabelMetricsChanged;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;
- (bool)_unconditionallyWantsSetBoundsFromISEngineLayout;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_updateConfigurationUsingState:(id)arg1;
- (void)_updateContextMenuEnabled;
- (void)_updateForAutomaticSelection;
- (id)_viewForLoweringBaselineLayoutAttribute:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visualBounds;
- (bool)_visualEffectViewEnabled;
- (id)_visualProvider;
- (bool)_wantsAccessibilityUnderline;
- (bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (void)_willMoveToWindow:(id)arg1;
- (bool)adjustsImageSizeForAccessibilityContentSizeCategory;
- (bool)adjustsImageWhenDisabled;
- (bool)adjustsImageWhenHighlighted;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)attributedTitleForState:(unsigned long long)arg1;
- (bool)automaticallyUpdatesConfiguration;
- (bool)autosizesToFit;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)behavioralStyle;
- (long long)buttonType;
- (bool)canBecomeFocused;
- (bool)changesSelectionAsPrimaryAction;
- (id)configuration;
- (id /* block */)configurationUpdateHandler;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)currentAttributedTitle;
- (id)currentBackgroundImage;
- (id)currentImage;
- (id)currentPreferredSymbolConfiguration;
- (id)currentTitle;
- (id)currentTitleColor;
- (id)currentTitleShadowColor;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)font;
- (void)forcedSelectionOfMenu:(id)arg1 willChangeTo:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageEdgeInsets;
- (id)imageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 primaryAction:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isHeld;
- (bool)isHovered;
- (bool)isSpringLoaded;
- (id)largeContentImage;
- (id)largeContentTitle;
- (void)layoutSubviews;
- (long long)lineBreakMode;
- (id)menu;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (id /* block */)pointerStyleProvider;
- (unsigned long long)preferredBehavioralStyle;
- (long long)preferredMenuElementOrder;
- (id)preferredSymbolConfigurationForImageInState:(unsigned long long)arg1;
- (bool)prefersHorizontalMenuAttachment;
- (struct CGPoint { double x1; double x2; })pressFeedbackPosition;
- (bool)reversesTitleShadowWhenHighlighted;
- (long long)role;
- (bool)scalesLargeContentImage;
- (id)selectionInteraction;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg1;
- (void)setAdjustsImageWhenDisabled:(bool)arg1;
- (void)setAdjustsImageWhenHighlighted:(bool)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setAutomaticallyUpdatesConfiguration:(bool)arg1;
- (void)setAutosizesToFit:(bool)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChangesSelectionAsPrimaryAction:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationUpdateHandler:(id /* block */)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setDisabledDimsImage:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMenu:(id)arg1;
- (void)setNeedsLayout;
- (void)setNeedsUpdateConfiguration;
- (void)setPointerStyleProvider:(id /* block */)arg1;
- (void)setPreferredBehavioralStyle:(unsigned long long)arg1;
- (void)setPreferredMenuElementOrder:(long long)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1 forImageInState:(unsigned long long)arg2;
- (void)setPrefersHorizontalMenuAttachment:(bool)arg1;
- (void)setReversesTitleShadowWhenHighlighted:(bool)arg1;
- (void)setRole:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionInteraction:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowPressFeedback:(bool)arg1;
- (void)setShowsMenuAsPrimaryAction:(bool)arg1;
- (void)setShowsTouchWhenHighlighted:(bool)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (bool)showsTouchWhenHighlighted;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)tintColorDidChange;
- (id)title;
- (id)titleColorForState:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleEdgeInsets;
- (id)titleForState:(unsigned long long)arg1;
- (id)titleLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)titleShadowColorForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })titleShadowOffset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConfiguration;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)visualProviderClassForTraitCollection:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (id)ab_text;
- (id)ab_textAttributes;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_accessoryControlToExtendWithCallout;
- (void)_mapkit_setAttributedTitle:(id)arg1;
- (void)_mapkit_setImage:(id)arg1;
- (id)_mapkit_title;

// Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit

- (double)lastBaselineFromBottom;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_passwordRecoveryButton;

- (void)_ak_passwordRecoveryButtonTapped:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (void)cps_setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkXmarkedCloseButtonWithTarget:(id)arg1 action:(SEL)arg2;

- (double)lastBaselineFromBottom;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (double)hk_buddyButtonHorizontalMargin;
+ (id)hk_buddyButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_buttonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_chartShowMoreDataButtonWithTitleOverride:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)hk_currentValueViewInfoButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)hk_multiLineRoundRectButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_roundRectButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_roundedRectBuddyButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)imageWithFillColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_clipScrubberLiveButton;
+ (id)hu_clipScrubberLiveButtonWithMaximimumLineHeight:(double)arg1;
+ (id)hu_clipScrubberNearbyAccessoryButton;
+ (void)hu_doneStateForButton:(id)arg1 usingStandardSymbolConfiguration:(bool)arg2;
+ (void)hu_microphoneButton:(id)arg1 forTalkingState:(bool)arg2 usingStandardSymbolConfiguration:(bool)arg3;
+ (void)hu_talkStateForButton:(id)arg1 usingStandardSymbolConfiguration:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

+ (id)mf_revealActionsButtonWithAccessibilityIdentifier:(id)arg1;

- (id)mf_revealActionButtonPointerStyleInView:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

+ (id)_mapsui_sectionButton;
+ (id)_mapsui_sectionHeaderButton;

- (void)_mapsui_setImage:(id)arg1;
- (void)_mapsui_setTarget:(id)arg1 action:(SEL)arg2;
- (id)_mapsui_title;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (void)set_mapsui_title:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

- (void)mt_applyVisualStyling:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI

+ (id)SUUITrending_defaultButtonFont;
+ (id)SUUITrending_searchButtonWithElement:(id)arg1;
+ (id)SUUITrending_searchButtonWithTitle:(id)arg1;

- (void)SUUITrending_applyConfigurationFromElement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

- (id)fontForStyle:(id)arg1 currentSizeCategory:(id)arg2 maxSizeCategory:(id)arg3;
- (id)fontForStyle:(id)arg1 maxSizeCategory:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)pkui_updateConfigurationShowingActivityIndicator:(bool)arg1;
- (void)pkui_updateConfigurationWithFont:(id)arg1;
- (void)pkui_updateConfigurationWithImage:(id)arg1;
- (void)pkui_updateConfigurationWithTitle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (void)PG_removeVibrancyEffect;
- (void)PG_updateVibrancyEffectForTintColor;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_buttonBackgroundImageForType:(unsigned long long)arg1 color:(id)arg2 cornerRadius:(double)arg3 controlState:(unsigned long long)arg4;
+ (id)px_buttonWithPXType:(unsigned long long)arg1 color:(id)arg2;

- (void)px_setTitle:(id)arg1 orAttributedTitle:(id)arg2 forState:(unsigned long long)arg3;
- (void)px_updateTitleUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (void)pu_sendActionForControlEventsWithHighlightTimeout:(unsigned long long)arg1;
- (void)pu_setRTLAwareContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)pu_setTitle:(id)arg1 andAccessibilityTitle:(id)arg2 withFallback:(id /* block */)arg3 forState:(unsigned long long)arg4;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (bool)roundedFont;
- (void)setRoundedFont:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI

- (void)st_setBackgroundColor:(id)arg1;
- (void)st_setTitleColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (void)SBPIP_removeVibrancyEffect;
- (void)SBPIP_updateVibrancyEffectForTintColorWithFilter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (void)sbui_removePointerInteraction;
- (void)sbui_updateConfiguration;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)SKUITrending_defaultButtonFont;
+ (id)SKUITrending_searchButtonWithElement:(id)arg1;
+ (id)SKUITrending_searchButtonWithTitle:(id)arg1;

- (void)SKUITrending_applyConfigurationFromElement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)tsdPlatformButtonWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void)setAlternateImageNamed:(id)arg1 inBundle:(id)arg2;
- (void)setImageNamed:(id)arg1 inBundle:(id)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

+ (id)largeButton;

// Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit

- (void)addTarget:(id)arg1 action:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI

- (void)setVs_normalTitle:(id)arg1;
- (id)vs_normalTitle;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (void)vk_setTintColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)configureFromScriptButton:(id)arg1;

@end
