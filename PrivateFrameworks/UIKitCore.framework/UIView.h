
@interface UIView : UIResponder <AVKitLayoutItem, CALayerDelegate, CRKCardSectionView, DOCAppearanceCustomization, EKUIViewHierarchy, HULayoutAnchorProviding, ICAttachmentPresenterDelegate, ICSupplementalView, MKInfoCardThemeListener, MKStackingViewControllerSizableView, MTVisualStylingProviding, MUCompositionalStackLayoutItemInternal, MULayoutItem, NCTextMenuInteractionSupporting, NSCoding, NSISEngineDelegate, NSISVariableDelegate, NTKDialMarkerView, NUIArrangementItem, PBFDisplayContextProviding, PXGInternalReusableView, PXLayoutParticipant, PXReusableObject, PXUIViewBasicTile, SBSpotlightBackgroundWeighting, SBUISystemApertureAccessoryView, SearchUIAutoLayoutItem, SharedWithYou.AncestorViewControllerRetrievable, UIAppearance, UIAppearanceContainer, UICoordinateSpace, UIDynamicItem, UIFocusItem, UIFocusItemContainer, UILargeContentViewerItem, UILargeContentViewerItem_Private, UILayoutItem_Internal, UITextEffectsOrdering, UITraitChangeObservable, UITraitChangeObservableInternal, UITraitEnvironment, _UIDropInteractionOwning, _UIFallbackEnvironment, _UIFocusEnvironmentPrivate, _UIFocusItemContainerInternal, _UIFocusItemContainerPrivate, _UIFocusItemDebuggable, _UIFocusItemInternal, _UIFocusItemPrivate, _UIFocusRegionContainer, _UIFocusRegionContainerInternal, _UIGeometryChangeObserver, _UIGestureOwning, _UILayoutItem, _UILegacyFocusRegion, _UIMultilineTextContentSizing, _UIPopoverPresentationControllerSourceItem_Internal, _UIScrollViewScrollObserver_Internal, _UITraitEnvironmentInternal, _UITraitOverrideDelegate, _UIViewSubtreeMonitor> {
    _UIViewLayoutEngineRelativeAlignmentRectOriginCache * __alignmentRectOriginCache;
    unsigned long long  __autoresizingMaskForPreviousAutoresizingLayoutConstraints;
    UITraitCollection * __lastNotifiedTraitCollection;
    UIViewAnimationInfo * _animationInfo;
    NSISVariable * _boundsHeightVariable;
    NSISVariable * _boundsWidthVariable;
    UITraitCollection * _cachedTraitCollection;
    NSMutableArray * _constraintsExceptingSubviewAutoresizingConstraints;
    unsigned short  _countOfFocusedAncestorTrackingViewsInSubtree;
    NSMutableArray * _gestureRecognizers;
    unsigned short  _imminentLayoutSubviewsCount;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _inferredLayoutMargins;
    NSMutableArray * _internalConstraints;
    UIKeyboardLayoutGuide * _keyboardLayoutGuide;
    CALayer * _layer;
    CALayer * _layerRetained;
    NSISEngine * _layoutEngine;
    UILayoutGuide * _layoutMarginsGuide;
    unsigned short  _layoutSubviewsCount;
    NSISVariable * _minXVariable;
    NSISVariable * _minYVariable;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minimumSafeAreaInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _rawLayoutMargins;
    UILayoutGuide * _readableContentGuide;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    UILayoutGuide * _safeAreaLayoutGuide;
    long long  _sceneDraggingBehaviorOnPan;
    NSMapTable * _stashedLayoutVariableObservations;
    NSArray * _subviewCache;
    unsigned short  _tintAdjustmentDimmingCount;
    _UITraitChangeRegistry * _traitChangeRegistry;
    unsigned short  _unsatisfiableConstraintsLoggingSuspensionCount;
    _UIViewBackingAux * _viewBackingAux;
    UIViewController * _viewDelegate;
    struct { 
        unsigned int userInteractionDisabled : 1; 
        unsigned int implementsDrawRect : 1; 
        unsigned int implementsDidScroll : 1; 
        unsigned int implementsMouseTracking : 1; 
        unsigned int implementsIntrinsicContentSize : 1; 
        unsigned int hasBackgroundColor : 1; 
        unsigned int hasBackgroundColorSystemColorName : 1; 
        unsigned int hasInteractionTintColor : 1; 
        unsigned int isOpaque : 1; 
        unsigned int becomeFirstResponderWhenCapable : 1; 
        unsigned int interceptMouseEvent : 1; 
        unsigned int isDeallocInitiated : 1; 
        unsigned int isInUIViewDealloc : 1; 
        unsigned int hasPreparedForWindowDealloc : 1; 
        unsigned int debugFlash : 1; 
        unsigned int isAncestorOfFirstResponder : 1; 
        unsigned int dontAutoresizeSubviews : 1; 
        unsigned int autoresizeMask : 6; 
        unsigned int patternBackground : 1; 
        unsigned int fixedBackgroundPattern : 1; 
        unsigned int dontAnimate : 1; 
        unsigned int superLayerIsView : 1; 
        unsigned int layerKitPatternDrawing : 1; 
        unsigned int multipleTouchEnabled : 1; 
        unsigned int exclusiveTouch : 1; 
        unsigned int hasViewController : 1; 
        unsigned int needsDidAppearOrDisappear : 1; 
        unsigned int deliversTouchesForGesturesToSuperview : 1; 
        unsigned int deliversPressesForGesturesToSuperview : 1; 
        unsigned int chargeEnabled : 1; 
        unsigned int skipsSubviewEnumeration : 1; 
        unsigned int needsDisplayOnBoundsChange : 1; 
        unsigned int hasTiledLayer : 1; 
        unsigned int hasContentSizeCategoryLimits : 1; 
        unsigned int traversalMark : 1; 
        unsigned int appearanceIsInvalid : 1; 
        unsigned int monitorsSubtree : 1; 
        unsigned int hostsAutolayoutEngine : 1; 
        unsigned int constraintsAreClean : 1; 
        unsigned int subviewLayoutConstraintsAreClean : 1; 
        unsigned int intrinsicContentSizeConstraintsAreClean : 1; 
        unsigned int strictDescendantNeedsDoubleUpdateConstraints : 1; 
        unsigned int strictDescendantNeedsDoubleUpdateConstraintsIsInvalid : 1; 
        unsigned int hasStoredLayoutEngineWidth : 1; 
        unsigned int determiningWidthForDoubleUpdateConstraints : 1; 
        unsigned int inSecondConstraintsPass : 1; 
        unsigned int potentiallyHasDanglyConstraints : 1; 
        unsigned int doesNotTranslateAutoresizingMaskIntoConstraints : 1; 
        unsigned int autolayoutIsClean : 1; 
        unsigned int autolayoutBoundsAreClean : 1; 
        unsigned int layoutFlushingDisabled : 1; 
        unsigned int layingOutFromConstraints : 1; 
        unsigned int wantsAutolayout : 1; 
        unsigned int subviewWantsAutolayout : 1; 
        unsigned int isApplyingValuesFromEngine : 1; 
        unsigned int autolayoutIsSendingSetBoundsWithNoChanges : 1; 
        unsigned int isResizingDueToParentResize : 1; 
        unsigned int isInLayoutSubviewsOrVCCallback : 1; 
        unsigned int isInAnimatedLayout : 1; 
        unsigned int isSubviewUpdatingAutoresizingConstraints : 1; 
        unsigned int isUpdatingConstraints : 1; 
        unsigned int isReapplyingStillActiveBrokenConstraints : 1; 
        unsigned int isSuppressingUnsatisfiableConstraintsLoggingForNestedLayoutEngines : 1; 
        unsigned int isHostingUpdateConstraintsPassDuringLayout : 1; 
        unsigned int isRunningEngineLevelConstraintsPass : 1; 
        unsigned int isUpdatingLayoutEngineHostConstraints : 1; 
        unsigned int isExpectingToFlushPendingLayoutChangeNotifications : 1; 
        unsigned int invalidatesIntrinsicContentSizeForSubviewAutoLayoutChanges : 1; 
        unsigned int systemLayoutFittingSizeNeedsUpdate : 1; 
        unsigned int systemLayoutFittingSizeNeedsUpdateInWholeSubtree : 1; 
        unsigned int isCalculatingSystemLayoutFittingSize : 1; 
        unsigned int suppressEncapsulationConstraints : 1; 
        unsigned int isFetchingSizeForTAMIC_NOEngineHost : 1; 
        unsigned int stayHiddenAwaitingReuse : 1; 
        unsigned int stayHiddenAfterReuse : 1; 
        unsigned int skippedLayoutWhileHiddenForReuse : 1; 
        unsigned int isPendingHiddenForAnimation : 1; 
        unsigned int hasMaskView : 1; 
        unsigned int isSettingMaskView : 1; 
        unsigned int hasVisualAltitude : 1; 
        unsigned int hasBackdropMaskViews : 1; 
        unsigned int backdropMaskViewFlags : 5; 
        unsigned int delaysTouchesForSystemGestures : 1; 
        unsigned int subclassShouldDelayTouchForSystemGestures : 1; 
        unsigned int hasMotionEffects : 1; 
        unsigned int backdropOverlayMode : 2; 
        unsigned int tintAdjustmentMode : 2; 
        unsigned int isReferenceView : 1; 
        unsigned int focusState : 2; 
        unsigned int hasUserInterfaceIdiom : 1; 
        unsigned int userInterfaceIdiom : 3; 
        unsigned int ancestorDefinesTintColor : 1; 
        unsigned int ancestorDefinesTintAdjustmentMode : 1; 
        unsigned int ancestorIgnoresInvertColors : 1; 
        unsigned int needsTraitCollectionDidChangePropagation : 1; 
        unsigned int isRootOfTraitCollectionDidChangePropagation : 1; 
        unsigned int implementsTraitCollectionForChildEnvironment : 1; 
        unsigned int implementsBaselineOffsetsAtSize : 1; 
        unsigned int coloredViewBounds : 1; 
        unsigned int coloredAlignmentRects : 1; 
        unsigned int preservesSuperviewMargins : 4; 
        unsigned int insettingLayoutMarginsFromSafeArea : 4; 
        unsigned int safeAreaInsetsFrozen : 1; 
        unsigned int viewDelegateContentOverlayInsetsAreClean : 1; 
        unsigned int hasGeometryObservers : 1; 
        unsigned int notifyObserversForBaselineChanges : 1; 
        unsigned int notifySuperviewForBaselineChanges : 1; 
        unsigned int observingGeometryChangesForSelfCount : 4; 
        unsigned int hasTraitStorageList : 1; 
        unsigned int cachedTraitCollectionIsValid : 1; 
        unsigned int hasTraitOverrides : 1; 
        unsigned int dontUpdateInferredLayoutMargins : 1; 
        unsigned int areLayoutMarginsDirectional : 1; 
        unsigned int implementsViewForBaselineLayout : 1; 
        unsigned int tracksFocusedAncestors : 1; 
        unsigned int hasLayoutArrangements : 1; 
        unsigned int isHiddenManagedByLayoutArrangement : 1; 
        unsigned int hasAddedFocusGuides : 1; 
        unsigned int hasFocusSpeedBumpEdges : 1; 
        unsigned int hasFocusableContentMargins : 1; 
        unsigned int focusInteractionDisabled : 1; 
        unsigned int shouldReverseLayoutDirection : 1; 
        unsigned int cannotBeParentTraitEnvironment : 1; 
        unsigned int needsContentsFormatUpdate : 1; 
        unsigned int accessibilityIgnoresInvertColors : 1; 
        unsigned int ignoresLayerTransformForSafeAreaInsets : 1; 
        unsigned int accessibilityInterfaceStyleIntent : 2; 
        unsigned int accessibilityResolvedInterfaceStyle : 2; 
        unsigned int shouldArchiveUIAppearanceTags : 1; 
        unsigned int wantsDeepColorDrawing : 1; 
        unsigned int preferredContentsFormat : 3; 
        unsigned int tagEnabled : 1; 
        unsigned int chargeSet : 1; 
        unsigned int ignoreBackdropViewsWhenHiding : 1; 
        unsigned int areChildrenFocused : 1; 
        unsigned int hasInteractionsArray : 1; 
        unsigned int hasHitTestDirectionalInsets : 1; 
        unsigned int hasLayoutDebuggingIdentifier : 1; 
        unsigned int hasContentSizeNotificationToken : 1; 
        unsigned int hasPresentationControllerToNotifyOnLayoutSubviews : 1; 
        unsigned int semanticContentAttribute : 3; 
        unsigned int hasDynamicBackgroundColor : 1; 
        unsigned int forceEffectiveThemeDidChange : 1; 
        unsigned int allowsHighContrastForBackgroundColor : 1; 
        unsigned int hasPendingTraitStorageConstraints : 1; 
        unsigned int hasPendingLayoutAfterTraitStorageConstraintsUpdate : 1; 
        unsigned int hasEverBeenInAWindow : 1; 
        unsigned int hasFocusGroupIdentifier : 2; 
        unsigned int hasFocusGroupPriority : 1; 
        unsigned int hasFocusEffect : 2; 
        unsigned int conformsToUIFocusItemScrollableContainer : 2; 
        unsigned int allowsSkippingLayout : 1; 
        unsigned int isResolvingTraitCollection : 1; 
        unsigned int needsLayoutAndDisplayOnTintColorChanges : 1; 
        unsigned int subviewNeedsAnimationRestorationMessage : 1; 
        unsigned int isHostingTrackingForAnimationRestoration : 1; 
        unsigned int implementsFocusItemsInRect : 1; 
        unsigned int isPrivateSubview : 1; 
        unsigned int shouldAdaptToMaterials : 1; 
        unsigned int useMinimumSafeArea : 1; 
        unsigned int useMinimumSafeAreaFrozen : 1; 
        unsigned int minimumSafeAreaAccessed : 1; 
        unsigned int minimumSafeAreaIsClassicSafeArea : 1; 
        unsigned int minimumSafeAreaNeedsUpdate : 1; 
        unsigned int mt_hasCustomizedCaptureGroup : 1; 
        unsigned int mt_backgroundMergeBehavior : 2; 
        unsigned int shouldContinueRemovingFromSuperview : 1; 
        unsigned int isMaskingIntermediateLayer : 1; 
    }  _viewFlags;
    UIWindow * _window;
}

@property (setter=setID0CornerRadius:, nonatomic) double ID0CornerRadius;
@property (setter=PG_setAllowsEdgeAntialiasing:, nonatomic) bool PG_allowsEdgeAntialiasing;
@property (setter=PG_setAllowsGroupBlending:, nonatomic) bool PG_allowsGroupBlending;
@property (setter=PG_setAnchorPoint:, nonatomic) struct CGPoint { double x1; double x2; } PG_anchorPoint;
@property (setter=PG_setCompositingFilter:, nonatomic, retain) id PG_compositingFilter;
@property (setter=SBPIP_setAllowsEdgeAntialiasing:, nonatomic) bool SBPIP_allowsEdgeAntialiasing;
@property (setter=SBPIP_setAllowsGroupBlending:, nonatomic) bool SBPIP_allowsGroupBlending;
@property (nonatomic, readonly) long long SBUISA_layoutMode;
@property (nonatomic, readonly) double SBUISA_maximumAccessoryViewWidth;
@property (nonatomic, readonly) double SBUISA_standardInteritemPadding;
@property (nonatomic, readonly) UILayoutGuide *SBUISA_systemApertureCustomControlsContentLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *SBUISA_systemApertureLeadingConcentricContentLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *SBUISA_systemApertureLeadingViewLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *SBUISA_systemApertureLegibleContentLayoutMarginsGuide;
@property (nonatomic, readonly) UILayoutGuide *SBUISA_systemApertureMaximumContentSizeLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *SBUISA_systemApertureMinimalViewLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *SBUISA_systemApertureMinimumContentSizeLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *SBUISA_systemApertureObstructedAreaLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *SBUISA_systemApertureTrailingConcentricContentLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *SBUISA_systemApertureTrailingViewLayoutGuide;
@property (getter=_StatusBar_isInVisibleHierarchy, nonatomic, readonly) bool _StatusBar_isInVisibleHierarchy;
@property (setter=_setAccessoryViewFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _accessoryViewFrame;
@property (nonatomic, readonly) <_UIGestureOwning> *_actingGestureParent;
@property (setter=_setActiveSizeToFitLayoutEngine:, nonatomic) NSISEngine *_activeSizeToFitLayoutEngine;
@property (setter=_setAlignmentRectOriginCache:, nonatomic, retain) _UIViewLayoutEngineRelativeAlignmentRectOriginCache *_alignmentRectOriginCache;
@property (nonatomic, readonly) unsigned long long _axesForDerivingIntrinsicContentSizeFromLayoutSize;
@property (nonatomic, readonly) UIView *_backdropMaskViewForColorTint;
@property (nonatomic, readonly) UIView *_backdropMaskViewForFilters;
@property (nonatomic, readonly) UIView *_backdropMaskViewForGrayscaleTint;
@property (nonatomic, readonly) NSArray *_backdropMaskViews;
@property (setter=_setBackgroundMergeBehavior:, nonatomic) long long _backgroundMergeBehavior;
@property (nonatomic, readonly, retain) NSISVariable *_boundsHeightVariable;
@property (nonatomic, readonly, retain) NSISVariable *_boundsWidthVariable;
@property (getter=_canBeParentTraitEnvironment, setter=_setCanBeParentTraitEnvironment:, nonatomic) bool _canBeParentTraitEnviroment;
@property (nonatomic, readonly) CNContactStyle *_cnui_contactStyle;
@property (nonatomic, readonly, retain) NSArray *_constraintsExceptingSubviewAutoresizingConstraints;
@property (setter=_setContinuousCornerRadius:, nonatomic) double _continuousCornerRadius;
@property (setter=_setCornerRadius:, nonatomic) double _cornerRadius;
@property (setter=_setCountOfFocusedAncestorTrackingViewsInSubtree:, nonatomic) unsigned long long _countOfFocusedAncestorTrackingViewsInSubtree;
@property (setter=_setCountOfMotionEffectsInSubtree:, nonatomic) unsigned long long _countOfMotionEffectsInSubtree;
@property (nonatomic, readonly) double _currentScreenScale;
@property (setter=_setDisableDictationTouchCancellation:, nonatomic) bool _disableDictationTouchCancellation;
@property (setter=_setDisableLayoutFlushingCount:, nonatomic) long long _disableLayoutFlushingCount;
@property (setter=_setDontUpdateInferredLayoutMargins:, nonatomic) bool _dontUpdateInferredLayoutMargins;
@property (getter=_draggingSourceDelegate, setter=_setDraggingSourceDelegate:, nonatomic) <_UIViewInternalDraggingSourceDelegate> *_draggingSourceDelegate;
@property (nonatomic, readonly) UIWindow *_eventReceivingWindow;
@property (setter=_setFlipsHorizontalAxis:, nonatomic) bool _flipsHorizontalAxis;
@property (nonatomic, readonly) long long _focusItemDeferralMode;
@property (setter=_setFrameIgnoringLayerTransform:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _frameIgnoringLayerTransform;
@property (nonatomic, readonly) long long _hiddenManagedByLayoutArrangementCount;
@property (nonatomic, readonly) bool _ignoreRemoveAllAnimations;
@property (setter=_setInferredLayoutMargins:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _inferredLayoutMargins;
@property (nonatomic, readonly) UIKBRenderConfig *_inheritedRenderConfig;
@property (setter=_setInternalConstraints:, nonatomic, retain) NSMutableArray *_internalConstraints;
@property (nonatomic, readonly) bool _isInLayoutSubviews;
@property (nonatomic, readonly) bool _isUnsatisfiableConstraintsLoggingSuspended;
@property (nonatomic, readonly) long long _keyboardOrientation;
@property (nonatomic, readonly) MPArtworkCatalog *_lastArtworkCatalog;
@property (setter=_setLastNotifiedTraitCollection:, nonatomic, retain) UITraitCollection *_lastNotifiedTraitCollection;
@property (setter=_setLayoutDebuggingIdentifier:, nonatomic, copy) NSString *_layoutDebuggingIdentifier;
@property (setter=_setLayoutEngine:, nonatomic, retain) NSISEngine *_layoutEngine;
@property (nonatomic, readonly) bool _layoutHeightDependsOnWidth;
@property (setter=_setLayoutMarginsGuideIgnoresSystemMinimumMargins:, nonatomic) bool _layoutMarginsGuideIgnoresSystemMinimumMargins;
@property (nonatomic, readonly) NSMapTable *_lfld_constraintsAffectingVariableValueChanges;
@property (nonatomic, readonly) long long _lfld_count;
@property (nonatomic, readonly) NSString *_lfld_currentLayoutMethodName;
@property (nonatomic, readonly) NSMutableArray *_lfld_geometryChangeRecords;
@property (nonatomic, readonly) NSMutableSet *_lfld_setNeedsLayoutCallStacks;
@property (nonatomic, readonly) NSMutableArray *_lfld_variableChangeRecords;
@property (nonatomic, readonly) bool _lightStyleRenderConfig;
@property (getter=_localOverrideTraitCollection, setter=_setLocalOverrideTraitCollection:, nonatomic, retain) UITraitCollection *_localOverrideTraitCollection;
@property (nonatomic, readonly, retain) MKMapView *_mapKit_mapView;
@property (nonatomic, readonly, retain) CALayer *_mapkit_currentLayer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _mapkit_doubleFrame;
@property (nonatomic, readonly) bool _mapkit_hasPointerInteraction;
@property (nonatomic, readonly) bool _mapkit_isDarkModeEnabled;
@property (nonatomic, readonly) long long _mapkit_userInterfaceDirection;
@property (nonatomic, readonly) NSString *_mapsui_layoutMarginsDescription;
@property (nonatomic, readonly) NSString *_mapsui_preservedLayoutMarginsDescription;
@property (nonatomic, readonly) NSString *_mapsui_recursiveLayoutMarginsDescription;
@property (setter=_setMaskView:, nonatomic, retain) UIView *_maskView;
@property (nonatomic, readonly, retain) NSISVariable *_minXVariable;
@property (nonatomic, readonly, retain) NSISVariable *_minYVariable;
@property (setter=_setMultilineContextWidth:, nonatomic) double _multilineContextWidth;
@property (nonatomic, readonly, retain) NSMutableArray *_mutableLayoutArrangements;
@property (nonatomic, readonly, retain) NSMutableArray *_mutableLayoutGuides;
@property (nonatomic, readonly) NSArray *_nativeInteractions;
@property (setter=_setNeedsContentsFormatUpdate:, nonatomic) bool _needsContentsFormatUpdate;
@property (nonatomic, readonly) UIShape *_outlineShape;
@property (getter=_overrideUserInterfaceRenderingMode, setter=_setOverrideUserInterfaceRenderingMode:, nonatomic) long long _overrideUserInterfaceRenderingMode;
@property (getter=_overrideUserInterfaceStyle, setter=_setOverrideUserInterfaceStyle:, nonatomic) long long _overrideUserInterfaceStyle;
@property (getter=_overrideVibrancyTrait, setter=_setOverrideVibrancyTrait:, nonatomic) long long _overrideVibrancyTrait;
@property (nonatomic, readonly) long long _pendingHiddenCount;
@property (getter=_presentationControllerToNotifyOnLayoutSubviews, setter=_setPresentationControllerToNotifyOnLayoutSubviews:, nonatomic) UIPresentationController *_presentationControllerToNotifyOnLayoutSubviews;
@property (nonatomic, readonly) CABasicAnimation *_pu_referenceBasicAnimationForCurrentAnimation;
@property (setter=_setRawLayoutMargins:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _rawLayoutMargins;
@property (nonatomic, readonly) UIResolvedShape *_resolvedOutlineShape;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } _scaleFromLayerTransforms;
@property (setter=_setSceneDraggingBehaviorOnPan:, nonatomic) long long _sceneDraggingBehaviorOnPan;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _sf_bottomUnsafeAreaFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _sf_bottomUnsafeAreaFrameForToolbar;
@property (nonatomic, readonly) bool _sf_hasLandscapeAspectRatio;
@property (nonatomic, readonly) bool _sf_isFullScreenHeight;
@property (nonatomic, readonly) bool _sf_isFullScreenWidth;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _sf_safeAreaBounds;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _sf_safeAreaInsetsFlippedForLayoutDirectionality;
@property (nonatomic, readonly) bool _sf_usesLeftToRightLayout;
@property (setter=_setShouldAdaptToMaterials:, nonatomic) bool _shouldAdaptToMaterials;
@property (setter=_setShouldArchiveUIAppearanceTags:, nonatomic) bool _shouldArchiveUIAppearanceTags;
@property (setter=_setShouldNotifyGeometryObserversForBaselineChanges:, nonatomic) bool _shouldNotifyGeometryObserversForBaselineChanges;
@property (nonatomic, readonly) bool _shouldReverseLayoutDirection;
@property (nonatomic, readonly) NSMapTable *_stashedLayoutVariableObservations;
@property (nonatomic, readonly) _UITouchForceObservable *_touchForceObservable;
@property (setter=_setTracksFocusedAncestors:, nonatomic) bool _tracksFocusedAncestors;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _ui_bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _ui_frame;
@property (nonatomic, readonly) UIView *_ui_superview;
@property (nonatomic) bool _ui_usesManualLayout;
@property (nonatomic, readonly) UIView *_ui_view;
@property (getter=_userInterfaceIdiom, setter=_setUserInterfaceIdiom:, nonatomic) long long _userInterfaceIdiom;
@property (setter=_setViewDelegateContentOverlayInsetsAreClean:, nonatomic) bool _viewDelegateContentOverlayInsetsAreClean;
@property (nonatomic, readonly) bool _wantsConstraintBasedLayout;
@property (readonly) double _widthForButtonBarItemLayout;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) bool accessibilityIgnoresInvertColors;
@property (readonly, copy) NSArray *allSubviews;
@property (nonatomic) bool allowsGroupBlending;
@property (nonatomic) bool allowsGroupOpacity;
@property (nonatomic) double alpha;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, readonly, copy) NSString *appliedContentSizeCategoryLimitsDescription;
@property (nonatomic) bool areChildrenFocused;
@property (nonatomic, readonly) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, readonly, copy) <UITraitEnvironment> *asc_layoutTraitEnvironment;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (getter=_boundingPath, setter=_setBoundingPath:, nonatomic, retain) _UIBoundingPath *boundingPath;
@property (getter=_boundingPathForSubtree, nonatomic, readonly) _UIBoundingPath *boundingPathForSubtree;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, copy) NSString *cardSectionViewIdentifier;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *centerYAnchor;
@property (setter=ck_setBoundsHeight:, nonatomic) double ck_boundsHeight;
@property (setter=ck_setBoundsWidth:, nonatomic) double ck_boundsWidth;
@property (setter=ck_setPositionX:, nonatomic) double ck_positionX;
@property (setter=ck_setPositionY:, nonatomic) double ck_positionY;
@property (setter=ck_setScaleX:, nonatomic) double ck_scaleX;
@property (setter=ck_setScaleY:, nonatomic) double ck_scaleY;
@property (nonatomic, readonly) UIBezierPath *collisionBoundingPath;
@property (nonatomic, readonly) unsigned long long collisionBoundsType;
@property (nonatomic) UIView<CRKComposableView> *composedSuperview;
@property (nonatomic) long long compositingMode;
@property (nonatomic, copy) NSArray *constraints;
@property (getter=_isContainedInHostedFocusSystem, nonatomic, readonly) bool containedInHostedFocusSystem;
@property (getter=_contentSizeNotificationToken, setter=_setContentSizeNotificationToken:, nonatomic, retain) id contentSizeNotificationToken;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (getter=coverSheetRegionIsReservedForHorizontalScrolling, nonatomic) bool coverSheetRegionReservedForHorizontalScrolling;
@property (nonatomic) long long coverSheetRegionRole;
@property (nonatomic, readonly) CALayer *currentLayer;
@property (getter=_currentScreenScale, nonatomic, readonly) double currentScreenScale;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } customAlignmentRectInsets;
@property (nonatomic) double customBaselineOffsetFromBottom;
@property (nonatomic) double customFirstBaselineOffsetFromTop;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } dc_directionalSafeAreaInsets;
@property (nonatomic, readonly) bool dc_isRTL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIColor *debugHighlight;
@property (nonatomic, retain) UIColor *debugingBorderColor;
@property (nonatomic) bool deliversPressesForGesturesToSuperview;
@property (nonatomic) bool deliversTouchesForGesturesToSuperview;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) UIViewController *doc_nearestAncestorViewController;
@property (nonatomic, readonly) UIViewController *doc_presentingViewController;
@property (getter=_dynamicDropInteraction, setter=_setDynamicDropInteraction:, nonatomic) UIDropInteraction *dynamicDropInteraction;
@property (readonly) DOCAppearance *effectiveAppearance;
@property (nonatomic, readonly) long long effectiveUserInterfaceLayoutDirection;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } ekui_affineTransform;
@property (nonatomic, readonly) double ekui_height;
@property (nonatomic, readonly) long long ekui_horizontalSizeClass;
@property (nonatomic, readonly) long long ekui_interfaceOrientation;
@property (nonatomic, readonly) <EKUIViewHierarchy> *ekui_rootViewHierarchy;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } ekui_size;
@property (nonatomic, readonly) UIColor *ekui_tintColor;
@property (nonatomic, readonly) long long ekui_verticalSizeClass;
@property (nonatomic, readonly) double ekui_width;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (getter=_isEligibleForFocusOcclusion, nonatomic, readonly) bool eligibleForFocusOcclusion;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) <PKScribbleInteractionDelegate> *fakeScribbleInteractionDelegate;
@property (getter=_fbsDisplayConfiguration, nonatomic, readonly) FBSDisplayConfiguration *fbsDisplayConfiguration;
@property (getter=_fbsDisplayIdentity, nonatomic, readonly) FBSDisplayIdentity *fbsDisplayIdentity;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, readonly) double firstBaselineFromTop;
@property (getter=_focusBehavior, nonatomic, readonly) <_UIFocusBehavior> *focusBehavior;
@property (nonatomic, copy) UIFocusEffect *focusEffect;
@property (nonatomic, copy) NSString *focusGroupIdentifier;
@property (nonatomic) long long focusGroupPriority;
@property (getter=_isFocusInteractionEnabled, setter=_setFocusInteractionEnabled:, nonatomic) bool focusInteractionEnabled;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (getter=_focusMapContainer, nonatomic, readonly) <_UIFocusRegionContainer> *focusMapContainer;
@property (getter=_focusSystem, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (getter=_focusSystemSceneComponent, nonatomic, readonly) _UIFocusSystemSceneComponent *focusSystemSceneComponent;
@property (getter=_focusTouchSensitivityStyle, nonatomic, readonly) long long focusTouchSensitivityStyle;
@property (getter=isFocused, nonatomic, readonly) bool focused;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) <_UIGestureOwning> *gestureParent;
@property (nonatomic, copy) NSArray *gestureRecognizers;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } hitTestDirectionalInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestInsets;
@property (getter=bs_isHitTestingDisabled, setter=bs_setHitTestingDisabled:, nonatomic) bool hitTestingDisabled;
@property (nonatomic, retain) UIHoverStyle *hoverStyle;
@property (nonatomic, readonly) ICAppearanceInfo *ic_appearanceInfo;
@property (nonatomic, copy) UIColor *ic_backgroundColor;
@property (nonatomic, readonly) double ic_backingScaleFactor;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } ic_directionalSafeAreaInsets;
@property (nonatomic, readonly) UIScrollView *ic_enclosingScrollView;
@property (nonatomic, readonly) double ic_hairlineWidth;
@property (nonatomic, readonly) bool ic_hasCompactHeight;
@property (nonatomic, readonly) bool ic_hasCompactSize;
@property (nonatomic, readonly) bool ic_hasCompactWidth;
@property (nonatomic, readonly) bool ic_isInSecureWindow;
@property (nonatomic, readonly) bool ic_isRTL;
@property (nonatomic, readonly) UITraitCollection *ic_platformAppearanceObject;
@property (nonatomic, readonly) ICViewControllerManager *ic_viewControllerManager;
@property (nonatomic, readonly) UIWindowScene *ic_windowScene;
@property (nonatomic, retain) UIColor *interactionTintColor;
@property (nonatomic) bool invalidatingIntrinsicContentSizeAlsoInvalidatesSuperview;
@property (getter=_isBoundingPathNonRectangular, nonatomic, readonly) bool isBoundingPathNonRectangular;
@property (nonatomic, readonly) bool isTransparentFocusItem;
@property (nonatomic, readonly) bool isVibrantContainer;
@property (setter=is_setBlurRadius:, nonatomic) double is_blurRadius;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } jet_focusedFrame;
@property (nonatomic) long long juLayoutDirection;
@property (nonatomic, readonly) UIKeyboardLayoutGuide *keyboardLayoutGuide;
@property (nonatomic, readonly) UIKeyboardSceneDelegate *keyboardSceneDelegate;
@property (nonatomic, retain) UIImage *largeContentImage;
@property (nonatomic, readonly) UIImage *largeContentImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } largeContentImageInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } largeContentImageInsets;
@property (nonatomic, copy) NSString *largeContentTitle;
@property (nonatomic, readonly, copy) NSString *largeContentTitle;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property (nonatomic, readonly) double lastBaselineFromBottom;
@property (nonatomic, readonly) double lastBaselineMaxY;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, copy) NSArray *layoutGuides;
@property (setter=_setLayoutMarginsGuide:, nonatomic, retain) UILayoutGuide *layoutMarginsGuide;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (getter=_maskView, setter=_setMaskView:, nonatomic, retain) UIView *maskView;
@property (nonatomic, copy) NSString *maximumContentSizeCategory;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumLayoutSize;
@property (getter=_mayRemainFocused, nonatomic, readonly) bool mayRemainFocused;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } mediaControls_untransformedFrame;
@property (nonatomic, copy) NSString *minimumContentSizeCategory;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumLayoutSize;
@property (nonatomic, readonly) <MKInfoCardTheme> *mk_theme;
@property (getter=_monitorsSubtree, setter=_setMonitorsSubtree:, nonatomic) bool monitorsSubtree;
@property (setter=mt_setBackgroundEffects:, nonatomic, copy) NSArray *mt_backgroundEffects;
@property (setter=mt_setCaptureGroupName:, nonatomic, copy) NSString *mt_captureGroupName;
@property (setter=mt_setContentEffects:, nonatomic, copy) NSArray *mt_contentEffects;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } mt_statusBarFrame;
@property (setter=mt_setVisualEffect:, nonatomic, copy) UIVisualEffect *mt_visualEffect;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } mtui_boundsCenter;
@property (nonatomic, readonly) bool mtui_isRTL;
@property (nonatomic, copy) UIColor *mui_backgroundColor;
@property (nonatomic) bool mui_clipsToBounds;
@property (setter=naui_setDynamicFontTextStyleDescriptor:, nonatomic, retain) NAUITextStyleDescriptor *naui_dynamicFontTextStyleDescriptor;
@property (getter=nc_isMenuEnabled, setter=nc_setMenuEnabled:, nonatomic) bool nc_menuEnabled;
@property (getter=nc_isPlatterSubordinateIconShadowEnabled, setter=nc_setPlatterSubordinateIconShadowEnabled:, nonatomic) bool nc_platterSubordinateIconShadowEnabled;
@property (nonatomic) bool neverCacheEffectiveLayoutSize;
@property (setter=nsli_setPiercingToken:) unsigned long long nsli_piercingToken;
@property (nonatomic) long long overrideUserInterfaceStyle;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, copy) UIPasteConfiguration *pasteConfiguration;
@property (nonatomic, readonly) <PBFDisplayContext> *pbf_displayContext;
@property (nonatomic, readonly) long long pbf_layoutOrientation;
@property (setter=pk_setHoverLabelAttributedString:, nonatomic, retain) NSAttributedString *pk_hoverLabelAttributedString;
@property (setter=pk_setHoverLabelString:, nonatomic, retain) NSString *pk_hoverLabelString;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (getter=_previewingSegueTemplateStorage, setter=_setPreviewingSegueTemplateStorage:, nonatomic, retain) UIStoryboardPreviewingSegueTemplateStorage *previewingSegueTemplateStorage;
@property (nonatomic, readonly) bool px_hasHiddenAncestor;
@property (nonatomic, readonly) bool px_hasRightToLeftLayoutDirection;
@property (nonatomic, readonly) bool px_intersectsWindowBounds;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } px_peripheryInsets;
@property (nonatomic, readonly) double px_screenScale;
@property (setter=px_setSpec:, nonatomic, retain) PXViewSpec *px_spec;
@property (setter=_setReadableContentGuide:, nonatomic, retain) UILayoutGuide *readableContentGuide;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (nonatomic, retain) UIColor *roundedRectBackgroundColor;
@property (nonatomic, retain) UIColor *roundedRectBorderColor;
@property (nonatomic, retain) NSNumber *roundedRectBorderWidth;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeAreaInsetFrame;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, readonly) UILayoutGuide *safeAreaLayoutGuide;
@property (getter=_safeAreaWidthExceedsReadableWidth, nonatomic, readonly) bool safeAreaWidthExceedsReadableWidth;
@property (getter=isSauiBlurConfigured, nonatomic, readonly) bool sauiBlurConfigured;
@property (setter=setSauiBlurRadius:, nonatomic) double sauiBlurRadius;
@property (getter=_sbDisplayConfiguration, nonatomic, readonly) FBSDisplayConfiguration *sbDisplayConfiguration;
@property (getter=_sbWindowScene, nonatomic, readonly) SBWindowScene *sbWindowScene;
@property (nonatomic) bool scalesLargeContentImage;
@property (nonatomic, readonly) bool scalesLargeContentImage;
@property (nonatomic) long long semanticContentAttribute;
@property (nonatomic, readonly) NSString *sf_privacyPreservingDescription;
@property (nonatomic, readonly) NSString *sf_viewAncestrySummary;
@property (nonatomic, retain) UIColor *shadowUIColor;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic) bool showsLargeContentViewer;
@property (nonatomic, readonly) bool showsLargeContentViewer;
@property (nonatomic) bool skipsSubviewEnumeration;
@property (setter=smu_setContinuousCornerRadius:, nonatomic) double smu_continuousCornerRadius;
@property (setter=smu_setCornerRadius:, nonatomic) double smu_cornerRadius;
@property (setter=smu_setSpeedBumpEdges:, nonatomic) unsigned long long smu_speedBumpEdges;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } smu_touchInsets;
@property (nonatomic) double spotlightBackgroundWeighting;
@property (nonatomic, copy) NSArray *subviews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *swift_asPrimaryStrokeViewDecoratorEmbeddable;
@property (nonatomic, readonly) UIView *swift_asSecondaryStrokeViewDecoratorEmbeddable;
@property (nonatomic) long long tag;
@property (nonatomic, readonly) TMLContext *tmlContext;
@property (nonatomic, copy) NSDictionary *tmlObjects;
@property (nonatomic, readonly) NSString *tmlViewPath;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *topAnchor;
@property (nonatomic, readonly) long long tp_userInterfaceLayoutDirection;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) <UITraitOverrides> *traitOverrides;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) unsigned long long ts_accessibilityInterfaceStyleIntent;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } ts_frameUsingCenterAndBounds;
@property (nonatomic) double tsdAlpha;
@property (nonatomic, copy) UIColor *tsdBackgroundColor;
@property (nonatomic, copy) NSString *ttrFocusGroupIdentifier;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic, readonly) UIView *view;
@property (getter=_viewDelegate, nonatomic, readonly) UIViewController *viewDelegate;
@property (nonatomic) bool viewTraversalMark;
@property (nonatomic) double vk_alpha;
@property (nonatomic, copy) UIColor *vk_backgroundColor;
@property (nonatomic, readonly) double vk_backingScaleFactor;
@property (nonatomic, readonly) bool vk_isFirstResponder;
@property (nonatomic, readonly) bool vk_isFlipped;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } vk_safeAreaBounds;
@property (nonatomic) bool vk_userInteractionEnabled;
@property (nonatomic, readonly) double vk_viewPointRatioFromWindow;
@property (nonatomic, readonly) double vk_windowPointRatioFromView;
@property (nonatomic, retain) NSString *vuiAccessibilityIdentifier;
@property (nonatomic) double vuiAlpha;
@property (nonatomic) unsigned long long vuiAutoresizingMask;
@property (nonatomic, retain) UIColor *vuiBackgroundColor;
@property (nonatomic) struct CGPoint { double x1; double x2; } vuiCenter;
@property (nonatomic) bool vuiClipsToBounds;
@property (nonatomic) unsigned long long vuiContentMode;
@property (nonatomic, readonly) bool vuiDebugUI;
@property (nonatomic, readonly) bool vuiIsRTL;
@property (nonatomic, readonly) CALayer *vuiLayer;
@property (nonatomic, readonly) unsigned long long vuiOverrideUserInterfaceStyle;
@property (nonatomic, readonly) NSArray *vuiSubviews;
@property (nonatomic, retain) UIColor *vuiTintColor;
@property (nonatomic, readonly) UITraitCollection *vuiTraitCollection;
@property (getter=vuiIsUserInteractionEnabled, nonatomic) bool vuiUserInteractionEnabled;
@property (nonatomic, readonly) unsigned long long vuiUserInterfaceStyle;
@property (nonatomic) bool wantsDeepColorDrawing;
@property (nonatomic, readonly) NSLayoutDimension *widthAnchor;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_addCompletion:(id /* block */)arg1;
+ (bool)_addCompletionWithPosition:(id /* block */)arg1;
+ (void)_addHierarchyTrackingVisitor:(id)arg1;
+ (void)_addOrPerformCompletion:(id /* block */)arg1;
+ (void)_addOrPerformCompletionWithPosition:(id /* block */)arg1;
+ (bool)_allowsUnsupportedMacIdiomBehavior;
+ (id /* block */)_alongsideAnimations;
+ (void)_animateByRetargetingAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (void)_animateUsingDefaultDampedSpringWithDelay:(double)arg1 initialSpringVelocity:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)_animateUsingDefaultTimingWithOptions:(unsigned long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)_animateUsingSpringBehavior:(id)arg1 tracking:(bool)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)_animateUsingSpringInteractive:(bool)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)_animateUsingSpringWithDampingRatio:(double)arg1 response:(double)arg2 tracking:(bool)arg3 dampingRatioSmoothing:(double)arg4 responseSmoothing:(double)arg5 targetSmoothing:(double)arg6 projectionDeceleration:(double)arg7 animations:(id /* block */)arg8 completion:(id /* block */)arg9;
+ (void)_animateUsingSpringWithDampingRatio:(double)arg1 response:(double)arg2 tracking:(bool)arg3 dampingRatioSmoothing:(double)arg4 responseSmoothing:(double)arg5 targetSmoothing:(double)arg6 projectionDeceleration:(double)arg7 retargetImpulse:(double)arg8 animations:(id /* block */)arg9 completion:(id /* block */)arg10;
+ (void)_animateUsingSpringWithDampingRatio:(double)arg1 response:(double)arg2 tracking:(bool)arg3 initialDampingRatio:(double)arg4 initialResponse:(double)arg5 dampingRatioSmoothing:(double)arg6 responseSmoothing:(double)arg7 targetSmoothing:(double)arg8 projectionDeceleration:(double)arg9 animations:(id /* block */)arg10 completion:(id /* block */)arg11;
+ (void)_animateUsingSpringWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 mass:(double)arg4 stiffness:(double)arg5 damping:(double)arg6 initialVelocity:(double)arg7 animations:(id /* block */)arg8 completion:(id /* block */)arg9;
+ (void)_animateUsingSpringWithTension:(double)arg1 friction:(double)arg2 interactive:(bool)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)_animateWithAnimationAndComposerGetter:(id /* block */)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)_animateWithAnimationAndComposerGetter:(id /* block */)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3 animationStateSetup:(id /* block */)arg4;
+ (void)_animateWithAnimationSettings:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)_animateWithAttributes:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)_animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 start:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)_animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 factory:(id)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)_animateWithFilter:(int)arg1 filterView:(id)arg2 filterValue:(double)arg3 duration:(double)arg4 delay:(double)arg5 options:(unsigned long long)arg6 completion:(id /* block */)arg7;
+ (void)_animateWithFrictionBounceAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (id)_appearanceWhenContainedIn:(id)arg1;
+ (void)_beginSuspendingMotionEffectsForReason:(id)arg1;
+ (void)_completeAnimationWithUUID:(id)arg1 duration:(double)arg2 curve:(long long)arg3 reverse:(bool)arg4;
+ (void)_conditionallyModifyAnimations:(bool)arg1 withPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg2 updateReason:(unsigned int)arg3 animations:(id /* block */)arg4;
+ (void)_createTransformerWithInputAnimatableProperties:(id)arg1 modelValueSetter:(id /* block */)arg2 presentationValueSetter:(id /* block */)arg3;
+ (void)_createTransformerWithInputAnimatableProperties:(id)arg1 presentationValueChangedCallback:(id /* block */)arg2;
+ (void)_createUnsafeTransformerWithInputAnimatableProperties:(id)arg1 modelValueSetter:(id /* block */)arg2 presentationValueSetter:(id /* block */)arg3;
+ (id)_currentAnimationAttributes;
+ (long long)_currentAnimationCurve;
+ (double)_currentAnimationDuration;
+ (id)_currentAnimationSettings;
+ (id)_currentViewAnimationState;
+ (id)_defaultInteractionTintColorForIdiom:(long long)arg1;
+ (id)_defaultUIViewActionForLayer:(id)arg1 forKey:(id)arg2;
+ (id)_defaultUIViewAnimationForLayer:(id)arg1 forKey:(id)arg2;
+ (int)_degreesToRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
+ (void)_disableAnimationTracking:(id)arg1;
+ (void)_disableAnimationTracking:(id)arg1 clearTrackedAnimations:(bool)arg2;
+ (id)_disabledColorForTintColor:(id)arg1;
+ (double)_durationForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
+ (double)_durationForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 withBaseDuration:(double)arg3;
+ (id)_enableAnimationTracking;
+ (id)_enableAnimationTracking:(bool)arg1;
+ (bool)_enableLegacyRTL;
+ (bool)_enableRTL;
+ (void)_enableToolsDebugAlignmentRects:(bool)arg1;
+ (void)_enableToolsDebugColorViewBounds:(bool)arg1;
+ (void)_endSuspendingMotionEffectsForReason:(id)arg1;
+ (void)_finalizeStoppedAnimationWithUUID:(id)arg1 reverseAnimation:(bool)arg2;
+ (void)_finalizeStoppedAnimationWithUUID:(id)arg1 reverseAnimation:(bool)arg2 state:(id)arg3 performCompletionsImmediately:(bool)arg4;
+ (void)_finishAnimationTracking;
+ (bool)_hasActiveAnimationContext;
+ (bool)_hostLayoutEngineOnlyTAMIC_YES;
+ (void)_inheritAnimationParameters;
+ (void)_initializeForIdiom:(long long)arg1;
+ (bool)_isAnimationTracking;
+ (bool)_isInAnimationBlock;
+ (bool)_isInAnimationBlockWithAnimationsEnabled;
+ (bool)_isInKeyframeAnimationBlockWithAnimationsEnabled;
+ (bool)_isInRetargetableAnimationBlock;
+ (bool)_legacyRTLPreferenceEnabled;
+ (void)_modifyAnimationsByDecomposingGeometricTypes:(bool)arg1 animations:(id /* block */)arg2;
+ (void)_modifyAnimationsWithPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 reason:(id)arg2 animations:(id /* block */)arg3;
+ (void)_modifyAnimationsWithPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 updateReason:(unsigned int)arg2 animations:(id /* block */)arg3;
+ (bool)_motionEffectsEnabled;
+ (bool)_motionEffectsSupported;
+ (void)_performForcedAppearanceModifications:(id /* block */)arg1;
+ (void)_performSystemAppearanceModifications:(id /* block */)arg1;
+ (void)_performWithAnimation:(id /* block */)arg1;
+ (id)_performWithAnimationTracking:(id /* block */)arg1;
+ (void)_performWithDurationOverride:(double)arg1 animations:(id /* block */)arg2;
+ (void)_performWithState:(id)arg1 trackingIdentifier:(id)arg2 duration:(double)arg3 delay:(double)arg4 animations:(id /* block */)arg5;
+ (void)_performWithoutAnimation:(id /* block */)arg1;
+ (void)_performWithoutRetargetingAnimations:(id /* block */)arg1;
+ (bool)_preventsAppearanceProxyCustomization;
+ (void)_recenterMotionEffects;
+ (void)_registerClassForIdiomInitializationIfNeccessary;
+ (void)_removeHierarchyTrackingVisitor:(id)arg1;
+ (void)_resetHostLayoutEngineOnlyTAMIC_YES;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(bool)arg1;
+ (void)_setAlongsideAnimations:(id /* block */)arg1;
+ (void)_setAlongsideAnimations:(id /* block */)arg1 toRunByEndOfBlock:(id /* block */)arg2;
+ (void)_setAnimatedPropertiesEnabled:(bool)arg1;
+ (void)_setAnimationAttributes:(id)arg1;
+ (void)_setAnimationAttributes:(id)arg1 skipDelegateAssignment:(bool)arg2;
+ (void)_setHostLayoutEngineOnlyTAMIC_YES;
+ (void)_setShouldEnableUIKitParallaxEffects:(bool)arg1;
+ (bool)_shouldTrackActionWithAnimator:(id)arg1;
+ (bool)_shouldTrackAnimationsWithAnimator;
+ (id)_startAnimationTracking;
+ (void)_stopAnimationWithUUID:(id)arg1;
+ (bool)_supportsInvalidatingFocusCache;
+ (void)_testIfFirstView:(id)arg1 secondView:(id)arg2 areDescendantsOfView:(id)arg3 results:(bool)arg4;
+ (bool)_toolsDebugAlignmentRects;
+ (bool)_toolsDebugColorViewBounds;
+ (bool)_toolsDebugShouldDetectClippedViews;
+ (void)_transitionWithView:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 transitionOptions:(id)arg4 completion:(id /* block */)arg5;
+ (void)_updateModelValuesForAnimationWithUUID:(id)arg1 useInitialValues:(bool)arg2 animatable:(bool)arg3 stateBlock:(id /* block */)arg4 animationBlock:(id /* block */)arg5;
+ (void)_updateOrientationForMotionEngine:(long long)arg1;
+ (id)_viewWithLayoutConstraints;
+ (bool)_wantsDeepColorByDefault;
+ (void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(id /* block */)arg3;
+ (void)animateBridgedWithContext:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateKeyframesWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)animateWithDuration:(double)arg1 animations:(id /* block */)arg2;
+ (void)animateWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4 options:(unsigned long long)arg5 animations:(id /* block */)arg6 completion:(id /* block */)arg7;
+ (void)animateWithSpringDuration:(double)arg1 bounce:(double)arg2 initialSpringVelocity:(double)arg3 delay:(double)arg4 options:(unsigned long long)arg5 animations:(id /* block */)arg6 completion:(id /* block */)arg7;
+ (id)appearance;
+ (id)appearanceForTraitCollection:(id)arg1;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2;
+ (id)appearanceMatchingProperties:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2;
+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)appearanceWhenContainedInInstancesOfClasses:(id)arg1;
+ (bool)areAnimationsEnabled;
+ (void)beginAnimations:(id)arg1;
+ (void)beginAnimations:(id)arg1 context:(void*)arg2;
+ (void)commitAnimations;
+ (void)conditionallyAnimate:(bool)arg1 withAnimation:(id /* block */)arg2 layout:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)disableAnimation;
+ (void)enableAnimation;
+ (void)endAnimations;
+ (void)flush;
+ (double)inheritedAnimationDuration;
+ (void)initialize;
+ (Class)layerClass;
+ (void)modifyAnimationsWithRepeatCount:(double)arg1 autoreverses:(bool)arg2 animations:(id /* block */)arg3;
+ (void)performSystemAnimation:(unsigned long long)arg1 onViews:(id)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)performWithoutAnimation:(id /* block */)arg1;
+ (bool)requiresConstraintBasedLayout;
+ (void)setAnimationAutoreverses:(bool)arg1;
+ (void)setAnimationBeginsFromCurrentState:(bool)arg1;
+ (void)setAnimationCurve:(long long)arg1;
+ (void)setAnimationDelay:(double)arg1;
+ (void)setAnimationDelegate:(id)arg1;
+ (void)setAnimationDidStopSelector:(SEL)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationFrameInterval:(double)arg1;
+ (void)setAnimationFromCurrentState:(bool)arg1;
+ (void)setAnimationPosition:(struct CGPoint { double x1; double x2; })arg1;
+ (void)setAnimationPreventsAdditive:(bool)arg1;
+ (void)setAnimationRepeatAutoreverses:(bool)arg1;
+ (void)setAnimationRepeatCount:(float)arg1;
+ (void)setAnimationStartDate:(id)arg1;
+ (void)setAnimationStartTime:(double)arg1;
+ (void)setAnimationTransition:(long long)arg1 forView:(id)arg2;
+ (void)setAnimationTransition:(long long)arg1 forView:(id)arg2 cache:(bool)arg3;
+ (void)setAnimationWillStartSelector:(SEL)arg1;
+ (void)setAnimationsEnabled:(bool)arg1;
+ (void)sticker_modifyAnimationsWithPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 updateReason:(unsigned int)arg2 animations:(id /* block */)arg3;
+ (void)throttledFlush;
+ (void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (void)transitionWithView:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (long long)userInterfaceLayoutDirectionForSemanticContentAttribute:(long long)arg1;
+ (long long)userInterfaceLayoutDirectionForSemanticContentAttribute:(long long)arg1 relativeToLayoutDirection:(long long)arg2;

- (void).cxx_destruct;
- (bool)_StatusBar_isInVisibleHierarchy;
- (bool)_UIViewDebuggingIsViewClipping;
- (bool)__isKindOfUIView;
- (bool)__isLandmarkView;
- (bool)_accessibilityAddItemsToDragSessionAtPlatformPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_accessibilityAddItemsToDragSessionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_accessibilityBeginDragAtPlatformPoint:(struct CGPoint { double x1; double x2; })arg1 endpoint:(id)arg2 completion:(id /* block */)arg3;
- (void)_accessibilityBeginDragAtPoint:(struct CGPoint { double x1; double x2; })arg1 endpoint:(id)arg2 completion:(id /* block */)arg3;
- (bool)_accessibilityCanAddItemsToDragSession;
- (bool)_accessibilityCanDrag;
- (bool)_accessibilityCanDrop;
- (id)_accessibilityDragInteractionsForAddingItems;
- (id)_accessibilityFocusContainers:(bool)arg1;
- (id)_accessibilityHigherContrastTintColorForColor:(id)arg1;
- (unsigned long long)_accessibilityInterfaceStyleIntent;
- (unsigned long long)_accessibilityResolvedInterfaceStyle;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)arg1;
- (void)_accessibilitySetResolvedInterfaceStyle:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessoryViewFrame;
- (void)_accumulateViewConstraintsIntoArray:(id)arg1;
- (id)_actingGestureParent;
- (id)_actingParentViewForGestureRecognizers;
- (id)_activeSizeToFitLayoutEngine;
- (id)_activityItemsConfigurationAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_addBoundingPathChangeObserver:(id)arg1;
- (void)_addBoundsMatchingConstraintsForView:(id)arg1;
- (void)_addCenterExpressionToExpression:(id)arg1 isVertical:(bool)arg2;
- (void)_addConstraintPendingAnimatedChanges:(id)arg1;
- (void)_addMotionEffect:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_alignmentBounds;
- (id)_alignmentDebuggingOverlayCreateIfNecessary:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_alignmentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_alignmentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_alignmentRectInsetsHaveChangedForChildImageView:(id)arg1;
- (id)_alignmentRectOriginCache;
- (id)_allLayoutEngines;
- (id)_allSublayers;
- (id)_allSubviews;
- (bool)_allowAssistanceInSubtree;
- (bool)_allowsArchivingAsSubview;
- (bool)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1;
- (bool)_allowsHighContrastForBackgroundColor;
- (bool)_allowsLinkPreviewInteractionInViewServices;
- (bool)_alwaysHandleScrollerMouseEvent;
- (bool)_ancestorHasInvertFilterApplied;
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_animatePropertyWithKey:(id)arg1 currentValue:(id)arg2 targetValue:(id)arg3 newValueCallback:(id /* block */)arg4;
- (id)_appearanceContainer;
- (Class)_appearanceGuideClass;
- (bool)_appearanceIsInvalid;
- (id)_appearanceTraitCollection;
- (id)_appliedContentSizeCategoryLimitsDescription;
- (bool)_appliesExclusiveTouchToSubviewTree;
- (void)_applyAppearanceInvocations;
- (void)_applyISEngineLayoutValuesToBoundsOnly:(bool)arg1;
- (bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (void)_applyPendingTraitStorageConstraints;
- (void)_applyResolvedShape:(id)arg1;
- (void)_applyShape:(id)arg1;
- (bool)_associatedViewControllerForwardsAppearanceCallbacks:(id)arg1 performHierarchyCheck:(bool)arg2 isRoot:(bool)arg3;
- (id)_attributesForFocusRegionContent;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
- (id)_autolayoutTrace;
- (id)_autolayoutTraceAtLevel:(long long)arg1 recursively:(bool)arg2;
- (id)_autolayoutTraceRecursively:(bool)arg1;
- (void)_autoresizingConstraints_frameDidChange;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (id)_backdropGroups;
- (long long)_backdropMaskViewFlags;
- (id)_backdropMaskViewForColorTint;
- (id)_backdropMaskViewForFilters;
- (id)_backdropMaskViewForFlag:(long long)arg1;
- (id)_backdropMaskViewForGrayscaleTint;
- (id)_backdropMaskViews;
- (struct CGColor { }*)_backgroundCGColor;
- (id)_backgroundColor;
- (long long)_backgroundMergeBehavior;
- (double)_baselineOffsetFromBottom;
- (double)_baselineOffsetFromNearestEdgeForLayoutAttribute:(long long)arg1;
- (struct { double x1; double x2; })_baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_basicAnimationWithKeyPath:(id)arg1;
- (bool)_becomeFirstResponderWhenPossible;
- (bool)_beginDragWithInteractionTouches:(id)arg1;
- (bool)_beginDragWithTouches:(id)arg1 orInitialCentroid:(struct CGPoint { double x1; double x2; })arg2 accessibilityEndpoint:(id)arg3;
- (void)_beginOcclusion:(id)arg1;
- (id)_boundingPath;
- (id)_boundingPathForSubtree;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForSceneDraggingConstrainedToSafeArea:(bool)arg1;
- (id)_boundsHeightVariable;
- (id)_boundsWidthVariable;
- (bool)_cachedTraitCollectionIsValid;
- (void)_calculateSubviewAlignmentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 superviewAlignmentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forAutoresizingMask:(unsigned long long)arg3 preservingNonzeroSuperviewAlignmentBoundsOriginForCompatibility:(bool)arg4;
- (double)_calculatedIntrinsicHeight;
- (struct CGSize { double x1; double x2; })_calculatedSystemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 hasIntentionallyCollapsedHeight:(bool*)arg4;
- (bool)_canBeParentTraitEnvironment;
- (bool)_canBeReusedInPickerView;
- (bool)_canBecomeFirstResponderWhenPossible;
- (bool)_canBecomeLayoutEngineDelegate;
- (bool)_canDrawContent;
- (bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_canHostViewControllerContentScrollView;
- (bool)_canPerformDefaultImplementationForStandardEditAction:(SEL)arg1;
- (bool)_canSkipTraitsAndOverlayUpdatesForViewControllerToNotifyOnLayoutResetState:(bool)arg1;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(bool)arg2 contentInsetScale:(double)arg3 engine:(id)arg4;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)_childFocusViews;
- (void)_clearAnimationFilters;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)_clearConstraintsBrokenWhileUnsatisfiableConstraintsLoggingSuspended;
- (void)_clearLayoutVariableObservationsOnlyToSupportTAMICChange:(bool)arg1;
- (void)_clearSafeAreaInsets;
- (unsigned long long)_clipCorners;
- (unsigned long long)_clipCornersOfView:(id)arg1;
- (id)_clippedViewHierarchyDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippingRectInCoordinateSpace:(id)arg1;
- (bool)_clipsGlyphPathFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shouldContinueSuperviewTraversal:(bool*)arg2;
- (void)_collectKeyViews:(id)arg1;
- (void)_collectKeyViews:(id)arg1 visibilityTest:(id /* block */)arg2 passingTest:(id /* block */)arg3;
- (void)_collectKeyViews:(id)arg1 visibilityTest:(id /* block */)arg2 passingTest:(id /* block */)arg3 subviewsTest:(id /* block */)arg4;
- (id)_colorViewBoundsOverlayCreateIfNecessary:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_compatibleBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_concreteDefaultLayoutMargins;
- (void)_configureAutolayoutFlagsNeedingLayout:(bool)arg1;
- (void)_constantsForHorizontalAutoresizingConstraints:(double*)arg1 :(double*)arg2;
- (void)_constantsForVerticalAutoresizingConstraints:(double*)arg1 :(double*)arg2;
- (void)_constrainViewToSuperview;
- (id)_constraintsArray;
- (id)_constraintsBrokenWhileUnsatisfiableConstraintsLoggingSuspendedCreateIfNecessary:(bool)arg1;
- (id)_constraintsExceptingSubviewAutoresizingConstraints;
- (id)_constraintsValidityDescription;
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (bool)_containedInAbsoluteResponderChain;
- (id)_containerForContentSizeConstraints;
- (id)_containingScrollView;
- (struct CGSize { double x1; double x2; })_contentCompressionResistancePriorities;
- (id)_contentHeightVariable;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize { double x1; double x2; })_contentHuggingPriorities;
- (double)_contentMargin;
- (void)_contentSizeCategoryLimitsDidChange;
- (id)_contentSizeNotificationToken;
- (id)_contentWidthVariable;
- (id)_contentXOffsetVariable;
- (id)_contentYOffsetVariable;
- (double)_continuousCornerRadius;
- (bool)_controlsOwnScaleFactor;
- (void)_convertToAutolayoutSizingIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertViewPointToSceneSpaceForKeyboard:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_convertVisualAltitude:(double)arg1 fromView:(id)arg2;
- (double)_convertVisualAltitude:(double)arg1 toView:(id)arg2;
- (id)_cornerCurve;
- (double)_cornerRadius;
- (unsigned long long)_countOfFocusedAncestorTrackingViewsInSubtree;
- (unsigned long long)_countOfMotionEffectsInSubtree;
- (void*)_createIOSurfaceWithPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_createJostledViewsIfNecessary;
- (id)_currentFocusAnimationCoordinator;
- (double)_currentScreenScale;
- (long long)_currentUserInterfaceIdiom;
- (id)_debuggableDescriptionForConstraintsAffectingAxis:(long long)arg1;
- (id)_debuggableDescriptionForConstraintsAffectingHorizontalAxis;
- (id)_debuggableDescriptionForConstraintsAffectingVerticalAxis;
- (void)_decodeLargeContentViewerPropertiesWithCoder:(id)arg1;
- (void)_decrementHiddenManagedByLayoutArrangementCount;
- (double)_defaultAutolayoutSpacing;
- (id)_defaultFocusEffect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultFocusRegionFrame;
- (id)_defaultLayoutDescription;
- (long long)_defaultTintAdjustmentMode;
- (id)_deferredAnimationForKey:(id)arg1;
- (bool)_definesDynamicTintColor;
- (bool)_definesTintColor;
- (bool)_delaysTouchesForSystemGestures;
- (long long)_depthComparison:(id)arg1;
- (id)_descendantWithAmbiguousLayout;
- (id)_descriptionForLayoutTrace;
- (void)_detectAndHandleClippedView;
- (void)_diagnoseFocusInteractionEligibilityForReport:(id)arg1;
- (void)_diagnoseFocusabilityForReport:(id)arg1;
- (void)_didAddDependentConstraint:(id)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (void)_didInvalidateIntrinsicContentSize;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didRemoveDependentConstraint:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)_didScroll;
- (void)_didStopBeingDisplayedInPointerContentEffect;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_dimensionExpressionInContainer:(id)arg1 vertical:(bool)arg2 useContentVariables:(bool)arg3 engine:(id)arg4;
- (bool)_disableDictationTouchCancellation;
- (bool)_disableGeometryObserverNotification;
- (void)_disableLayoutFlushing;
- (long long)_disableLayoutFlushingCount;
- (id)_disabledColor;
- (void)_discardLayoutEngine:(id)arg1;
- (bool)_dontUpdateInferredLayoutMargins;
- (id)_draggingSourceDelegate;
- (bool)_drawsAsBackdropOverlay;
- (id)_dummyFittingSizeInfo;
- (void)_dumpClippedViewWithScreenshotIfNecessary;
- (id)_dynamicDropInteraction;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_edgeExpressionInContainer:(id)arg1 vertical:(bool)arg2 max:(bool)arg3 contentInsetScale:(double)arg4 engine:(id)arg5;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (id)_effectiveBoundingPathAndBoundingPathView:(id*)arg1;
- (void)_enableLayerKitPatternDrawing:(bool)arg1;
- (void)_enableLayoutFlushing;
- (id)_enclosingInterfaceActionGroupView;
- (id)_enclosingInterfaceActionRepresentationView;
- (id)_enclosingScrollableScrollerIncludingSelf;
- (id)_enclosingScrollerIncludingSelf;
- (id)_encodableSubviews;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)_encodeFrameWithCoder:(id)arg1;
- (void)_encodeLargeContentViewerPropertiesWithCoder:(id)arg1;
- (void)_endOcclusion:(id)arg1;
- (void)_engineHostConstraints_frameDidChange;
- (id)_engineHostingWidthConstraint;
- (void)_ensureViewsAreInstalledInRelativeOrder:(id*)arg1 viewCount:(long long)arg2 insertionStartIndex:(long long)arg3;
- (void)_enumerateDescendentViews:(id /* block */)arg1;
- (id)_eventReceivingWindow;
- (id)_extantFocusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_extraInfoForTraitTrace;
- (bool)_fakeShouldAnimatePropertyWithKey:(id)arg1;
- (void*)_fallbackTraitCollection;
- (void)_faultInContentOffsetGuide;
- (void)_faultInGuidesForConstraint:(id)arg1;
- (double)_findAutolayoutHeightConstraint;
- (id)_findInteractionIfExists;
- (void)_finishTrackingForAnimationRestoration;
- (id)_firstAncestorInteractionConformingToProtocol:(id)arg1;
- (double)_firstBaselineOffsetFromTop;
- (id)_firstCommonAncestorToView:(id)arg1 givenCommonAncestor:(id)arg2;
- (id)_firstResponder;
- (bool)_flipsHorizontalAxis;
- (void)_flushConstraintsPendingAnimatedChanges;
- (id)_focusBehavior;
- (id)_focusDebugOverlayParentView;
- (id)_focusGesturesForFailureRequirements;
- (unsigned long long)_focusGuideBehaviorForFocusMovement:(id)arg1;
- (long long)_focusItemDeferralMode;
- (id)_focusMapContainer;
- (id)_focusRegionFocusSystem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusRegionFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusRegionFrameInCoordinateSpace:(id)arg1;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (id)_focusSystem;
- (id)_focusSystemSceneComponent;
- (long long)_focusTouchSensitivityStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_focusableContentMargins;
- (long long)_focusedSound;
- (bool)_forceLayoutEngineSolutionInRationalEdges;
- (bool)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameIgnoringLayerTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInCoordinateSpace:(id)arg1 window:(id)arg2;
- (id)_frameLayoutItem;
- (id)_fulfillPromisedFocusRegion;
- (void)_gatherKeyResponders:(id)arg1 indexOfSelf:(unsigned long long*)arg2 visibilityTest:(id /* block */)arg3 passingTest:(id /* block */)arg4 subviewsTest:(id /* block */)arg5;
- (id)_generateBackdropMaskImage;
- (id)_generateBackdropMaskViewForFlag:(long long)arg1;
- (void)_generateDeferredAnimations:(id)arg1;
- (void)_geometryChanged:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (bool)_gestureRecognizerShouldReceiveTouch:(id)arg1;
- (id)_gestureRecognizers;
- (id)_getGhostPortal;
- (struct CGPoint { double x1; double x2; })_getSourceCenter;
- (void)_handleDoubleUpdateConstraintsIfNecessary;
- (void)_handleLayoutArrangementConstraintsIfNecessary;
- (void)_handleLayoutEngineHostingConstraintsIfNecessary;
- (void)_handleSizeConstraintsAsAppropriate;
- (bool)_hasAmbiguousLayout;
- (bool)_hasAutolayoutHeightConstraint;
- (bool)_hasBackgroundMaterial;
- (bool)_hasBaseline;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hasDefaultImplementationForStandardEditAction:(SEL)arg1;
- (bool)_hasFontInfoForVerticalBaselineSpacing;
- (bool)_hasLayoutArrangements;
- (bool)_hasLayoutEngine;
- (long long)_hiddenManagedByLayoutArrangementCount;
- (id)_hierarchyRepresentation;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (bool)_hostsLayoutEngine;
- (bool)_hostsLayoutEngineAllowsTAMIC_NO;
- (id)_idleModeLayoutAttributes;
- (bool)_ignoreBackdropViewsWhenHiding;
- (bool)_ignoreRemoveAllAnimations;
- (bool)_ignoresLayerTransformForSafeAreaInsets;
- (double)_imageButtonMargin;
- (id)_imageFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_imageFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 gamut:(long long)arg2;
- (bool)_inSecondConstraintsPass;
- (void)_incrementHiddenManagedByLayoutArrangementCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_inferredLayoutMargins;
- (void)_informContainerThatSubviewsNeedUpdateConstraintsNeedingLayout:(bool)arg1;
- (id)_inheritedInteractionTintColor;
- (id)_inheritedRenderConfig;
- (id)_initWithLayer:(id)arg1;
- (id)_initialValueForKey:(id)arg1;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(bool)arg3;
- (void)_initializeHostedLayoutEngine;
- (void)_initializeLayoutEngine;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inscribedRectInBoundingPathByInsettingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onEdges:(unsigned long long)arg2 withOptions:(unsigned long long)arg3;
- (void)_insertPrivateSubview:(id)arg1 aboveLayer:(id)arg2;
- (void)_insertPrivateSubview:(id)arg1 belowLayer:(id)arg2;
- (id)_interactionTintColor;
- (id)_interceptEvent:(id)arg1;
- (id)_interceptMouseEvent:(struct __GSEvent { }*)arg1;
- (id)_internalConstraints;
- (double)_internalFirstBaselineOffsetFromTop;
- (double)_internalLastBaselineOffsetFromBottom;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateAppearance;
- (void)_invalidateAppearanceForSubviewsOfClass:(Class)arg1;
- (void)_invalidateAppearanceForTraitCollection:(id)arg1;
- (void)_invalidateBaselineConstraints;
- (void)_invalidateConfiguration;
- (void)_invalidateIntrinsicContentSizeNeedingLayout:(bool)arg1;
- (void)_invalidateLayoutEngineHostConstraints;
- (void)_invalidateSubviewCache;
- (void)_invalidateSystemLayoutSizeFittingSizeAtEngineDelegateLevel;
- (bool)_isAncestorOfFirstResponder;
- (bool)_isBoundingPathNonRectangular;
- (bool)_isChargeEnabled;
- (bool)_isContainedInHostedFocusSystem;
- (bool)_isEligibleForFocusGivenAlpha;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isEligibleForFocusOcclusion;
- (bool)_isFindAction:(SEL)arg1;
- (bool)_isFloatingLayoutItem;
- (bool)_isFocusDirectionFlippedHorizontally;
- (bool)_isFocusInteractionEnabled;
- (bool)_isFocusedOrAncestorOfFocusedView;
- (bool)_isGestureOwningType:(long long)arg1;
- (bool)_isHasBaselinePropertyChangeable;
- (bool)_isHiddenForReuse;
- (bool)_isInAWindow;
- (bool)_isInAnimatedLayout;
- (bool)_isInExclusiveTouchSubviewTree;
- (bool)_isInLayoutSubviews;
- (bool)_isInTransitionBlock;
- (bool)_isKnownUISearchBarComponentContainer;
- (bool)_isLazyFocusItemContainer;
- (bool)_isManuallyResizedBySuperview;
- (bool)_isMemberOfViewControllerHierarchy:(id)arg1;
- (bool)_isPromiseFocusRegion;
- (bool)_isRootForKeyResponderCycle;
- (bool)_isScrollingEnabled;
- (bool)_isTransparentFocusRegion;
- (bool)_isUnsatisfiableConstraintsLoggingSuspended;
- (bool)_isView;
- (void)_is_layout;
- (bool)_is_needsLayout;
- (void)_is_setNeedsLayout;
- (id)_kb_description;
- (long long)_keyboardOrientation;
- (bool)_la_isVisible;
- (id)_largeContentStoredProperties;
- (id)_largeContentStoredPropertiesCreatingIfNecessary:(bool)arg1;
- (id)_largeContentViewerGestureManager;
- (id)_largeContentViewerItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint { double x1; double x2; })arg1 aspectRatio:(double)arg2;
- (id)_lastNotifiedTraitCollection;
- (id)_layer;
- (id)_layoutDebuggingIdentifier;
- (id)_layoutDebuggingTitle;
- (id)_layoutDescriptionIfDifferentFromDefault;
- (id)_layoutEngine;
- (id)_layoutEngineCreateIfNecessary;
- (id)_layoutEngineHostConstraints;
- (id)_layoutEngineIfAvailable;
- (bool)_layoutEngineRelativeAlignmentRectOriginIsValid;
- (bool)_layoutEngine_isEngineMergingAllowedBetweenEngine:(id)arg1 itemEngine:(id)arg2 forConstraint:(id)arg3 initialView:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutGuide:(id)arg1 adjustedLayoutFrameForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_layoutHeightDependsOnWidth;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_layoutMarginsGuideIfExists;
- (bool)_layoutMarginsGuideIgnoresSystemMinimumMargins;
- (void)_layoutMarginsWillChange;
- (id)_layoutRect;
- (struct CGSize { double x1; double x2; })_layoutSizeThatFits:(struct CGSize { double x1; double x2; })arg1 fixedAxes:(unsigned long long)arg2;
- (id)_layoutVariablesWithAmbiguousValue;
- (bool)_legacy_isEligibleForFocusInteraction;
- (void)_lfld_addConstraintsAffectingVariableValueChange:(id)arg1;
- (void)_lfld_addGeometryChangeRecordWithPropertyName:(id)arg1 value:(id)arg2;
- (void)_lfld_addSetNeedsLayoutCallStack:(id)arg1;
- (void)_lfld_addVariableChangeRecordForVariable:(id)arg1 inLayoutEngine:(id)arg2;
- (id)_lfld_constraintsAffectingVariableValueChanges;
- (long long)_lfld_count;
- (id)_lfld_currentLayoutMethodName;
- (id)_lfld_description;
- (void)_lfld_discardLastCurrentLayoutMethodName;
- (id)_lfld_geometryChangeRecords;
- (void)_lfld_incrementCount;
- (id)_lfld_minimalDescription;
- (void)_lfld_prepareToResetCountIfNecessary;
- (void)_lfld_pushCurrentLayoutMethodName:(id)arg1;
- (void)_lfld_resetCount;
- (id)_lfld_setNeedsLayoutCallStacks;
- (id)_lfld_variableChangeRecords;
- (bool)_lightStyleRenderConfig;
- (id)_localOverrideTraitCollection;
- (id)_lowerExpressionOneLevelWithCurrentXExpression:(id)arg1 YExpression:(id)arg2 vertical:(bool)arg3 container:(id)arg4 engine:(id)arg5;
- (void)_makeSubtreePerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)_makeSubtreePerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 copySublayers:(bool)arg4;
- (void)_makeTemporaryInternalConstraintsWithEngine:(id)arg1 ignoreAutoresizingMaskConstraints:(bool)arg2 returningConstraintsForViewsNeedingSecondPass:(id*)arg3 currentTargetWidth:(double)arg4;
- (id)_maskView;
- (id)_maximumContentSizeCategory;
- (bool)_mayRemainFocused;
- (void)_measureViewWithSize:(struct CGSize { double x1; double x2; })arg1 temporaryConstraints:(id)arg2 suspendingSystemConstraints:(bool)arg3 withOptimizedEngineBlock:(id /* block */)arg4;
- (void)_mergeConstraintsBrokenWhileUnsatisfiableConstraintsLoggingSuspendedToAncestor:(id)arg1;
- (id)_minXVariable;
- (id)_minYVariable;
- (id)_minimumContentSizeCategory;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_minimumSafeAreaInsets;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (bool)_monitorsSubtree;
- (bool)_monitorsView:(id)arg1;
- (id)_motionEffects;
- (bool)_motionEffectsAreSuspended;
- (double)_multilineContextWidth;
- (id)_mutableLayoutArrangements;
- (id)_mutableLayoutGuides;
- (id)_nativeInteractions;
- (id)_nearestViewController;
- (bool)_needsContentsFormatUpdate;
- (bool)_needsDoubleUpdateConstraintsPass;
- (bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_nextKeyResponder;
- (id)_normalInheritedTintColor;
- (void)_noteTraitsDidChangeRecursively;
- (void)_notifyReferenceViewSizeChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_nsis_bounds;
- (struct CGSize { double x1; double x2; })_nsis_contentSize;
- (struct CGPoint { double x1; double x2; })_nsis_origin;
- (void)_nsis_origin:(struct CGPoint { double x1; double x2; }*)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inEngine:(id)arg3;
- (void)_objc_initiateDealloc;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (bool)_ola_isCandidateForMultilineTextWidthDisambiguationWhenArranged;
- (bool)_ola_shouldUseImprovedMultilineTextDisambiguation;
- (void)_ola_willApplyMultilineTextWidthDisambiguationConstraint;
- (void)_oldEngineHostConstraints_frameDidChange;
- (void)_oldUpdateLayoutEngineHostConstraints;
- (bool)_old_nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4;
- (id)_outermostLayer;
- (id)_outlineShape;
- (long long)_overrideUserInterfaceRenderingMode;
- (long long)_overrideUserInterfaceStyle;
- (long long)_overrideVibrancyTrait;
- (double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2;
- (id)_parentDescription;
- (id)_parentTraitEnvironment;
- (void)_parentalLayoutEngineDidChangeTo:(id)arg1;
- (long long)_pendingHiddenCount;
- (void)_populateArchivedSubviews:(id)arg1;
- (bool)_preWhitetailUsesAutoresizingConstraints;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (double)_preferredDurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (double)_preferredDurationScaleFactorForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)_preferredFocusRegionCoordinateSpace;
- (id)_preferredHoverEffect;
- (id)_preferredHoverShape;
- (double)_preferredMaxLayoutWidth;
- (bool)_prefersDrawingWithForcedScaleFactorInClassicMode;
- (bool)_prefersFocusContainment;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prepareForWindowDealloc;
- (void)_prepareForWindowHostingSceneRemoval;
- (id)_presentationControllerToNotifyOnLayoutSubviews;
- (id)_previewingSegueTemplateStorage;
- (id)_previewingSegueTemplateStorageForLocation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (id)_previousFittingSizeInfo;
- (id)_previousKeyResponder;
- (float)_priorityForEngineHostConstraints;
- (void)_privateSubview_setValue:(id)arg1 forObservedLayerKeyPath:(id)arg2;
- (void)_privateSubview_updateGeometryWithCenter:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_processDidChangeRecursivelyFromOldTraits:(id)arg1 toCurrentTraits:(id)arg2 forceNotification:(bool)arg3;
- (id)_projectedTargetForKey:(id)arg1 decelerationFactor:(double)arg2;
- (void)_promoteSelfOrDescendantToFirstResponderIfNecessary;
- (double)_proportionalFillLengthForOrderedArrangement:(id)arg1 relevantParentAxis:(long long)arg2;
- (id)_providedFocusFallbackScroller;
- (bool)_providesCustomPointerInteraction;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawLayoutMargins;
- (void)_recalculateStrictDescendantNeedsDoubleUpdateConstraints;
- (void)_receiveVisitor:(id)arg1;
- (bool)_recordBaselineLoweringInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectToScrollToVisibleInCellInWindow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectTuckedAgainstBoundingPathEdge:(unsigned long long)arg1 withSize:(double)arg2 cornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg3 minimumPadding:(double)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectTuckedInBoundingPathCorner:(unsigned long long)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 cornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg3 minimumPadding:(double)arg4;
- (id)_recursiveConstraintsTraceAtLevel:(long long)arg1;
- (void)_recursiveInvalidateDescendantsNeedingDoubleUpdateConstraintsCollectingViews:(id)arg1;
- (id)_recursiveLayoutEngineDescription;
- (void)_recursiveUpdateConstraintsIfNeededCollectingViews:(id)arg1 forSecondPass:(bool)arg2;
- (void)_recursivelyNameLayerTree;
- (id)_referenceView;
- (void)_registerForGeometryChanges;
- (id)_registerForTraitTokenChanges:(id)arg1 withHandler:(id /* block */)arg2;
- (id)_registerForTraitTokenChanges:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (void)_relaxLayoutEngineHostConstraintsForAxis:(long long)arg1;
- (void)_removeAllAnimations:(bool)arg1;
- (void)_removeAllAnimationsIncludingSubviewsTrackingForAnimationRestoration;
- (void)_removeAllRetargetableAnimations:(bool)arg1;
- (void)_removeAutolayoutSizingConstraints;
- (void)_removeBackdropMaskViews;
- (void)_removeBoundingPathChangeObserver:(id)arg1;
- (void)_removeColorViewBoundsOverlays;
- (void)_removeMotionEffect:(id)arg1;
- (void)_removePropertyAnimationsForLayerKeyPath:(id)arg1;
- (void)_replaceLayer:(id)arg1;
- (id)_representationOfHierarchyForXcode;
- (bool)_requiresExplicitLayoutMarginsGuideForAttribute:(long long)arg1 getAttributeForGuide:(int*)arg2;
- (void)_resetContentRect;
- (void)_resetContentStretch;
- (void)_resetLayoutEngineHostConstraintsForAxis:(long long)arg1 collectingViews:(id)arg2;
- (void)_resetNeedsSystemLayoutFittingSizeUpdateInSubtreeForLayoutEngine:(id)arg1;
- (void)_resetToBeginningOfDoublePass;
- (void)_resizeWithOldSuperviewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_resolvedOutlineShape;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (void)_restoreRemovedAnimationsIncludingSubviews;
- (id)_rootForKeyResponderCycle;
- (id)_rootInputWindowController;
- (id)_rootView;
- (long long)_rotaryFocusMovementAxis;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inSuperview:(id)arg2;
- (bool)_safeAreaInsetsFrozen;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsInSuperview:(id)arg1;
- (void)_safeAreaInsetsWillChange;
- (id)_safeAreaLayoutGuideIfExists;
- (bool)_safeAreaWidthExceedsReadableWidth;
- (struct CGVector { double x1; double x2; })_scaleFromLayerTransforms;
- (long long)_sceneDraggingBehaviorOnPan;
- (void)_scheduleFaultingInGuidesForConstraint:(id)arg1;
- (void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(bool)arg1;
- (id)_screen;
- (id)_scriptingInfo;
- (id)_scrollViewWantingUpdateInConstraint:(id)arg1;
- (id)_scroller;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (unsigned int)_secureName;
- (void)_sendUpdateConstraintsIfNecessaryForSecondPass:(bool)arg1;
- (void)_setAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setActiveSizeToFitLayoutEngine:(id)arg1;
- (void)_setAlignmentRectOriginCache:(id)arg1;
- (void)_setAllowsHighContrastForBackgroundColor:(bool)arg1;
- (void)_setAppearanceIsInvalid:(bool)arg1;
- (void)_setBackdropMaskView:(id)arg1 forFlag:(long long)arg2;
- (void)_setBackdropMaskViewFlags:(long long)arg1;
- (void)_setBackgroundColor:(id)arg1;
- (void)_setBackgroundMergeBehavior:(long long)arg1;
- (void)_setBoundingPath:(id)arg1;
- (void)_setCanBeParentTraitEnvironment:(bool)arg1;
- (void)_setChargeEnabled:(bool)arg1;
- (void)_setContentCompressionResistancePriorities:(struct CGSize { double x1; double x2; })arg1;
- (void)_setContentHuggingPriorities:(struct CGSize { double x1; double x2; })arg1;
- (void)_setContentRectInPixels:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_setContentSizeNotificationToken:(id)arg1;
- (void)_setContentStretchInPixels:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forContentSize:(struct CGSize { double x1; double x2; })arg2 shouldTile:(bool)arg3;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setCountOfFocusedAncestorTrackingViewsInSubtree:(unsigned long long)arg1;
- (void)_setCountOfMotionEffectsInSubtree:(unsigned long long)arg1;
- (void)_setDelaysTouchesForSystemGestures:(bool)arg1;
- (void)_setDisableDictationTouchCancellation:(bool)arg1;
- (void)_setDisableLayoutFlushingCount:(long long)arg1;
- (void)_setDontUpdateInferredLayoutMargins:(bool)arg1;
- (void)_setDraggingSourceDelegate:(id)arg1;
- (void)_setDrawsAsBackdropOverlay:(bool)arg1;
- (void)_setDrawsAsBackdropOverlayWithBlendMode:(long long)arg1;
- (void)_setDynamicDropInteraction:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setFlipsHorizontalAxis:(bool)arg1;
- (void)_setFocusInteractionEnabled:(bool)arg1;
- (void)_setFocusableContentMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setFrameIgnoringLayerTransform:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setFrameWithAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setGhostPortal:(id)arg1;
- (void)_setHiddenForReuse:(bool)arg1;
- (void)_setHostsLayoutEngine:(bool)arg1;
- (void)_setIdleModeLayoutAttributes:(id)arg1;
- (void)_setIgnoreBackdropViewsWhenHiding:(bool)arg1;
- (void)_setIgnoresLayerTransformForSafeAreaInsets:(bool)arg1;
- (void)_setInAnimatedLayout:(bool)arg1;
- (void)_setInSecondConstraintsPass:(bool)arg1;
- (void)_setInferredLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setInteractionTintColor:(id)arg1;
- (void)_setInterceptMouseEvent:(bool)arg1;
- (void)_setInternalConstraints:(id)arg1;
- (void)_setIsAncestorOfFirstResponder:(bool)arg1;
- (void)_setLargeContentStoredProperties:(id)arg1;
- (void)_setLargeContentViewerGestureManager:(id)arg1;
- (void)_setLastNotifiedTraitCollection:(id)arg1;
- (void)_setLayoutDebuggingIdentifier:(id)arg1;
- (void)_setLayoutEngine:(id)arg1;
- (void)_setLayoutMarginsGuide:(id)arg1;
- (void)_setLayoutMarginsGuideIgnoresSystemMinimumMargins:(bool)arg1;
- (void)_setLocalOverrideTraitCollection:(id)arg1;
- (void)_setMaskView:(id)arg1;
- (void)_setMaximumContentSizeCategory:(id)arg1;
- (void)_setMinimumContentSizeCategory:(id)arg1;
- (void)_setMonitorsSubtree:(bool)arg1;
- (void)_setMultilineContextWidth:(double)arg1;
- (void)_setNeedsContentsFormatUpdate;
- (void)_setNeedsContentsFormatUpdate:(bool)arg1;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_setNeedsUpdateConstraints;
- (void)_setNeedsUpdateConstraintsNeedingLayout:(bool)arg1;
- (void)_setOverrideUserInterfaceRenderingMode:(long long)arg1;
- (void)_setOverrideUserInterfaceStyle:(long long)arg1;
- (void)_setOverrideVibrancyTrait:(long long)arg1;
- (void)_setPresentationControllerToNotifyOnLayoutSubviews:(id)arg1;
- (void)_setPresentationValue:(id)arg1 forKey:(id)arg2;
- (void)_setPresentationValue:(id)arg1 velocity:(id)arg2 preferredFrameRateRangeMaximum:(int)arg3 forKey:(id)arg4;
- (void)_setPreviewingSegueTemplateStorage:(id)arg1;
- (void)_setPreviousFittingSizeInfo:(id)arg1;
- (void)_setRawLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setReadableContentGuide:(id)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSafeAreaInsetsFrozen:(bool)arg1;
- (void)_setSafeAreaInsetsFrozen:(bool)arg1 updateForUnfreeze:(bool)arg2;
- (void)_setSceneDraggingBehaviorOnPan:(long long)arg1;
- (void)_setShouldAdaptToMaterials:(bool)arg1;
- (void)_setShouldArchiveUIAppearanceTags:(bool)arg1;
- (void)_setShouldNotifyGeometryObserversForBaselineChanges:(bool)arg1;
- (void)_setShouldRasterize:(bool)arg1;
- (void)_setSourceCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setSpeedBumpEdges:(unsigned long long)arg1;
- (void)_setSubviewWantsAutolayoutTripWantsAutolayout:(bool)arg1;
- (void)_setTargetVelocity:(id)arg1 forKey:(id)arg2;
- (void)_setTouchInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setTracksFocusedAncestors:(bool)arg1;
- (void)_setTraitStorageConstraints:(id)arg1;
- (void)_setTraitStorageList:(id)arg1;
- (void)_setTraitStorageSubviews:(id)arg1;
- (void)_setTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (void)_setVelocity:(id)arg1 forKey:(id)arg2;
- (void)_setViewDelegateContentOverlayInsetsAreClean:(bool)arg1;
- (void)_setViewsJostledDuringUpdateConstraintsPass:(id)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (void)_setWantsAutolayout;
- (id)_shapeInCoordinateSpace:(id)arg1;
- (bool)_shouldAdaptToMaterials;
- (bool)_shouldAlwaysDiagnoseFocusInteractionEligibility;
- (bool)_shouldAnimatePropertyAdditivelyWithKey:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_shouldAppendTextInViewDescription;
- (bool)_shouldApplyExclusiveTouch;
- (bool)_shouldArchiveUIAppearanceTags;
- (bool)_shouldDecodeSubviews;
- (bool)_shouldDelayTouchForSystemGestures:(id)arg1;
- (bool)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;
- (bool)_shouldIgnoreAutofillSave;
- (bool)_shouldInheritScreenScaleAsContentScaleFactor;
- (bool)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize { double x1; double x2; })arg1 oldSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)_shouldNotifyGeometryObserversForBaselineChanges;
- (bool)_shouldResignFirstResponderWithInteractionDisabled;
- (bool)_shouldReverseLayoutDirection;
- (bool)_shouldUpdateFocusInContext:(id)arg1;
- (bool)_shouldUseViewForSceneDraggingBehavior;
- (void)_snipDangliesWithForce:(bool)arg1 repairIfPossibleForViewThatMoved:(id)arg2 newSuperview:(id)arg3 oldSuperview:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectForPresentationInWindow:(id)arg1;
- (id)_sourceViewForPresentationInWindow:(id)arg1;
- (unsigned long long)_speedBumpEdges;
- (void)_startObservingVariablesOnlyToSupportTAMICChange:(bool)arg1;
- (id)_stashedLayoutVariableObservations;
- (void)_stopObservingVariablesOnlyToSupportTAMICChange:(bool)arg1;
- (void)_strokeClippedViewIfNecessary;
- (int)_style;
- (bool)_subclassImplementsDrawRect;
- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg1;
- (bool)_subviewPreventsSkipLayout:(id)arg1;
- (bool)_supportsBecomeFirstResponderWhenPossible;
- (bool)_supportsContentDimensionVariables;
- (void)_switchToLayoutEngine:(id)arg1;
- (id)_systemDefaultFocusGroupIdentifier;
- (long long)_systemDefaultFocusGroupPriority;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 hasIntentionallyCollapsedHeight:(bool*)arg4;
- (double)_systemSpacingBelowView:(id)arg1 multiplier:(double)arg2;
- (double)_systemSpacingBelowView:(id)arg1 systemSpacingInvalidationRecorder:(id*)arg2;
- (id)_targetVelocityForKey:(id)arg1;
- (double)_textButtonMargin;
- (id)_textServicesResponderProxy;
- (void)_throwForUnsupportedNonMacIdiomBehaviorWithReason:(id)arg1;
- (id)_tintColorArchivingKey;
- (void)_tintColorDidChange;
- (long long)_topToBottomLeftToRightViewCompare:(id)arg1;
- (id)_touchForceObservable;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_touchInsets;
- (double)_touchSloppinessFactor;
- (bool)_touchesInsideShouldHideCalloutBar;
- (bool)_tracksFocusedAncestors;
- (void)_traitCollectionDidChangeInternal:(const struct _UITraitCollectionChangeDescription { id x1; id x2; id x3; bool x4; struct _UITraitCollectionTraitChanges { bool x_5_1_1; bool x_5_1_2; } x5; }*)arg1;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x1; id x2; id x3; bool x4; struct _UITraitCollectionTraitChanges { bool x_5_1_1; bool x_5_1_2; } x5; }*)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_traitOverridesDidChange:(id)arg1;
- (id)_traitStorageConstraints;
- (id)_traitStorageSubviews;
- (id)_traitTrace;
- (id)_traitTrace:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transform3D;
- (void)_ui_addSubLayoutItem:(id)arg1;
- (void)_ui_addToView:(id)arg1 atIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ui_bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ui_frame;
- (void)_ui_insertSubLayoutItem:(id)arg1 atIndex:(long long)arg2;
- (void)_ui_removeFromParentLayoutItem;
- (id)_ui_superview;
- (bool)_ui_usesManualLayout;
- (id)_ui_view;
- (bool)_uiib_hostsLayoutEngine;
- (void)_uiib_invalidateAutoresizingConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (void)_uiib_setHostsLayoutEngine:(bool)arg1;
- (bool)_uiib_tryToAddConstraint:(id)arg1 roundingAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (id)_uili_existingBaseFrameVariables;
- (id)_uili_existingObservationEligibleLayoutVariables;
- (bool)_uili_isFocusGuide;
- (id)_uili_observableLayoutEngineForBaseFrameVariables:(bool)arg1;
- (void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(bool)arg1;
- (bool)_uili_requiresObservationForVariable:(id)arg1;
- (void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2;
- (double)_uimorphingView_getInitialAlpha;
- (void)_uimorphingView_setInitialAlpha:(double)arg1;
- (void)_uinavigationbar_prepareToAppearInNavigationItem:(id)arg1 onLeft:(bool)arg2;
- (id)_uis_outline;
- (bool)_unapplyMotionEffect:(id)arg1;
- (bool)_unconditionallyWantsSetBoundsFromISEngineLayout;
- (void)_unregisterForGeometryChanges;
- (void)_unsubscribeToScrollNotificationsIfNecessary:(id)arg1;
- (void)_updateCombinedInsetsIfNecessary;
- (void)_updateConstraintsIfNeededCollectingViews:(id)arg1 forSecondPass:(bool)arg2;
- (void)_updateConstraintsIfNeededWithViewForVariableChangeNotifications:(id)arg1;
- (void)_updateInferredLayoutMargins;
- (void)_updateInferredLayoutMarginsFromSuperview:(id)arg1;
- (void)_updateLayoutEngineHostConstraints;
- (void)_updateLayoutMarginsGuideConstraintsIfNecessary;
- (void)_updateSafeAreaInsets;
- (void)_updateSystemConstraints;
- (bool)_useContentDimensionVariablesForConstraintLowering;
- (long long)_userInterfaceIdiom;
- (bool)_usesMinimumSafeAreas;
- (id)_velocityForKey:(id)arg1;
- (void)_vendedBaselineViewDidMoveForFirst:(bool)arg1;
- (void)_vendedBaselineViewParametersDidChange;
- (id)_viewControllerForAncestor;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (id)_viewDelegate;
- (bool)_viewDelegateContentOverlayInsetsAreClean;
- (void)_viewDidMoveFromScreen:(id)arg1 toScreen:(id)arg2;
- (id)_viewForBaselineLayout;
- (id)_viewForLoweringBaselineLayoutAttribute:(int)arg1;
- (void)_viewHierarchyUnpreparedForConstraint:(id)arg1;
- (id)_viewsJostledDuringUpdateConstraintsPass;
- (id)_viewsJostledDuringUpdateConstraintsPassSuppressingDebugAssertion:(bool)arg1;
- (double)_visualAltitude;
- (struct CGSize { double x1; double x2; })_visualAltitudeBias;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visualAltitudeSensitiveBoundsWithInfiniteEdges:(unsigned long long)arg1;
- (id)_visualRecursiveDescription;
- (bool)_wantsAnimationRestoration;
- (bool)_wantsAutolayout;
- (bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (bool)_wantsConstraintBasedLayout;
- (bool)_wantsDeepDrawing;
- (bool)_wantsKeyCommandsWhenDeferred;
- (void)_webCustomViewWillBeRemovedFromSuperview;
- (double)_widthForButtonBarItemLayout;
- (void)_willBeginBeingDisplayedInPointerContentEffect;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (void)_willMoveToWindow:(id)arg1 withAncestorView:(id)arg2;
- (void)_willRemoveSubview:(id)arg1;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_window;
- (void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(id /* block */)arg1;
- (void)accessibilityApplyInvertFilter;
- (id)accessibilityHUDRepresentation;
- (bool)accessibilityIgnoresInvertColors;
- (bool)accessibilityInvertFilterApplied;
- (void)accessibilityUnapplyInvertFilter;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addConstraint:(id)arg1;
- (void)addConstraints:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)addInteraction:(id)arg1;
- (void)addLayoutGuide:(id)arg1;
- (void)addMotionEffect:(id)arg1;
- (void)addSubview:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)allowsGroupBlending;
- (bool)allowsGroupOpacity;
- (double)alpha;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)appliedContentSizeCategoryLimitsDescription;
- (bool)areChildrenFocused;
- (bool)autoresizesSubviews;
- (unsigned long long)autoresizingMask;
- (id)backgroundColor;
- (bool)becomeFirstResponder;
- (id)bottomAnchor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)bringSubviewToFront:(id)arg1;
- (bool)canBecomeFocused;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)cancelMouseTracking;
- (bool)cancelTouchTracking;
- (struct CGPoint { double x1; double x2; })center;
- (id)centerXAnchor;
- (id)centerYAnchor;
- (float)charge;
- (bool)clearsContextBeforeDrawing;
- (bool)clipsToBounds;
- (long long)compareTextEffectsOrdering:(id)arg1;
- (long long)compositingMode;
- (id)constraints;
- (id)constraintsAffectingLayoutForAxis:(long long)arg1;
- (id)constraintsAffectingLayoutForAxis:(long long)arg1 ofItem:(id)arg2;
- (void)constraintsDidChangeInEngine:(id)arg1;
- (bool)containsView:(id)arg1;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (long long)contentMode;
- (double)contentScaleFactor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentStretch;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (struct CGSize { double x1; double x2; })convertSize:(struct CGSize { double x1; double x2; })arg1 fromView:(id)arg2;
- (struct CGSize { double x1; double x2; })convertSize:(struct CGSize { double x1; double x2; })arg1 toView:(id)arg2;
- (id)coordinateSpace;
- (void)dealloc;
- (void)deferredBecomeFirstResponder;
- (bool)deliversPressesForGesturesToSuperview;
- (bool)deliversTouchesForGesturesToSuperview;
- (id)description;
- (void)didAddSubview:(id)arg1;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalLayoutMargins;
- (void)doc_didMoveToSuperview;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawViewHierarchyInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawViewHierarchyInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 afterScreenUpdates:(bool)arg2;
- (unsigned long long)edgesInsettingLayoutMarginsFromSafeArea;
- (unsigned long long)edgesPreservingSuperviewLayoutMargins;
- (long long)effectiveUserInterfaceLayoutDirection;
- (void)encodeWithCoder:(id)arg1;
- (bool)endEditing:(bool)arg1;
- (id)engine:(id)arg1 markerForConstraintToBreakAmongConstraints:(id)arg2;
- (void)engine:(id)arg1 willBreakConstraint:(id)arg2 dueToMutuallyExclusiveConstraints:(id)arg3;
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)exerciseAmbiguityInLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extent;
- (void)find:(id)arg1;
- (void)findAndReplace:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findPrevious:(id)arg1;
- (id)firstBaselineAnchor;
- (id)focusEffect;
- (id)focusGroupIdentifier;
- (long long)focusGroupPriority;
- (id)focusGuides;
- (id)focusItemContainer;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)forceDisplayIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })frameOrigin;
- (id)gestureParent;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (bool)hasAmbiguousLayout;
- (id)heightAnchor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hitTestDirectionalInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestInsets;
- (id)hoverStyle;
- (unsigned long long)indexOfGestureRecognizer:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)inputResponderController;
- (void)insertSubview:(id)arg1 above:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (bool)insetsLayoutMarginsFromSafeArea;
- (id)interactionTintColor;
- (void)interactionTintColorDidChange;
- (id)interactions;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isAccessibilityElementByDefault;
- (bool)isDescendantOfView:(id)arg1;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isEnabled;
- (bool)isExclusiveTouch;
- (bool)isFirstResponder;
- (bool)isFocused;
- (bool)isHidden;
- (bool)isHiddenOrHasHiddenAncestor;
- (bool)isMultipleTouchEnabled;
- (bool)isOpaque;
- (bool)isTransparentFocusItem;
- (bool)isUserInteractionEnabled;
- (id)keyboardLayoutGuide;
- (id)keyboardSceneDelegate;
- (id)largeContentImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeContentImageInsets;
- (id)largeContentTitle;
- (id)lastBaselineAnchor;
- (id)layer;
- (void)layerWillDraw:(id)arg1;
- (void)layoutBelowIfNeeded;
- (id)layoutGuides;
- (void)layoutIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutMarginsDidChange;
- (bool)layoutMarginsFollowReadableWidth;
- (id)layoutMarginsGuide;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (id)leadingAnchor;
- (id)leftAnchor;
- (id)maskView;
- (id)maximumContentSizeCategory;
- (id)minimumContentSizeCategory;
- (id)motionEffects;
- (void)movedFromSuperview:(id)arg1;
- (void)movedFromWindow:(id)arg1;
- (void)movedToSuperview:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (void)mt_addPrivateSubview:(id)arg1;
- (id)mt_backgroundEffects;
- (id)mt_captureGroupName;
- (id)mt_contentEffects;
- (void)mt_setBackgroundEffects:(id)arg1;
- (void)mt_setCaptureGroupName:(id)arg1;
- (void)mt_setContentEffects:(id)arg1;
- (void)mt_setVisualEffect:(id)arg1;
- (id)mt_visualEffect;
- (bool)needsDisplay;
- (bool)needsDisplayOnBoundsChange;
- (bool)needsUpdateConstraints;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)nextResponder;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (void)nsli_addConstraint:(id)arg1;
- (unsigned long long)nsli_autoresizingMask;
- (id)nsli_boundsHeightVariable;
- (id)nsli_boundsWidthVariable;
- (bool)nsli_canHostIndependentVariableAnchor;
- (id)nsli_constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4;
- (id)nsli_contentHeightVariable;
- (id)nsli_contentWidthVariable;
- (id)nsli_contentXOffsetVariable;
- (id)nsli_contentYOffsetVariable;
- (struct CGSize { double x1; double x2; })nsli_convertSizeFromEngineSpace:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })nsli_convertSizeToEngineSpace:(struct CGSize { double x1; double x2; })arg1;
- (bool)nsli_defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
- (id)nsli_description;
- (bool)nsli_descriptionIncludesPointer;
- (struct CGSize { double x1; double x2; })nsli_engineToUserScalingCoefficients;
- (id)nsli_heightVariable;
- (id)nsli_installedConstraints;
- (bool)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1;
- (bool)nsli_isFlipped;
- (bool)nsli_isLegalConstraintItem;
- (bool)nsli_isRTL;
- (id)nsli_layoutAnchorForAttribute:(long long)arg1;
- (id)nsli_layoutEngine;
- (id)nsli_layoutMarginsItem;
- (bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4;
- (bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4;
- (bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4 onBehalfOfLayoutGuide:(id)arg5;
- (double)nsli_marginOffsetForAttribute:(long long)arg1;
- (id)nsli_minXVariable;
- (id)nsli_minYVariable;
- (bool)nsli_removeConstraint:(id)arg1;
- (bool)nsli_resolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
- (id)nsli_superitem;
- (id)nsli_widthVariable;
- (struct CGPoint { double x1; double x2; })origin;
- (long long)overrideUserInterfaceStyle;
- (id)parentFocusEnvironment;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })position;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (bool)preservesSuperviewLayoutMargins;
- (id)readableContentGuide;
- (id)recursiveDescription;
- (void)recursivelyForceDisplayIfNeeded;
- (void)reduceWidth:(double)arg1;
- (id)registerForTraitChanges:(id)arg1 withAction:(SEL)arg2;
- (id)registerForTraitChanges:(id)arg1 withHandler:(id /* block */)arg2;
- (id)registerForTraitChanges:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (void)removeAllGestureRecognizers;
- (void)removeConstraint:(id)arg1;
- (void)removeConstraints:(id)arg1;
- (void)removeFromSuperview;
- (void)removeGestureRecognizer:(id)arg1;
- (void)removeInteraction:(id)arg1;
- (void)removeLayoutGuide:(id)arg1;
- (void)removeMotionEffect:(id)arg1;
- (id)resizableSnapshotFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)resizableSnapshotViewFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 afterScreenUpdates:(bool)arg2 withCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)resizableSnapshotViewFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)restoreUserActivityState:(id)arg1;
- (id)rightAnchor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (id)safeAreaLayoutGuide;
- (bool)scalesLargeContentImage;
- (id)scriptingInfoWithChildren;
- (long long)semanticContentAttribute;
- (void)sendSubviewToBack:(id)arg1;
- (void)setAccessibilityIgnoresInvertColors:(bool)arg1;
- (void)setAllowsGroupBlending:(bool)arg1;
- (void)setAllowsGroupOpacity:(bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAreChildrenFocused:(bool)arg1;
- (void)setAutoresizesSubviews:(bool)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCharge:(float)arg1;
- (void)setClearsContext:(bool)arg1;
- (void)setClearsContextBeforeDrawing:(bool)arg1;
- (void)setClipsSubviews:(bool)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setCompositingMode:(long long)arg1;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentMode:(long long)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setContentStretch:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsPosition:(int)arg1;
- (void)setDeliversPressesForGesturesToSuperview:(bool)arg1;
- (void)setDeliversTouchesForGesturesToSuperview:(bool)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEdgesInsettingLayoutMarginsFromSafeArea:(unsigned long long)arg1;
- (void)setEdgesPreservingSuperviewLayoutMargins:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExclusiveTouch:(bool)arg1;
- (void)setFixedBackgroundPattern:(bool)arg1;
- (void)setFocusEffect:(id)arg1;
- (void)setFocusGroupIdentifier:(id)arg1;
- (void)setFocusGroupPriority:(long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forFields:(int)arg2;
- (void)setFrameOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGestureRecognizers:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHitTestDirectionalInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHitTestInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHoverStyle:(id)arg1;
- (void)setInsetsLayoutMarginsFromSafeArea:(bool)arg1;
- (void)setInteractionTintColor:(id)arg1;
- (void)setInteractions:(id)arg1;
- (void)setLargeContentImage:(id)arg1;
- (void)setLargeContentImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLargeContentTitle:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLayoutMarginsFollowReadableWidth:(bool)arg1;
- (void)setMaskView:(id)arg1;
- (void)setMaximumContentSizeCategory:(id)arg1;
- (void)setMinimumContentSizeCategory:(id)arg1;
- (void)setMotionEffects:(id)arg1;
- (void)setMultipleTouchEnabled:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayOnBoundsChange:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (void)setNeedsLayout;
- (void)setNeedsUpdateConstraints;
- (void)setOpaque:(bool)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOverrideUserInterfaceStyle:(long long)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreservesSuperviewLayoutMargins:(bool)arg1;
- (void)setRotationBy:(float)arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScalesLargeContentImage:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowsLargeContentViewer:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSkipsSubviewEnumeration:(bool)arg1;
- (void)setTag:(long long)arg1;
- (void)setTintAdjustmentMode:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setViewTraversalMark:(bool)arg1;
- (void)setWantsDeepColorDrawing:(bool)arg1;
- (void)set_ui_frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_ui_usesManualLayout:(bool)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (bool)showsLargeContentViewer;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (bool)skipsSubviewEnumeration;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;
- (void)solutionDidChangeInEngine:(id)arg1;
- (void)stopSettingPresentationValueForKey:(id)arg1;
- (id)subviews;
- (id)superview;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (long long)tag;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (id)textInputView;
- (long long)tintAdjustmentMode;
- (id)tintColor;
- (void)tintColorDidChange;
- (id)topAnchor;
- (id)trailingAnchor;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitOverrides;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform3D;
- (bool)translatesAutoresizingMaskIntoConstraints;
- (void)unregisterForTraitChanges:(id)arg1;
- (void)updateConstraints;
- (void)updateConstraintsIfNeeded;
- (void)updateFocusIfNeeded;
- (void)updateTraitsIfNeeded;
- (void)updateUserActivityState:(id)arg1;
- (bool)useBlockyMagnificationInClassic;
- (void)viewDidMoveToSuperview;
- (id)viewForBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (bool)viewTraversalMark;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)viewWithTag:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (bool)wantsDeepColorDrawing;
- (id)widthAnchor;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (id)window;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (id)avkit_ancestorViewPassingTest:(id /* block */)arg1;
- (id)avkit_backdropGroupLeader;
- (id)avkit_constraintsFromCenterAnchorsToCenterAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromCenterAndDimensionAnchorsToCenterAndDimensionAnchorsOfItem:(id)arg1;
- (id)avkit_constraintsFromDimensionAnchorsToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)avkit_constraintsFromEdgeAnchorsToEdgeAnchorsOfItem:(id)arg1;
- (bool)avkit_hasFullScreenLayoutClass;
- (id)avkit_hitTestControlForPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)avkit_hitTestControlForPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 bestSoFar:(inout id*)arg3 shortestDistanceSoFar:(inout double*)arg4;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;
- (bool)avkit_isAncestorOfViewPassingTest:(id /* block */)arg1;
- (bool)avkit_isBeingDismissed;
- (bool)avkit_isBeingPresented;
- (bool)avkit_isBeingScrollTested;
- (bool)avkit_isBeingScrolled;
- (bool)avkit_isBeingScrolledQuickly;
- (bool)avkit_isCompletelyTransparent;
- (bool)avkit_isCounterRotatedForTransition;
- (bool)avkit_isDescendantOfNonPagingScrollView;
- (bool)avkit_isDescendantOfViewPassingTest:(id /* block */)arg1;
- (bool)avkit_isInAScrollView;
- (bool)avkit_isInAWindowAndVisible;
- (bool)avkit_isVideoGravityFrozen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avkit_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint { double x1; double x2; })arg1 aspectRatio:(double)arg2;
- (void)avkit_makeSubtreeDisallowGroupBlending;
- (void)avkit_needsUpdateBackdropCaptureViewHidden;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })avkit_overrideLayoutMarginsForCounterRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avkit_portionOfFrameUnobscuredBySuperviews;
- (void)avkit_reevaluateHiddenStateOfItem:(id)arg1;
- (void)avkit_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inLayoutDirection:(long long)arg2;
- (bool)avkit_wantsAnimatedViewTransitions;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_applyContactStyle;
- (id)_cnui_contactStyle;
- (void)abSetLayoutDebuggingColor:(id)arg1;
- (void)addBackgroundVisualEffectView:(id)arg1 withCornerRadius:(double)arg2;
- (id)tintColorOverride;
- (id)tintColorOverrideDarkened;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })ekui_affineTransform;
- (double)ekui_height;
- (long long)ekui_horizontalSizeClass;
- (long long)ekui_interfaceOrientation;
- (id)ekui_rootViewHierarchy;
- (struct CGSize { double x1; double x2; })ekui_size;
- (id)ekui_tintColor;
- (long long)ekui_verticalSizeClass;
- (double)ekui_width;

// Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI

- (void)fpui_removeHoverEffects;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

- (void)_inui_setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)_inui_setNeedsLayout;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_createFlippedView;

- (id)_lp_appearance;
- (void)_lp_applyAndRegisterForUpdatesToValue:(id)arg1 withApplyCallback:(id /* block */)arg2;
- (double)_lp_backingScaleFactor;
- (void)_lp_bringSubviewToFront:(id)arg1;
- (void)_lp_disableAutomaticVibrancy;
- (void)_lp_insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)_lp_insertSubview:(id)arg1 belowSubview:(id)arg2;
- (bool)_lp_isLTR;
- (void)_lp_layoutIfNeeded;
- (bool)_lp_prefersDarkInterface;
- (void)_lp_setBackgroundColor:(id)arg1;
- (void)_lp_setClipsToBounds:(bool)arg1;
- (void)_lp_setCompositingFilter:(id)arg1;
- (void)_lp_setCornerRadius:(double)arg1;
- (void)_lp_setCornerRadius:(double)arg1 continuous:(bool)arg2;
- (void)_lp_setForceLTR:(bool)arg1;
- (void)_lp_setHoverEffectEnabled:(bool)arg1;
- (void)_lp_setNeedsLayout;
- (void)_lp_setOpacity:(double)arg1;
- (void)_lp_setShadowColor:(id)arg1;
- (void)_lp_setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_lp_setShadowOpacity:(double)arg1;
- (void)_lp_setShadowRadius:(double)arg1;
- (id)_lp_tintColor;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (void)_mapkit_animateFromCurrentStateWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)_mapkit_animateWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (double)_mapkit_currentAnimationDuration;
+ (id)_mapkit_currentAnimationTimingFunction;
+ (void)_mapkit_performWithoutAnimation:(id /* block */)arg1;
+ (bool)_mapkit_shouldAdoptImplicitAnimationParameters;
+ (void)_maps_setDoesNotTranslateAutoresizingConstraintsForViewsDictionary:(id)arg1;

- (id)_findNearestViewController;
- (id)_mapKit_mapView;
- (void)_mapKit_setNeedsDisplay;
- (bool)_mapkit_YCoordinate:(double)arg1 liesInDirection:(long long)arg2 startingFromYCoordinate:(double)arg3;
- (double)_mapkit_YCoordinateAtDistance:(double)arg1 inDirection:(long long)arg2 fromEdge:(long long)arg3;
- (double)_mapkit_YCoordinateAtDistance:(double)arg1 inDirection:(long long)arg2 fromYCoordinate:(double)arg3;
- (id)_mapkit_accessoryControlToExtendWithCallout;
- (void)_mapkit_addPointerInteraction;
- (void)_mapkit_addPointerInteractionWithDelegate:(id)arg1;
- (void)_mapkit_bringSubviewToFront:(id)arg1;
- (id)_mapkit_constraintsPinningSubviewToBounds:(id)arg1;
- (float)_mapkit_contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)_mapkit_contentHuggingPriorityForAxis:(long long)arg1;
- (unsigned long long)_mapkit_countOfSet:(id)arg1 minusSubset:(id)arg2;
- (id)_mapkit_currentLayer;
- (id)_mapkit_currentPointerInteraction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_doubleFrame;
- (struct CGSize { double x1; double x2; })_mapkit_fittingSize;
- (bool)_mapkit_hasPointerInteraction;
- (void)_mapkit_insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)_mapkit_insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)_mapkit_insertSubviewAboveAllOtherSubviews:(id)arg1;
- (void)_mapkit_insertSubviewBelowAllOtherSubviews:(id)arg1;
- (bool)_mapkit_isDarkModeEnabled;
- (bool)_mapkit_isDescendantOfView:(id)arg1;
- (bool)_mapkit_isRTL;
- (void)_mapkit_layoutBelowIfNeeded;
- (void)_mapkit_layoutIfNeeded;
- (double)_mapkit_leadingMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_rectWithSize:(struct CGSize { double x1; double x2; })arg1 XCoordinate:(double)arg2 atDistance:(double)arg3 inDirection:(long long)arg4 fromEdge:(long long)arg5;
- (void)_mapkit_removePointerInteraction;
- (void)_mapkit_setBackgroundColor:(id)arg1;
- (void)_mapkit_setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)_mapkit_setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)_mapkit_setNeedsLayout;
- (void)_mapkit_setNeedsUpdateConstraints;
- (struct CGSize { double x1; double x2; })_mapkit_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)_mapkit_sizeToFit;
- (double)_mapkit_trailingMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_translateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ifNeededFromSingleEdge:(unsigned long long)arg2;
- (void)_mapkit_updateConstraintsIfNeeded;
- (long long)_mapkit_userInterfaceDirection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_mapkit_userInterfaceOnlySafeAreaInsets;
- (void)infoCardThemeChanged;
- (id)mk_theme;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)_lastArtworkCatalog;
- (id)artworkCatalog;
- (void)clearArtworkCatalogs;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)_mf_anchorForEdge:(unsigned long long)arg1 relativeToMargin:(bool)arg2;
- (double)mf_currentScreenScale;
- (id)mf_enclosingScrollView;
- (id)mf_frontSibling;
- (void)mf_pinToView:(id)arg1 layoutMarginEdges:(unsigned long long)arg2 flexibleEdges:(unsigned long long)arg3;
- (void)mf_pinToView:(id)arg1 usingLayoutMargins:(bool)arg2;
- (void)mf_setAsSourceForPopoverPresentationController:(id)arg1;
- (void)mf_setAsSourceWithExtendedRectForPopoverPresentationController:(id)arg1;
- (void)mf_setAsTargetedSourceOnSceneConfiguration:(id)arg1;

// Image: /System/Library/Frameworks/PDFKit.framework/PDFKit

- (id)PDFKitEnclosingScrollView;
- (id)_PDFViewParentViewController;
- (id)findFirstResponder;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (id)pk_hoverAttributedStringForColor:(id)arg1;
+ (id)pk_hoverAttributedStringFromString:(id)arg1;
+ (id)pk_hoverLabelFont;

- (struct CGPoint { double x1; double x2; })PK_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })PK_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { double x1; double x2; })PK_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })PK_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })PK_convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })PK_convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })PK_convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })PK_convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (id)PK_enclosingScrollableScrollView;
- (bool)PK_isBelowViewInDepth:(id)arg1;
- (id)fakeScribbleInteractionDelegate;
- (id)pk_autoFadeOutShapePointLayer;
- (id)pk_autoFadeOutShapeRectLayer;
- (id)pk_hoverLabelAttributedString;
- (id)pk_hoverLabelString;
- (void)pk_setHoverLabelAttributedString:(id)arg1;
- (void)pk_setHoverLabelString:(id)arg1;
- (void)setFakeScribbleInteractionDelegate:(id)arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

+ (void)_qlpu_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 withInitialVelocity:(struct QLPUDisplayVelocity { double x1; double x2; double x3; double x4; })arg5 usingSpringAnimation:(id /* block */)arg6 completion:(id /* block */)arg7;
+ (void)_qlpu_animateViews:(id)arg1 withAnimationBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (void)qlph_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 withDuration:(double)arg5 delay:(double)arg6 usingSpringWithDamping:(double)arg7 initialVelocity:(struct QLPHDisplayVelocity { double x1; double x2; double x3; double x4; })arg8 options:(unsigned long long)arg9 completion:(id /* block */)arg10;
+ (void)qlpu_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 usingDefaultDampedSpringWithDelay:(double)arg5 initialVelocity:(struct QLPUDisplayVelocity { double x1; double x2; double x3; double x4; })arg6 options:(unsigned long long)arg7 completion:(id /* block */)arg8;
+ (void)qlpu_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 usingSpringWithDuration:(double)arg5 delay:(double)arg6 options:(unsigned long long)arg7 mass:(double)arg8 stiffness:(double)arg9 damping:(double)arg10 initialVelocity:(struct QLPUDisplayVelocity { double x1; double x2; double x3; double x4; })arg11 completion:(id /* block */)arg12;
+ (void)qlpu_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 withDuration:(double)arg5 delay:(double)arg6 usingSpringWithDamping:(double)arg7 initialVelocity:(struct QLPUDisplayVelocity { double x1; double x2; double x3; double x4; })arg8 options:(unsigned long long)arg9 completion:(id /* block */)arg10;
+ (void)qlpu_animateViews:(id)arg1 usingDefaultDampedSpringWithDelay:(double)arg2 initialSpringVelocity:(double)arg3 options:(unsigned long long)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)qlpu_animateViews:(id)arg1 usingSpringWithDuration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 mass:(double)arg5 stiffness:(double)arg6 damping:(double)arg7 initialVelocity:(double)arg8 animations:(id /* block */)arg9 completion:(id /* block */)arg10;
+ (void)qlpu_animateViews:(id)arg1 withDuration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)qlpu_animateViews:(id)arg1 withDuration:(double)arg2 delay:(double)arg3 usingSpringWithDamping:(double)arg4 initialSpringVelocity:(double)arg5 options:(unsigned long long)arg6 animations:(id /* block */)arg7 completion:(id /* block */)arg8;

- (void)QL_setAnchorPointAndUpdatePosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)_qlpu_animationDictionary;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)_srVideoOverlayButtonWithStyle:(long long)arg1;

// Image: /System/Library/Frameworks/StoreKit.framework/StoreKit

- (bool)_sk_isAtLeast50PercentOnScreen;

// Image: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI

- (void)nc_setScreenCaptureProhibited:(bool)arg1;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id)_web_findDescendantViewAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_web_setSubviews:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities

- (unsigned long long)_ax_depth;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2 priority:(float)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 priority:(float)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2 priority:(float)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2 priority:(float)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6 priority:(float)arg7;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2 priority:(float)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 priority:(float)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2 priority:(float)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2 priority:(float)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;
- (void)ax_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;
- (void)ax_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6 priority:(float)arg7;
- (id)ax_firstCommonAncestorWithView:(id)arg1;
- (id)ax_pinConstraintsInAllDimensionsToView:(id)arg1;
- (void)ax_setContentHuggingAndCompressionResistance:(struct { float x1; float x2; float x3; float x4; })arg1;

// Image: /System/Library/PrivateFrameworks/AmbientUIKit.framework/AmbientUIKit

- (void)amui_applyRedModeFilterAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)amui_applyRedModeFilterAnimated:(bool)arg1 withCoordinatedAnimationBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)amui_clearRedModeFilterAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)amui_clearRedModeFilterAnimated:(bool)arg1 withCoordinatedAnimationBlock:(id /* block */)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (id)akEnclosingScrollView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })akVisibleRect;
- (void)ak_addSubview:(id)arg1 withEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

// Image: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget

- (id)apuiFindInnermostSuperviewOfClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents

- (bool)asc_isEqualToOrDescendantOfFocusItem:(id)arg1;
- (id)asc_layoutTraitEnvironment;
- (id)asc_nearestSuperviewPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit

- (long long)_layoutDirectionFromLayoutDirectionValue:(id)arg1;
- (id)_layoutDirectionValue;
- (double)firstBaselineFromTop;
- (double)lastBaselineFromBottom;
- (double)lastBaselineMaxY;
- (long long)layoutDirection;
- (void)setLayoutDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

- (void)_didInvalidateIntrinsicContentSize;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (bool)_isContainerView;
- (long long)_nui_baselineViewType;
- (struct CGSize { double x1; double x2; })calculateLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)canUseFastLayoutSizeCalulation;
- (id)contentLayoutSizeCacheDescription;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customAlignmentRectInsets;
- (double)customBaselineOffsetFromBottom;
- (double)customFirstBaselineOffsetFromTop;
- (id)debugSizeCache;
- (id)debugSizeCacheDict;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveAlignmentRectInsets;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (double)effectiveFirstBaselineOffsetFromTop;
- (struct CGSize { double x1; double x2; })effectiveLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (double)effectiveScreenScale;
- (bool)invalidatingIntrinsicContentSizeAlsoInvalidatesSuperview;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (struct CGSize { double x1; double x2; })maximumLayoutSize;
- (struct CGSize { double x1; double x2; })minimumLayoutSize;
- (bool)neverCacheEffectiveLayoutSize;
- (void)nukeContentLayoutSizeCacheFromOrbit;
- (void)setCurrentEffectiveLayoutSizeFittingSizeShouldNotBeCached;
- (void)setCustomAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCustomBaselineOffsetFromBottom:(double)arg1;
- (void)setCustomFirstBaselineOffsetFromTop:(double)arg1;
- (void)setInvalidatingIntrinsicContentSizeAlsoInvalidatesSuperview:(bool)arg1;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1 withContentPriority:(float)arg2;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalContentPriority:(float)arg2 verticalContentPriority:(float)arg3;
- (void)setMaximumLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeverCacheEffectiveLayoutSize:(bool)arg1;
- (void)setUntransformedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeToBestFitAndLayoutIfNeeded;
- (double)systemSpacingToAdjecentSiblingView:(id)arg1 axis:(long long)arg2 baselineRelative:(bool)arg3 multiplier:(double)arg4;
- (double)systemSpacingToSuperView:(id)arg1 edge:(unsigned long long)arg2 baselineRelative:(bool)arg3 multiplier:(double)arg4;
- (struct CGSize { double x1; double x2; })testableEffectiveLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })testableSizeThatFits:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (double)ams_alpha;
- (id)ams_backgroundColor;
- (void)ams_layout;
- (void)ams_sendSubviewToBack:(id)arg1;
- (void)ams_setAlpha:(double)arg1;
- (void)ams_setBackgroundColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer

- (id)associatedAssetUUID;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)setAssociatedAssetUUID:(id)arg1;
- (id)view;

// Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bn_convertRectFromSceneReferenceSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bn_convertRectToSceneReferenceSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

- (bool)bs_isHitTestingDisabled;
- (void)bs_setHitTestingDisabled:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI

- (void)observeContentSizeCategoryChange:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI

- (id)bkui_debugBorder:(id)arg1 withWidth:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (id)_CPS_recursiveSubviewsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

+ (struct CGSize { double x1; double x2; })sizeThatFitsCardSection:(id)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;

- (bool)_crk_otherSubviewsOccludeSubview:(id)arg1;
- (bool)_crk_subviewIsVisible:(id)arg1;
- (id)cardSectionViewIdentifier;
- (id)composedSuperview;
- (void)removeFromComposedSuperview;
- (void)setCardSectionViewIdentifier:(id)arg1;
- (void)setComposedSuperview:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_addEqualityConstraintWithItem:(id)arg1 toItem:(id)arg2 usingAttribute:(long long)arg3;
- (struct CGSize { double x1; double x2; })__ck_alignmentRectSizeForFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)__ck_containsFirstResponder;
- (void)__ck_ensureMinimumTouchInsets;
- (struct CGSize { double x1; double x2; })__ck_frameSizeForAlignmentRectSize:(struct CGSize { double x1; double x2; })arg1;
- (void)__ck_makeEdgesEqualTo:(id)arg1;
- (void)ck_recursivelySetContentScaleFactor:(double)arg1;
- (void)ck_setBoundsHeight:(double)arg1;
- (void)ck_setBoundsWidth:(double)arg1;
- (void)ck_setPositionX:(double)arg1;
- (void)ck_setPositionY:(double)arg1;
- (void)ck_setScaleX:(double)arg1;
- (void)ck_setScaleY:(double)arg1;
- (void)layoutGradientViewsIfNeeded;
- (void)messageAcknowledgmentBounceView:(id /* block */)arg1;
- (void)messageAcknowledgmentShrinkViewToPoint:(struct CGPoint { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 threshold:(double)arg2 velocity:(struct CGPoint { double x1; double x2; })arg3;
- (void)setGradientViewsNeedLayout;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (id)cps_vibrantSeparator;
+ (id)cps_viewWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2;

- (void)cps_configureForAnimatesAlphaWhenHighlighted:(bool)arg1;
- (void)cps_sizeToFitWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)cps_verticallyAlignTopView:(id)arg1 bottomView:(id)arg2 margin:(double)arg3;

// Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI

- (void)_updateFilter:(unsigned long long)arg1 amount:(double)arg2;
- (void)setMaxAPL:(double)arg1;
- (void)setTritiumBrightness:(double)arg1;
- (void)setTritiumSaturation:(double)arg1;
- (void)setTritiumTapThroughFilter:(double)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI

+ (id)br_behaviourMap;
+ (unsigned long long)br_gatherBehaviour;
+ (void)br_setGatherBehaviour:(unsigned long long)arg1;
+ (void)br_setGatherBehaviour:(unsigned long long)arg1 forClassesNamed:(id)arg2;

- (id)br_contentDescription;
- (void)br_ignoreClipping;
- (void)br_setLayerNames;
- (bool)br_viewIsClipped;

// Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI

- (id)currentLayer;
- (id)rotateView:(id)arg1 byAngle:(double)arg2;

// Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI

- (void)abSetLayoutDebuggingColor:(id)arg1;
- (double)cnaui_currentScreenScale;

// Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI

- (void)ccui_setFramePreservingTransform:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

- (void)_controlCenterApplyPrimaryContentShadow;
- (void)controlCenterApplyPrimaryContentShadow;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

+ (double)screenScale;

- (double)displayScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeAreaInsetFrame;
- (id)subviewForEffectsBrowserViewController;

// Image: /System/Library/PrivateFrameworks/CoreIDVRGBLiveness.framework/CoreIDVRGBLiveness

- (void)hideScreenRecordings;

// Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet

- (bool)coverSheetRegionIsReservedForHorizontalScrolling;
- (long long)coverSheetRegionRole;
- (bool)isCoverSheetView;
- (void)setCoverSheetRegionReservedForHorizontalScrolling:(bool)arg1;
- (void)setCoverSheetRegionRole:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (void)dc_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(id /* block */)arg3;
+ (void)dc_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;

- (void)dc_addConstraintsToFillSuperview;
- (id)dc_animator;
- (void)dc_crashIfWindowIsSecure;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })dc_directionalSafeAreaInsets;
- (id)dc_imageRenderedFromLayer;
- (id)dc_imageRenderedFromViewHierarchy;
- (id)dc_imageViewRenderedFromLayer;
- (id)dc_imageViewRenderedFromViewHierarchy;
- (bool)dc_isInSecureWindow;
- (bool)dc_isRTL;
- (void)dc_removeAllConstraintsForSubview:(id)arg1;
- (id)dc_renderImage;
- (id)dc_renderImageView;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

+ (id)doc_systemBackgroundPlatter;
+ (void)load;
+ (bool)swift_docVibrancyFeatureEnabled;

- (id)_appearance;
- (id)_inheritedAppearance;
- (void)_notifyAppearanceChange:(id)arg1;
- (id)_owningViewController;
- (id)asPrimaryStrokeViewDecoratorEmbeddable;
- (id)asSecondaryStrokeViewDecoratorEmbeddable;
- (void)didMoveToSuperview;
- (id)effectiveAppearance;
- (void)effectiveAppearanceDidChange:(id)arg1;
- (bool)isVibrantContainer;
- (id)swift_asPrimaryStrokeViewDecoratorEmbeddable;
- (id)swift_asSecondaryStrokeViewDecoratorEmbeddable;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

- (id)doc_nearestAncestorViewController;
- (id)doc_owningViewController;
- (id)doc_presentingViewController;

// Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI

- (id)addConstraintsToFillSuperview;
- (id)addConstraintsToSetSize:(struct CGSize { double x1; double x2; })arg1;
- (id)allSubviews;
- (void)centerHorizontallyInSuperview;
- (void)centerVerticallyInSuperview;
- (id)debugHighlight;
- (id)generateImage;
- (struct CGPath { }*)newPathForRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radius:(double)arg2;
- (void)performOnAllSubviews:(id /* block */)arg1;
- (id)roundedRectBackgroundColor;
- (id)roundedRectBorderColor;
- (id)roundedRectBorderWidth;
- (void)setDebugHighlight:(id)arg1;
- (void)setRandomDebugHighlight;
- (void)setRoundedRectBackgroundColor:(id)arg1;
- (void)setRoundedRectBorderColor:(id)arg1;
- (void)setRoundedRectBorderWidth:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI

- (void)centerHorizontalInView:(id)arg1;
- (void)centerVerticalInView:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

- (id)superviewWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (void)fiui_animateIfNeededWithDuration:(double)arg1 animations:(id /* block */)arg2;
+ (void)fiui_animateIfNeededWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)fiui_animateIfNeededWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;

// Image: /System/Library/PrivateFrameworks/FocusUI.framework/FocusUI

+ (void)fcui_animateWithAnimationType:(long long)arg1 actions:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)fcui_animateWithDefaultParameters:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (void)fcui_animateWithSelectionParameters:(id /* block */)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkStandardBackdropView;
+ (id)_gkViewFromNib;

- (id)_gkAncestryAffectingVisualLayout;
- (id)_gkAncestryDescription;
- (void)_gkApplyBackdropViewIfNeededWithGroupName:(id)arg1;
- (void)_gkApplyBackdropViewWithGroupName:(id)arg1;
- (id)_gkApplyFakeStatusBarView;
- (id)_gkBackdropView;
- (id)_gkRecursiveDescriptionForKey:(id)arg1;
- (id)_gkRecursiveDescriptionForKey:(id)arg1 depth:(long long)arg2;
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2;
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2 depth:(long long)arg3;
- (void)_gkRecursivelyApplyBlock:(id /* block */)arg1 depth:(long long)arg2;
- (void)_gkRemoveAllConstraints;
- (void)_gkSetDrawsAsBackdropOverlay:(bool)arg1;
- (void)_gkSetDrawsAsKnockout:(bool)arg1 inBackdrop:(id)arg2;
- (void)_gkSetNeedsRender;
- (void)_gkUseAsModalSheetBackgroundWithGroupName:(id)arg1;
- (double)firstBaselineFromTop;
- (double)lastBaselineFromBottom;
- (double)lastBaselineMaxY;

// Image: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore

- (void)_gkAddStandardFadeTransition;
- (void)_gkDisableDefaultFocusEffect;
- (void)_gkEnumerateSubviewsUsingBlock:(id /* block */)arg1;
- (void)_gkPerformWithoutAnimationWhenRotating:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_gkPopoverPresentationArea;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_gkPopoverPresentationInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_gkPopoverPresentationRect;

// Image: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI

- (id)viewController;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)makeChevron;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)_updateForCurrentSizeCategory;
- (id)hk_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
- (id)hk_addConstraintsWithFormat:(id)arg1 options:(unsigned long long)arg2 views:(id)arg3;
- (id)hk_addEqualsConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedTo:(id)arg3 attribute:(long long)arg4 constant:(double)arg5;
- (id)hk_addEqualsConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedTo:(id)arg3 constant:(double)arg4;
- (void)hk_alignCenterConstraintsWithView:(id)arg1;
- (void)hk_alignConstraintsWithGuide:(id)arg1;
- (void)hk_alignConstraintsWithLeadingAnchor:(id)arg1 trailingAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)hk_alignConstraintsWithTopAnchor:(id)arg1 bottomAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)hk_alignConstraintsWithView:(id)arg1;
- (void)hk_alignConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)hk_alignConstraintsWithViewController:(id)arg1;
- (void)hk_alignHorizontalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)hk_alignHorizontalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)hk_alignHorizontalConstraintsWithView:(id)arg1 margin:(double)arg2;
- (void)hk_alignVerticalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)hk_alignVerticalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)hk_alignVerticalConstraintsWithView:(id)arg1 margin:(double)arg2;
- (void)hk_constrainToSuperviewAlongEdges:(id)arg1 constant:(double)arg2;
- (void)hk_constrainToView:(id)arg1 fromEdge:(long long)arg2 toEdge:(long long)arg3 constant:(double)arg4;
- (void)hk_constraintAspectRatioFromSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)hk_isLeftToRight;
- (double)hk_layoutHeightFittingWidth:(double)arg1;
- (void)hk_maskAllCornersWithRadius:(double)arg1;
- (void)hk_maskCorners:(unsigned long long)arg1 radius:(double)arg2;
- (long long)hk_trailingTextAlignmentAtOrBelowSizeCategory:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

- (id)_bottomVisibleView;
- (void)hrui_alignConstraintsWithLeadingAnchor:(id)arg1 trailingAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)hrui_alignConstraintsWithTopAnchor:(id)arg1 bottomAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)hrui_alignConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)hrui_alignHorizontalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)hrui_alignHorizontalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)hrui_alignVerticalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)hrui_alignVerticalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)hrui_constraintAspectRatioFromSize:(struct CGSize { double x1; double x2; })arg1;
- (void)hrui_maskAllCornersWithRadius:(double)arg1;
- (void)hrui_maskCorners:(unsigned long long)arg1 radius:(double)arg2;

// Image: /System/Library/PrivateFrameworks/HomeAccessoryControlUI.framework/HomeAccessoryControlUI

- (void)_onTap;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (struct CGPoint { double x1; double x2; })hu_centerInGlobalCoordinateSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hu_frameInGlobalCoordinateSpace;
- (void)pinToEdges:(id)arg1;
- (id)pinToEdgesConstraints:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUICommon.framework/HomeUICommon

+ (void)hu_enableAnimations:(bool)arg1 forBlock:(id /* block */)arg2;

- (void)hu_autoSizeByConstrainingWidth:(double)arg1;
- (id)hu_contentModeString;
- (bool)hu_isDescendantOfPickerView;
- (bool)hu_isHomeAffordancePresent;
- (void)hu_setFramePreservingTransform:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)hu_traverseViewHierarchy:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit

+ (id)jitappkit:(id)arg1;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

- (long long)_juLayoutDirectionFromLayoutDirectionValue:(id)arg1;
- (id)_juLayoutDirectionValue;
- (bool)hasContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })jet_focusedFrame;
- (long long)juLayoutDirection;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (void)setJuLayoutDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

+ (void)MPU_animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animationFactory:(id)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;

- (void)MPU_applyBoundsAndCenterForUntransformedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initForAutolayout;

// Image: /System/Library/PrivateFrameworks/MagnifierSupport.framework/MagnifierSupport

- (void)rotateIfPossibleTo:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

- (id)mui_backgroundColor;
- (bool)mui_clipsToBounds;
- (void)mui_setAccessibilityIdentifier:(id)arg1;
- (void)mui_setFlexibleWidthAndHeightResizingMask;
- (void)mui_setNeedsLayout;
- (void)setMui_backgroundColor:(id)arg1;
- (void)setMui_clipsToBounds:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

+ (void)_mapsui_animateWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;

- (id)_addHairlineAtBottom:(bool)arg1 leadingMargin:(double)arg2 trailingMargin:(double)arg3;
- (id)_mapsui_addHairlineAtBottomWithLeadingMargin:(double)arg1 trailingMargin:(double)arg2;
- (id)_mapsui_addHairlineAtBottomWithMargin:(double)arg1;
- (id)_mapsui_addHairlineAtTopWithLeadingMargin:(double)arg1 trailingMargin:(double)arg2;
- (id)_mapsui_addHairlineAtTopWithMargin:(double)arg1;
- (void)_mapsui_addSelectGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_mapsui_disableTranslatesAutoresizingMaskIntoConstraints;
- (struct CGSize { double x1; double x2; })_mapsui_fittingSize;
- (bool)_mapsui_isRTL;
- (void)_mapsui_layoutIfNeeded;
- (id)_mapsui_layoutMarginsDescription;
- (void)_mapsui_performImageLoadingTransitionWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_mapsui_preservedLayoutMarginsDescription;
- (id)_mapsui_recursiveLayoutMarginsDescription;
- (void)_mapsui_resetLayoutMargins;
- (void)_mapsui_resetLayoutMarginsWithPreservesSuperview:(bool)arg1;
- (void)_mapsui_resetLayoutMarginsWithPreservesSuperview:(bool)arg1 insetsFromSafeArea:(bool)arg2;
- (void)_mapsui_setBackgroundColor:(id)arg1;
- (void)_mapsui_setCardCorner;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

- (void)_mt_applyVisualStyling:(id)arg1;
- (void)mt_applyVisualStyling:(id)arg1;
- (void)mt_removeAllVisualStyling;
- (void)mt_replaceVisualStyling:(id)arg1;
- (id)visualStylingProviderForCategory:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

+ (void)mru_animateUsingType:(long long)arg1 animations:(id /* block */)arg2;
+ (void)mru_animateUsingType:(long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mediaControls_untransformedFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mr_tightBoundingRectOfFirstLine;
- (void)mru_applyVisualStylingWithColor:(id)arg1 alpha:(double)arg2 blendMode:(long long)arg3;
- (void)setMediaControls_untransformedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI

- (void)mf_activateDebugModeIfEnabled;
- (bool)mf_debugModeEnabled;
- (void)mf_enableDebugModeInView;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (void)_sf_animateLinkImage:(id)arg1 withAnimation:(long long)arg2 fromPoint:(struct CGPoint { double x1; double x2; })arg3 inView:(id)arg4 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 inView:(id)arg6 afterImageDisappearsBlock:(id /* block */)arg7 afterDestinationLayerBouncesBlock:(id /* block */)arg8;
+ (void)_sf_animateLinkImage:(struct CGImage { }*)arg1 withAnimation:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 inView:(id)arg6 afterImageDisappearsBlock:(id /* block */)arg7 afterDestinationLayerBouncesBlock:(id /* block */)arg8;
+ (void)_sf_cancelLinkAnimationsOnSourceWindow:(id)arg1 destinationWindow:(id)arg2;
+ (void)_sf_performLinkAnimation:(long long)arg1 onView:(id)arg2;
+ (void)sf_animate:(bool)arg1 usingDefaultDampedSpringWithDelay:(double)arg2 initialSpringVelocity:(double)arg3 options:(unsigned long long)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)sf_animate:(bool)arg1 usingDefaultDampedSpringWithDelay:(double)arg2 initialSpringVelocity:(double)arg3 options:(unsigned long long)arg4 preferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg5 animations:(id /* block */)arg6 completion:(id /* block */)arg7;
+ (void)sf_animate:(bool)arg1 usingDefaultMotionWithDelay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)sf_animate:(bool)arg1 usingDefaultMotionWithOptions:(unsigned long long)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)sf_animate:(bool)arg1 usingDefaultTimingWithOptions:(unsigned long long)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)sf_animate:(bool)arg1 usingDefaultTimingWithOptions:(unsigned long long)arg2 preferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)sf_animate:(bool)arg1 withDuration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)sf_animateUsingDefaultDampedSpringWithDelay:(double)arg1 initialSpringVelocity:(double)arg2 options:(unsigned long long)arg3 preferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)sf_animated:(bool)arg1 usingFastSpringWithDelay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;

- (void)_sf_addEdgeMatchedSubview:(id)arg1;
- (void)_sf_addInteractionUnlessNil:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sf_bottomUnsafeAreaFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sf_bottomUnsafeAreaFrameForToolbar;
- (double)_sf_convertY:(double)arg1 toCoordinateSpace:(id)arg2;
- (long long)_sf_depth;
- (id)_sf_firstAncestorViewOfClass:(Class)arg1;
- (bool)_sf_hasLandscapeAspectRatio;
- (bool)_sf_isFullScreenHeight;
- (bool)_sf_isFullScreenWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sf_safeAreaBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sf_safeAreaInsetsFlippedForLayoutDirectionality;
- (void)_sf_setMatchesIntrinsicContentSize;
- (void)_sf_setOrderedSubviews:(id*)arg1 count:(unsigned long long)arg2;
- (id)_sf_snapshotImageFromIOSurface;
- (bool)_sf_usesLeftToRightLayout;
- (id)_sf_viewAncestrySummaryWithMinDepth:(long long)arg1 paddingLevel:(long long)arg2;
- (void)sf_applyContentSizeCategoryLimitsForToolbarButton;
- (id)sf_commonAncestrySummaryWithView:(id)arg1;
- (void)sf_configureLargeContentViewerForBarItem:(long long)arg1;
- (void)sf_configureLargeContentViewerWithImage:(id)arg1 title:(id)arg2;
- (id)sf_privacyPreservingDescription;
- (id)sf_viewAncestrySummary;
- (void)ss_setUntransformedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ss_untransformedFrame;

// Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI

- (id)_SUUIView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultPresentationPosition;
- (id)suui_apparentBackgroundColor;

// Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI

- (struct CGPoint { double x1; double x2; })mtui_boundsCenter;
- (bool)mtui_isRTL;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

+ (id)ntk_gossamer_terminatorViewForDate:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void)addToParentView:(id)arg1;
- (void)ntk_setBoundsAndPositionFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })position;
- (void)removeFromParent;
- (void)setAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

+ (void)_naui_beginDebuggingAutolayout;
+ (void)naui_beginDisablingAnimations;
+ (void)naui_endDisablingAnimations;
+ (void)naui_performAnimateableChangesWithAnimationDuration:(double)arg1 setupBlock:(id /* block */)arg2 animatablesBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)naui_prepareToAutolayoutProperDescendantsOfView:(id)arg1 inConstraints:(id)arg2;

- (id)_naui_constraintsByNameDictionary:(bool)arg1;
- (id)_naui_constraintsNamed:(id)arg1;
- (void)naui_addAutoLayoutSubview:(id)arg1;
- (void)naui_addAutoLayoutSubviews:(id)arg1;
- (void)naui_addConstraint:(id)arg1;
- (void)naui_addConstraints:(id)arg1;
- (bool)naui_canAnimate;
- (id)naui_descendantsWithAmbiguousLayout;
- (id)naui_dynamicFontTextStyleDescriptor;
- (bool)naui_isProperDescendantOfView:(id)arg1;
- (void)naui_performAnimateableConstraintChanges:(id /* block */)arg1;
- (void)naui_reloadDynamicFontWithTextStyleDescriptor:(id)arg1;
- (void)naui_removeConstraint:(id)arg1;
- (void)naui_removeConstraints:(id)arg1;
- (void)naui_removeConstraintsNamed:(id)arg1;
- (void)naui_removeNamedConstraints;
- (bool)naui_replaceConstraint:(id)arg1 withConstraints:(id)arg2;
- (bool)naui_replaceConstraints:(id)arg1 withConstraints:(id)arg2;
- (void)naui_setDynamicFontTextStyleDescriptor:(id)arg1;
- (void)naui_setNamedConstraints:(id)arg1 forName:(id)arg2;
- (void)naui_showAllViewBoundsRecursively:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit

+ (void)_recurseView:(id)arg1 filter:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

+ (void)nu_animateWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 options:(unsigned long long)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;

- (void)nu_supportViewDebugging;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)attachmentPresenter:(id)arg1 transitionViewForAttachment:(id)arg2;
- (id)icaxRecursiveSubviewsPassingTest:(id /* block */)arg1;
- (id)viewIdentifier;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (void)ic_animateUsingSpringWithDampingRatio:(double)arg1 response:(double)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)ic_animateWithDuration:(double)arg1 animations:(id /* block */)arg2;
+ (void)ic_animateWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(id /* block */)arg3;
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (bool)ic_isRTL;
+ (void)ic_performWithoutAnimation:(id /* block */)arg1;
+ (void)ic_performWithoutAnimationOnMainThread:(id /* block */)arg1;

- (void)ic_addAnchorsToFillSuperview;
- (void)ic_addAnchorsToFillSuperviewLayoutMargins;
- (void)ic_addAnchorsToFillSuperviewWithHorizontalPadding:(double)arg1;
- (void)ic_addAnchorsToFillSuperviewWithHorizontalPadding:(double)arg1 verticalPadding:(double)arg2 usesSafeAreaLayoutGuide:(bool)arg3;
- (void)ic_addAnchorsToFillSuperviewWithHorizontalPadding:(double)arg1 verticalPadding:(double)arg2 usesSafeAreaLayoutGuideHorizontally:(bool)arg3 usesSafeAreaLayoutGuideVertically:(bool)arg4;
- (void)ic_addAnchorsToFillSuperviewWithLeadingPadding:(double)arg1 trailingPadding:(double)arg2;
- (void)ic_addAnchorsToFillSuperviewWithLeadingPadding:(double)arg1 trailingPadding:(double)arg2 topPadding:(double)arg3 bottomPadding:(double)arg4 usesSafeAreaLayoutGuideHorizontally:(bool)arg5 usesSafeAreaLayoutGuideVertically:(bool)arg6;
- (void)ic_addAnchorsToFillSuperviewWithLeadingPadding:(double)arg1 trailingPadding:(double)arg2 verticalPadding:(double)arg3 usesSafeAreaLayoutGuideHorizontally:(bool)arg4 usesSafeAreaLayoutGuideVertically:(bool)arg5;
- (void)ic_addAnchorsToFillSuperviewWithPadding:(double)arg1;
- (void)ic_addAnchorsToFillSuperviewWithPaddingFromDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)ic_addAnchorsToFillSuperviewWithPaddingFromDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 usesSafeAreaLayoutGuideHorizontally:(bool)arg2 usesSafeAreaLayoutGuideVertically:(bool)arg3;
- (void)ic_addAnchorsToFillSuperviewWithVerticalPadding:(double)arg1;
- (void)ic_addConstraintsToFillSuperview;
- (void)ic_addDidMoveToWindowHandler:(id /* block */)arg1;
- (id)ic_animator;
- (id)ic_appearanceInfo;
- (void)ic_applyRoundedCorners;
- (void)ic_applyRoundedCorners:(unsigned long long)arg1;
- (void)ic_applyRoundedCorners:(unsigned long long)arg1 radius:(double)arg2;
- (void)ic_applyRoundedCornersFromView:(id)arg1;
- (void)ic_applyRoundedCornersWithRadius:(double)arg1;
- (void)ic_applyRoundedCornersWithTopLeadingRadius:(double)arg1 topTrailingRadius:(double)arg2 bottomLeadingRadius:(double)arg3 bottomTrailingRadius:(double)arg4;
- (void)ic_applyShadow;
- (void)ic_applyShadowWithRadius:(double)arg1 opacity:(double)arg2 offset:(struct CGSize { double x1; double x2; })arg3;
- (void)ic_applyShadowWithRadius:(double)arg1 opacity:(double)arg2 offset:(struct CGSize { double x1; double x2; })arg3 shadowPathIsBounds:(bool)arg4;
- (id)ic_backgroundColor;
- (double)ic_backingScaleFactor;
- (void)ic_crashIfWindowIsSecure;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })ic_directionalSafeAreaInsets;
- (id)ic_enclosingScrollView;
- (double)ic_hairlineWidth;
- (bool)ic_hasCompactHeight;
- (bool)ic_hasCompactSize;
- (bool)ic_hasCompactWidth;
- (id)ic_imageRenderedFromLayer;
- (id)ic_imageRenderedFromViewHierarchy;
- (id)ic_imageViewRenderedFromLayer;
- (id)ic_imageViewRenderedFromViewHierarchy;
- (bool)ic_inSidebar;
- (void)ic_insertSubview:(id)arg1 belowSubview:(id)arg2;
- (bool)ic_isInSecureWindow;
- (bool)ic_isRTL;
- (id)ic_platformAppearanceObject;
- (void)ic_removeAllConstraintsForSubview:(id)arg1;
- (void)ic_removeRoundedCorners;
- (void)ic_removeShadow;
- (id)ic_renderImage;
- (id)ic_renderImageView;
- (void)ic_setAlpha:(double)arg1;
- (void)ic_setNeedsDisplay;
- (void)ic_setNeedsLayout;
- (id)ic_viewControllerManager;
- (id)ic_windowScene;
- (void)setIc_backgroundColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

- (void)ob_pinToEdges:(id)arg1;
- (id)ob_pinToEdgesConstraints:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (void)pkui_animateUsingFactory:(id)arg1 withDelay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 delay:(double)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 delay:(double)arg2 velocity:(double)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;

- (void)addDefaultTransformSpringWithStartTime:(double)arg1;
- (void)addDefaultTranslationSpringWithVelocity:(double)arg1 startTime:(double)arg2;
- (void)addTransformSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 velocity:(double)arg5 timing:(id)arg6;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_readableContentBoundsWithMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)pkui_setAlpha:(double)arg1 animated:(bool)arg2;
- (double)pkui_setAlpha:(double)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (double)pkui_setAlpha:(double)arg1 withAnimationFactory:(id)arg2 animation:(id*)arg3;
- (double)pkui_setAlpha:(double)arg1 withAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (id)pkui_setBackgroundColor:(id)arg1 animated:(bool)arg2;
- (id)pkui_setBackgroundColor:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)pkui_setBackgroundColor:(id)arg1 withAnimationFactory:(id)arg2 animation:(id*)arg3;
- (id)pkui_setBackgroundColor:(id)arg1 withAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAdditiveAnimationFactory:(id)arg2 accumulator:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAdditiveAnimationFactory:(id)arg2 animation:(id*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAdditiveAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (void)pkui_setBoundsAndPositionFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)pkui_setCornerRadius:(double)arg1 animated:(bool)arg2;
- (double)pkui_setCornerRadius:(double)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (double)pkui_setCornerRadius:(double)arg1 withAdditiveAnimationFactory:(id)arg2 accumulator:(id)arg3;
- (double)pkui_setCornerRadius:(double)arg1 withAdditiveAnimationFactory:(id)arg2 animation:(id*)arg3;
- (double)pkui_setCornerRadius:(double)arg1 withAdditiveAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (void)pkui_setExcludedFromScreenCapture:(bool)arg1 andBroadcasting:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAdditiveAnimationFactory:(id)arg2 accumulator:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAdditiveAnimationFactory:(id)arg2 animation:(id*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAdditiveAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (void)pkui_setMaskType:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })pkui_setPosition:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })pkui_setPosition:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (struct CGPoint { double x1; double x2; })pkui_setPosition:(struct CGPoint { double x1; double x2; })arg1 withAdditiveAnimationFactory:(id)arg2 accumulator:(id)arg3;
- (struct CGPoint { double x1; double x2; })pkui_setPosition:(struct CGPoint { double x1; double x2; })arg1 withAdditiveAnimationFactory:(id)arg2 animation:(id*)arg3;
- (struct CGPoint { double x1; double x2; })pkui_setPosition:(struct CGPoint { double x1; double x2; })arg1 withAdditiveAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })pkui_setShadowOffset:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })pkui_setShadowOffset:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })pkui_setShadowOffset:(struct CGSize { double x1; double x2; })arg1 withAdditiveAnimationFactory:(id)arg2 accumulator:(id)arg3;
- (struct CGSize { double x1; double x2; })pkui_setShadowOffset:(struct CGSize { double x1; double x2; })arg1 withAdditiveAnimationFactory:(id)arg2 animation:(id*)arg3;
- (struct CGSize { double x1; double x2; })pkui_setShadowOffset:(struct CGSize { double x1; double x2; })arg1 withAdditiveAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (double)pkui_setShadowOpacity:(double)arg1 animated:(bool)arg2;
- (double)pkui_setShadowOpacity:(double)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (double)pkui_setShadowOpacity:(double)arg1 withAnimationFactory:(id)arg2 animation:(id*)arg3;
- (double)pkui_setShadowOpacity:(double)arg1 withAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (double)pkui_setShadowRadius:(double)arg1 animated:(bool)arg2;
- (double)pkui_setShadowRadius:(double)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (double)pkui_setShadowRadius:(double)arg1 withAdditiveAnimationFactory:(id)arg2 accumulator:(id)arg3;
- (double)pkui_setShadowRadius:(double)arg1 withAdditiveAnimationFactory:(id)arg2 animation:(id*)arg3;
- (double)pkui_setShadowRadius:(double)arg1 withAdditiveAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })pkui_setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 animated:(bool)arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })pkui_setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })pkui_setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 withAdditiveAnimationFactory:(id)arg2 accumulator:(id)arg3;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })pkui_setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 withAdditiveAnimationFactory:(id)arg2 animation:(id*)arg3;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })pkui_setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 withAdditiveAnimationFactory:(id)arg2 completion:(id /* block */)arg3;
- (void)pkui_shakeWithCompletion:(id /* block */)arg1;
- (void)pkui_smallShakeWithCompletion:(id /* block */)arg1;
- (id)pkui_translationAnimation;
- (bool)pkui_userInterfaceIdiomSupportsLargeLayouts;
- (id)pkui_viewControllerFromResponderChain;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

+ (void)PG_animateUsingDefaultDampedSpringWithInitialSpringVelocity:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)PG_animateUsingDefaultTimingWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (void)PG_animateUsingDefaultTimingWithOptions:(unsigned long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)PG_performWithoutAnimation:(id /* block */)arg1;
+ (void)PG_performWithoutRetargetingAnimation:(id /* block */)arg1;

- (id)PG_acquireAssertionToPreventAutoHideOfControlsWithReason:(id)arg1;
- (bool)PG_allowsEdgeAntialiasing;
- (bool)PG_allowsGroupBlending;
- (struct CGPoint { double x1; double x2; })PG_anchorPoint;
- (id)PG_backdropGroupLeader;
- (id)PG_compositingFilter;
- (double)PG_cornerRadius;
- (bool)PG_disablesLayerCloning;
- (bool)PG_preferredVisibilityForView:(id)arg1;
- (void)PG_recursivelyDisallowGroupBlending;
- (void)PG_removeVibrancyEffect;
- (void)PG_setAllowsEdgeAntialiasing:(bool)arg1;
- (void)PG_setAllowsGroupBlending:(bool)arg1;
- (void)PG_setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)PG_setCompositingFilter:(id)arg1;
- (void)PG_updateVibrancyEffectForTintColor;

// Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary

+ (double)pl_setHiddenAnimationDuration;
+ (struct CGSize { double x1; double x2; })pl_videoOverlayButtonSize;
+ (id)pl_videoOverlayButtonWithStyle:(long long)arg1;

- (void)pl_drawBorderWithColor:(id)arg1 width:(double)arg2;
- (bool)pl_isOnScreen:(id)arg1;
- (void)pl_setHidden:(bool)arg1 animated:(bool)arg2;
- (void)pl_setHidden:(bool)arg1 delay:(double)arg2 animated:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (id)is_actionForKey:(id)arg1;
- (double)is_blurRadius;
- (void)is_setBlurRadius:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)_px_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 withInitialVelocity:(struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })arg5 usingSpringAnimation:(id /* block */)arg6 completion:(id /* block */)arg7;
+ (void)px_animateUsingDefaultDampedEaseInEaseOutWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)px_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 usingDefaultDampedSpringWithDelay:(double)arg5 initialVelocity:(struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })arg6 options:(unsigned long long)arg7 completion:(id /* block */)arg8;
+ (void)px_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 withDuration:(double)arg5 delay:(double)arg6 usingSpringWithDamping:(double)arg7 initialVelocity:(struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })arg8 options:(unsigned long long)arg9 completion:(id /* block */)arg10;
+ (id)px_circularGlyphViewWithName:(id)arg1 backgroundColor:(id)arg2;
+ (id)px_contentLoadingView;
+ (void)px_preloadResourcesForVideoOverlayButtonWithStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })px_videoOverlayButtonSize;
+ (struct CGSize { double x1; double x2; })px_videoOverlayButtonSizeWithConfiguration:(id)arg1;
+ (id)px_videoOverlayButtonWithConfiguration:(id)arg1;
+ (id)px_videoOverlayButtonWithStyle:(long long)arg1;
+ (id)px_videoOverlayButtonWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(bool)arg2;

- (void)px_addFullBoundsSubview:(id)arg1;
- (id)px_ancestorSharedWithView:(id)arg1;
- (id)px_ancestorViewOfClass:(Class)arg1;
- (id)px_ancestorViewPassingTest:(id /* block */)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })px_convertTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 fromView:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })px_convertTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 toView:(id)arg2;
- (void)px_enumerateDescendantSubviewsPassingTest:(id /* block */)arg1 usingBlock:(id /* block */)arg2;
- (void)px_enumerateDescendantSubviewsUsingBlock:(id /* block */)arg1;
- (void)px_enumerateSuperviewsUsingBlock:(id /* block */)arg1;
- (bool)px_hasHiddenAncestor;
- (bool)px_hasRightToLeftLayoutDirection;
- (bool)px_intersectsWindowBounds;
- (bool)px_isAncestorOfFocusEnvironment:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })px_peripheryInsets;
- (double)px_screenScale;
- (void)px_setSpec:(id)arg1;
- (id)px_spec;
- (void)px_transferToSuperview:(id)arg1;
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

+ (void)_pu_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 withInitialVelocity:(struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })arg5 usingSpringAnimation:(id /* block */)arg6 completion:(id /* block */)arg7;
+ (void)_pu_animateViews:(id)arg1 withAnimationBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (void)_pu_animateWithDuration:(double)arg1 enforced:(bool)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)ph_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 withDuration:(double)arg5 delay:(double)arg6 usingSpringWithDamping:(double)arg7 initialVelocity:(struct PHDisplayVelocity { double x1; double x2; double x3; double x4; })arg8 options:(unsigned long long)arg9 completion:(id /* block */)arg10;
+ (id)ph_videoOverlayButton;
+ (void)pu_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 usingDefaultDampedSpringWithDelay:(double)arg5 initialVelocity:(struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })arg6 options:(unsigned long long)arg7 completion:(id /* block */)arg8;
+ (void)pu_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 usingSpringWithDuration:(double)arg5 delay:(double)arg6 options:(unsigned long long)arg7 mass:(double)arg8 stiffness:(double)arg9 damping:(double)arg10 initialVelocity:(struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })arg11 completion:(id /* block */)arg12;
+ (void)pu_animateView:(id)arg1 toCenter:(struct CGPoint { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 withDuration:(double)arg5 delay:(double)arg6 usingSpringWithDamping:(double)arg7 initialVelocity:(struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })arg8 options:(unsigned long long)arg9 completion:(id /* block */)arg10;
+ (void)pu_animateViews:(id)arg1 usingDefaultDampedSpringWithDelay:(double)arg2 initialSpringVelocity:(double)arg3 options:(unsigned long long)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)pu_animateViews:(id)arg1 usingSpringWithDuration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 mass:(double)arg5 stiffness:(double)arg6 damping:(double)arg7 initialVelocity:(double)arg8 animations:(id /* block */)arg9 completion:(id /* block */)arg10;
+ (void)pu_animateViews:(id)arg1 withDuration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)pu_animateViews:(id)arg1 withDuration:(double)arg2 delay:(double)arg3 usingSpringWithDamping:(double)arg4 initialSpringVelocity:(double)arg5 options:(unsigned long long)arg6 animations:(id /* block */)arg7 completion:(id /* block */)arg8;
+ (void)pu_animateWithDuration:(double)arg1 animations:(id /* block */)arg2;
+ (void)pu_animateWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)pu_animateWithEnforcedDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (double)pu_layoutMarginWidthForCurrentScreenSize;
+ (double)pu_springOscillationRootAtIndex:(long long)arg1 forMass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 initialVelocity:(double)arg5;
+ (void)pu_transitionWithView:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;

- (id)_pu_animationDictionary;
- (id)_pu_associatedConstraints;
- (id)_pu_referenceBasicAnimationForCurrentAnimation;
- (void)pu_addConstraint:(id)arg1 forKey:(id)arg2;
- (void)pu_addConstraints:(id)arg1 forKey:(id)arg2;
- (void)pu_addTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)pu_clearAllConstraintsForKey:(id)arg1;
- (id)pu_constraintsForKey:(id)arg1;
- (bool)pu_hasConstraintForKey:(id)arg1;
- (void)pu_removeAllConstraintsForKey:(id)arg1;
- (void)pu_removeAllGeometryAnimationsRecursively:(bool)arg1;
- (void)pu_setCenterAndBoundsForFrameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit

- (bool)pl_isScrollViewDelegateMethod:(SEL)arg1;
- (void)pl_performCrossFadeIfNecessary;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

- (long long)_layoutDirectionFromLayoutDirectionValue:(id)arg1;
- (id)_layoutDirectionValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustRectCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (id)ancestorOfClass:(Class)arg1;
- (void)attachPopUpAnimation;
- (void)debugHighlightView;
- (void)debugHighlightViewBlue;
- (void)debugHighlightViewWithColor:(id)arg1 width:(double)arg2;
- (id)debugingBorderColor;
- (id)findFirstResponder;
- (id)imageSnapshot;
- (bool)isHorizontallyCompact;
- (bool)isHorizontallyRegular;
- (bool)isHorizontallySpecified;
- (bool)isVerticallyCompact;
- (bool)isVerticallyRegular;
- (bool)isVerticallySpecified;
- (bool)isViewSizeFullScreenInWindow:(id)arg1 ignoreInWindowCheck:(bool)arg2;
- (long long)layoutDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mt_statusBarFrame;
- (void)printResponderChain;
- (void)setDebugingBorderColor:(id)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setRoundedCorners:(long long)arg1 radius:(double)arg2;
- (id)snapshot_cg;
- (id)subviewOfClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)pbf_displayContext;
- (long long)pbf_layoutOrientation;

// Image: /System/Library/PrivateFrameworks/PrintKitUI.framework/PrintKitUI

- (Class)_printFormatterClass;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewPrintFormatter:(id)arg2;
- (id)viewPrintFormatter;

// Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI

- (id)borderColor;
- (double)borderWidth;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setShadowUIColor:(id)arg1;
- (id)shadowUIColor;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (bool)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
- (void)setTtrFocusGroupIdentifier:(id)arg1;
- (id)ttrFocusGroupIdentifier;
- (bool)ttriAccessibilityShouldUseViewHierarchyForFindingScrollParent;
- (bool)ttriAccessibilityShowContextMenuAtPoint:(struct CGPoint { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport

- (id)_maps_constraintsEqualToEdgesOfView:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 priority:(float)arg3;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (id)searchui_containingView;
- (bool)searchui_isContainedByItem:(id)arg1;
- (id)searchui_view;

// Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI

- (void)pinToEdges:(id)arg1;
- (void)pinToHorizontalEdges:(id)arg1;
- (void)pinToVerticalEdges:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

+ (void)smu_animateUsingSpringWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 mass:(double)arg4 stiffness:(double)arg5 damping:(double)arg6 initialVelocity:(double)arg7 animations:(id /* block */)arg8;
+ (void)smu_animateUsingSpringWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 mass:(double)arg4 stiffness:(double)arg5 damping:(double)arg6 initialVelocity:(double)arg7 animations:(id /* block */)arg8 completion:(id /* block */)arg9;
+ (void)smu_animateUsingSpringWithTension:(double)arg1 friction:(double)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)smu_animationConfigurationForStyle:(long long)arg1;
+ (id)smu_contentUnavailableView;
+ (unsigned long long)smu_coreAnimationDefaultCurve;
+ (id)smu_floatingContentViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)smu_isInAnimationBlock;
+ (id)smu_tvCarouselView;
+ (id)smu_tvFocusableTextView;

- (void)setSmu_touchInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)smu_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (double)smu_continuousCornerRadius;
- (double)smu_cornerRadius;
- (void)smu_setContinuousCornerRadius:(double)arg1;
- (void)smu_setCornerRadius:(double)arg1;
- (void)smu_setSpeedBumpEdges:(unsigned long long)arg1;
- (bool)smu_shouldReverseLayoutDirection;
- (unsigned long long)smu_speedBumpEdges;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })smu_touchInsets;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameUsingCenterAndBounds;
- (void)setFrameUsingCenterAndBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo

- (void)setHidden:(bool)arg1 withShowDelay:(double)arg2;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (bool)siriChevronShouldBeOnLeadingSide;

- (void)recursive_setSemanticContentAttribute:(long long)arg1;
- (id)siriui_addHeightConstraint:(double)arg1;
- (id)siriui_addHeightConstraint:(double)arg1 priority:(float)arg2;
- (id)siriui_addWidthConstraint:(double)arg1;
- (id)siriui_addWidthConstraint:(double)arg1 priority:(float)arg2;
- (id)siriui_centerHorizontallyWithItem:(id)arg1 withMargin:(double)arg2;
- (id)siriui_centerVerticallyWithItem:(id)arg1 withMargin:(double)arg2;
- (id)siriui_centerVerticallyWithView:(id)arg1 withMargin:(double)arg2 priority:(float)arg3;
- (id)siriui_pinBottomTo:(id)arg1 withMargin:(double)arg2;
- (id)siriui_pinBottomTo:(id)arg1 withMargin:(double)arg2 priority:(float)arg3;
- (id)siriui_pinBottomToTopOf:(id)arg1 withMargin:(double)arg2;
- (id)siriui_pinBottomToTopOf:(id)arg1 withMargin:(double)arg2 priority:(float)arg3;
- (id)siriui_pinLastBaselineToFirstBaseline:(id)arg1 withMargin:(double)arg2;
- (id)siriui_pinLeadingTo:(id)arg1 withMargin:(double)arg2;
- (id)siriui_pinLeadingToLeadingEdgeOf:(id)arg1 withMargin:(double)arg2;
- (id)siriui_pinLeadingToLeadingEdgeOf:(id)arg1 withMargin:(double)arg2 priority:(float)arg3;
- (id)siriui_pinLeadingToTrailingEdgeOf:(id)arg1 withMargin:(double)arg2;
- (id)siriui_pinLeadingToTrailingEdgeOf:(id)arg1 withMargin:(double)arg2 priority:(float)arg3;
- (id)siriui_pinToLayoutGuide:(id)arg1;
- (id)siriui_pinToSuperviewWithEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)siriui_pinTopTo:(id)arg1 withMargin:(double)arg2;
- (id)siriui_pinTopTo:(id)arg1 withMargin:(double)arg2 priority:(float)arg3;
- (id)siriui_pinTrailingTo:(id)arg1 withMargin:(double)arg2;
- (id)siriui_pinTrailingToLeadingEdgeOf:(id)arg1 withMargin:(double)arg2;
- (id)siriui_pinTrailingToLeadingEdgeOf:(id)arg1 withMargin:(double)arg2 priority:(float)arg3;
- (id)siriui_pinTrailingToTrailingEdgeOf:(id)arg1 withMargin:(double)arg2;
- (id)siriui_pinTrailingToTrailingEdgeOf:(id)arg1 withMargin:(double)arg2 priority:(float)arg3;
- (void)siriui_setBlendEffectEnabled:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore

- (void)suic_recursiveSetSemanticContentAttribute:(long long)arg1;
- (void)suic_updateViewHierarchyToUseSiriLanguageSemanticContentAttribute;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)ancestorViewOfClass:(Class)arg1;
- (id)ancestorViewOfInstance:(id)arg1;
- (id)layerFromSnapshot;
- (id)layerFromSnapshot:(bool)arg1;
- (id)snapshot;
- (id)snapshot:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl

- (void)addBottomBorderWithColor:(id)arg1 thickness:(double)arg2 margins:(double)arg3;
- (id)cac_snapshot;
- (struct CGPoint { double x1; double x2; })zw_boundsCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zw_convertBoundsToScreenCoordinates;
- (struct CGPoint { double x1; double x2; })zw_convertPointFromScreenCoordinates:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })zw_convertPointToScreenCoordinates:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zw_convertRectFromScreenCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zw_convertRectToScreenCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (void)SBPIP_animateUsingDefaultTimingWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (void)SBPIP_animateUsingDefaultTimingWithOptions:(unsigned long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)SBPIP_performWithoutRetargetingAnimation:(id /* block */)arg1;
+ (id)sb_firstDescendantOfViews:(id)arg1 passingTest:(id /* block */)arg2;

- (double)ID0CornerRadius;
- (bool)SBPIP_allowsEdgeAntialiasing;
- (bool)SBPIP_allowsGroupBlending;
- (void)SBPIP_recursivelyDisallowGroupBlending;
- (void)SBPIP_removeVibrancyEffect;
- (void)SBPIP_setAllowsEdgeAntialiasing:(bool)arg1;
- (void)SBPIP_setAllowsGroupBlending:(bool)arg1;
- (void)SBPIP_updateVibrancyEffectForTintColorWithFilter:(id)arg1;
- (id)_fbsDisplayConfiguration;
- (id)_fbsDisplayIdentity;
- (void)_generateSnapshotOnQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_independentlyAnimatableMemberKeyPathsForProperty:(id)arg1;
- (id)_independentlyAnimatableMemberKeyPathsForPropertyKeyPath:(id)arg1;
- (void)_printLayer:(id)arg1 level:(int)arg2;
- (void)_sbClassicLayout_applyTransformsForClassicPresentationInReferenceSpace:(bool)arg1 forInterfaceOrientation:(long long)arg2 withInheritedScaleFromContainer:(double)arg3 applyInheritedScaleToTranslationAndCorners:(bool)arg4 allowStatusBarToOverlap:(bool)arg5 useDeviceCornerRadius:(bool)arg6;
- (id)_sbDisplayConfiguration;
- (id)_sbWindowScene;
- (id)_sbsa_deepestLayerAndCALayerRelativeKeyPathForUIKeyPath:(id)arg1 caLayerRelativeKeyPath:(out id*)arg2;
- (void)_setValue:(id)arg1 byUpdatingMemberKeypaths:(id)arg2 forKeyPath:(id)arg3;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)sbClassicLayout_applyTransformsForClassicPresentationInLayoutSpaceForInterfaceOrientation:(long long)arg1 withInheritedScaleFromContainer:(double)arg2 applyInheritedScaleToTranslationAndCorners:(bool)arg3 allowStatusBarToOverlap:(bool)arg4 useDeviceCornerRadius:(bool)arg5;
- (void)sbClassicLayout_applyTransformsForClassicPresentationInReferenceSpaceForInterfaceOrientation:(long long)arg1 allowStatusBarToOverlap:(bool)arg2 useDeviceCornerRadius:(bool)arg3;
- (id)sb_firstDescendantOfClass:(Class)arg1;
- (id)sb_firstDescendantOfClassNamed:(id)arg1;
- (id)sb_firstDescendantPassingTest:(id /* block */)arg1;
- (id)sb_generateSnapshotContentsSynchronously;
- (bool)sb_hasActiveKeyboardOnScreen;
- (void)sb_printLayerHierarchy;
- (void)sb_removeAllSubviews;
- (void)sb_removeAnimationsForKeys:(id)arg1 update:(id /* block */)arg2;
- (void)sb_removeAnimationsIncludingSubviews:(bool)arg1 predicate:(id /* block */)arg2;
- (id)sb_snapshotImage;
- (bool)sbsa_isPropertyActivelyC2AnimatingForKeyPath:(id)arg1;
- (id)sbsa_presentationModifierValueForKeyPath:(id)arg1;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setID0CornerRadius:(double)arg1;
- (void)setSpotlightBackgroundWeighting:(double)arg1;
- (double)spotlightBackgroundWeighting;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

+ (void)sb_animateWithSettings:(id)arg1 interactive:(bool)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)sb_animateWithSettings:(id)arg1 mode:(long long)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)sb_modifyAnimationsWithPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 updateReason:(unsigned int)arg2 animations:(id /* block */)arg3;

- (void)sbf_setBoundsAndPositionFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI

- (void)sbui_drawEagerly;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

+ (void)SBUISA_animateWithSettings:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)SBUISA_performWithoutAnimationOrRetargeting:(id /* block */)arg1;

- (long long)SBUISA_layoutMode;
- (double)SBUISA_maximumAccessoryViewWidth;
- (double)SBUISA_standardInteritemPadding;
- (id)SBUISA_systemApertureCustomControlsContentLayoutGuide;
- (id)SBUISA_systemApertureLayoutGuideWithIdentifier:(id)arg1;
- (id)SBUISA_systemApertureLeadingConcentricContentLayoutGuide;
- (id)SBUISA_systemApertureLeadingViewLayoutGuide;
- (id)SBUISA_systemApertureLegibleContentLayoutMarginsGuide;
- (id)SBUISA_systemApertureMaximumContentSizeLayoutGuide;
- (id)SBUISA_systemApertureMinimalViewLayoutGuide;
- (id)SBUISA_systemApertureMinimumContentSizeLayoutGuide;
- (id)SBUISA_systemApertureObstructedAreaLayoutGuide;
- (id)SBUISA_systemApertureTrailingConcentricContentLayoutGuide;
- (id)SBUISA_systemApertureTrailingViewLayoutGuide;
- (void)sb_setBoundsAndPositionFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)sb_setPresentationBoundsAndPositionFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)sbui_systemApertureApplyMinimumAndMaximumContentSizeCategoryForCustomLayoutMode:(bool)arg1;
- (id)systemApertureElementContext;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (id)_SKUIView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultPresentationPosition;
- (id)skui_apparentBackgroundColor;

// Image: /System/Library/PrivateFrameworks/SystemApertureUI.framework/SystemApertureUI

+ (id)_sauiBlurInputRadiusKeyPath;
+ (id)_sauiBlurKeyPath;

- (void)_configureBlurFilterIfNecessary;
- (bool)isSauiBlurConfigured;
- (double)sauiBlurRadius;
- (void)setSauiBlurRadius:(double)arg1;

// Image: /System/Library/PrivateFrameworks/SystemStatusUI.framework/SystemStatusUI

- (void)_ui_addSubLayoutItem:(id)arg1;
- (void)_ui_addToView:(id)arg1 atIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ui_bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ui_frame;
- (void)_ui_insertSubLayoutItem:(id)arg1 atIndex:(long long)arg2;
- (void)_ui_removeFromParentLayoutItem;
- (id)_ui_superview;
- (bool)_ui_usesManualLayout;
- (id)_ui_view;
- (void)set_ui_frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_ui_usesManualLayout:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)childAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_translateToView:(id)arg1 above:(bool)arg2 siblingView:(id)arg3 shouldScale:(bool)arg4;
- (void)setTsdAlpha:(double)arg1;
- (void)setTsdBackgroundColor:(id)arg1;
- (void)translateAndScaleToView:(id)arg1;
- (void)translateAndScaleToView:(id)arg1 aboveSubview:(id)arg2;
- (void)translateAndScaleToView:(id)arg1 belowSubview:(id)arg2;
- (void)translateToView:(id)arg1;
- (void)translateToView:(id)arg1 aboveSubview:(id)arg2;
- (void)translateToView:(id)arg1 belowSubview:(id)arg2;
- (id)ts_windowForView;
- (double)tsdAlpha;
- (id)tsdBackgroundColor;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (void)addBorderWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (void)tv_performByPreventingAdditiveAnimations:(id /* block */)arg1;

- (void)_transferAttributesFromElement:(id)arg1;
- (void)didSelect;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setPressed:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (void)transferLayoutStylesFromElement:(id)arg1;
- (id)tv_AccessibilityText;
- (long long)tv_alignment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (id)tv_backgroundColor;
- (long long)tv_contentAlignment;
- (void)tv_disableAnimation:(bool)arg1 forProperty:(id)arg2;
- (id)tv_elementName;
- (unsigned long long)tv_elementType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tv_focusMargin;
- (id)tv_highlightColor;
- (id)tv_impressionableElementsForDocument:(id)arg1;
- (id)tv_impressionableElementsForDocument:(id)arg1 parentViewController:(id)arg2;
- (double)tv_interitemSpacing;
- (bool)tv_isAnimationDisabledForProperty:(id)arg1;
- (bool)tv_isPrototypeView;
- (double)tv_itemHeight;
- (double)tv_itemWidth;
- (id)tv_layout;
- (double)tv_lineSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tv_margin;
- (bool)tv_marqueeOnHighlight;
- (double)tv_maxHeight;
- (double)tv_maxWidth;
- (double)tv_minHeight;
- (double)tv_minWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tv_nonDirectionalMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tv_padding;
- (long long)tv_position;
- (void)tv_setAccessibilityText:(id)arg1;
- (void)tv_setLayout:(id)arg1;
- (void)tv_setShowcaseFactor:(double)arg1;
- (void)tv_setSiriData:(id)arg1;
- (void)tv_setValue:(id)arg1 forTVViewTag:(id)arg2;
- (bool)tv_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)tv_shouldReuseCachedSizeThatFits:(struct CGSize { double x1; double x2; })arg1 previousTargetSize:(struct CGSize { double x1; double x2; })arg2 newTargetSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)tv_showOnHighlight;
- (id)tv_siriData;
- (struct CGSize { double x1; double x2; })tv_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })tv_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withSizeCalculation:(id /* block */)arg2;
- (id)tv_valueForTVViewTag:(id)arg1;
- (id)valueForTVViewStyle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

+ (void)ts_executeWithAnimated:(bool)arg1 duration:(double)arg2 setupBlock:(id /* block */)arg3 animationBlock:(id /* block */)arg4 completion:(id /* block */)arg5;

- (bool)_accessibilityIsSpeakThisElement;
- (void)setTs_accessibilityInterfaceStyleIntent:(unsigned long long)arg1;
- (unsigned long long)ts_accessibilityInterfaceStyleIntent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ts_frameUsingCenterAndBounds;
- (bool)ts_safeAreaWidthExceedsReadableWidth;
- (void)ts_setFrameUsingCenterAndBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)ts_setHiddenForReuse:(bool)arg1;
- (void)ts_setPlusDCompositingFilter;
- (void)ts_setPlusLCompositingFilter;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (void)tpSetSemanticContentAttribute_recursive:(long long)arg1 startingAtView:(id)arg2;

- (void)tp_setCHCRPriority:(float)arg1;
- (long long)tp_userInterfaceLayoutDirection;

// Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit

- (void)tlk_updateForAppearance:(id)arg1;
- (void)tlk_updateWithCurrentAppearance;
- (void)tlks_setCornerRadius:(double)arg1 withStyle:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI

- (id)_allLines;
- (void)_attachLine:(id)arg1 toEdge:(unsigned long long)arg2;
- (void)_setImage:(id)arg1 onEdges:(unsigned long long)arg2 outside:(bool)arg3 style:(id)arg4;
- (void)_setShowsLinesOnEdges:(unsigned long long)arg1 style:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit

- (id)_tk_autolayoutTrace;
- (id)_tk_recursiveAutolayoutTraceAtLevel:(long long)arg1 anyDescendantHasAmbiguousLayout:(bool*)arg2;
- (unsigned long long)_tl_depth;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3 withMultiplier:(double)arg4;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3 withOffset:(double)arg4;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2 withMultiplier:(double)arg3;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;
- (id)tk_addedConstraintFotLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3 withMultiplier:(double)arg4;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3 withOffset:(double)arg4;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2 withMultiplier:(double)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;
- (id)tk_firstCommonAncestorWithView:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

+ (void)tmlLoadCategory;
+ (id)tmlLoadViewFromPath:(id)arg1;

- (void)_tmlEnsureContext:(id /* block */)arg1;
- (void)_tmlUnloadContext;
- (void)setConstraints:(id)arg1;
- (void)setGestureRecognizers:(id)arg1;
- (void)setLayoutGuides:(id)arg1;
- (void)setSubviews:(id)arg1;
- (void)setTmlObjects:(id)arg1;
- (bool)tmlAccessibilityActivate;
- (void)tmlAccessibilityDecrement;
- (void)tmlAccessibilityIncrement;
- (id)tmlContext;
- (void)tmlDidMoveToWindow;
- (void)tmlLoadReusableView:(id)arg1;
- (void)tmlLoadView;
- (void)tmlLoadView:(id)arg1;
- (void)tmlLoadViewFromPath:(id)arg1;
- (id)tmlObjects;
- (void)tmlTraitCollectionDidChange:(id)arg1;
- (id)tmlViewPath;

// Image: /System/Library/PrivateFrameworks/TypistFramework.framework/TypistFramework

+ (bool)viewExistsOnScreen:(id)arg1;

- (id)allSubViews;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

+ (id)_accessibilityElementsAndContainersDescendingFromViews:(id)arg1 options:(id)arg2 sorted:(bool)arg3;
+ (id)_accessibilityTitleForSystemTag:(long long)arg1;
+ (id)_subviewsReplacedByModalViewSubviewsIfNecessary:(id)arg1;

- (bool)_accessibilityAllowsSiblingsWhenOvergrown;
- (void)_accessibilityClearChildren;
- (id)_accessibilityComputedLabelForNavigationBarWithAssociatedBarButtonItem:(id)arg1;
- (struct CGSize { double x1; double x2; })_accessibilityFrameExpansion;
- (bool)_accessibilityIsSortingInUpperFrame;
- (bool)_accessibilityOverridesInvalidFrames;
- (void)_accessibilitySetAllowsSiblingsWhenOvergrown:(bool)arg1;
- (void)_accessibilitySetFrameExpansion:(struct CGSize { double x1; double x2; })arg1;
- (void)_accessibilitySetIsSortingInUpperFrame:(bool)arg1;
- (void)_accessibilitySetOverridesInvalidFrames:(bool)arg1;
- (void)_accessibilitySetViewIsVisible:(bool)arg1;
- (bool)_accessibilityShouldBeAddedToViewChildrenWithOptions:(id)arg1;
- (bool)_accessibilityShouldBeProcessed:(id)arg1;
- (bool)_accessibilityShouldUseSupplementaryViews;
- (id)_accessibilitySubviews;
- (id)_accessibilitySubviewsForGettingElementsWithOptions:(id)arg1;
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;
- (bool)_accessibilityViewIsActive;
- (bool)_accessibilityViewIsVisible;
- (bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(bool)arg1;
- (bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(bool)arg1 stoppingBeforeContainer:(id)arg2;
- (id)_accessibleNonSupplementarySubviews;
- (id)_accessibleSubviews;
- (id)_accessibleSubviews:(int)arg1;
- (void)_addAccessibilityElementsAndOrderedContainersWithOptions:(id)arg1 toCollection:(id)arg2;
- (struct CGPoint { double x1; double x2; })accessibilityConvertPointFromSceneReferenceCoordinates:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityConvertRectToSceneReferenceCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (id)_interactionForClass:(Class)arg1;
- (void)_nc_setHasDeferredActions:(bool)arg1;
- (void)_nc_setSubviewHasDeferredActions;
- (void)_nc_setSubviewHasDeferredActions:(bool)arg1;
- (bool)_nc_subviewHasDeferredActions;
- (bool)canBecomeFirstResponder;
- (bool)nc_hasDeferredActions;
- (bool)nc_isMenuEnabled;
- (bool)nc_isPlatterSubordinateIconShadowEnabled;
- (void)nc_performCrossFadeForDeferredActions;
- (void)nc_performDeferredActionsIfNeeded;
- (void)nc_setHasDeferredActions;
- (void)nc_setMenuEnabled:(bool)arg1;
- (void)nc_setPlatterSubordinateIconShadowEnabled:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1 maximumContentSizeCategory:(unsigned long long)arg2;
- (void)setVisibilityForHighlightStyleWithHighlighted:(bool)arg1 recursively:(bool)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)topMarginWithBaselineMargin:(double)arg1 maximumContentSizeCategory:(unsigned long long)arg2;
- (bool)vui_shouldRecomputeCachedSizeThatFits:(struct CGSize { double x1; double x2; })arg1 previousTargetSize:(struct CGSize { double x1; double x2; })arg2 previousTraitCollection:(id)arg3 newTargetSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })vui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })vui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 layout:(id)arg2;
- (struct CGSize { double x1; double x2; })vui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 layout:(id)arg2 withSizeCalculation:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

+ (id)_timingFuctionWithOptions:(unsigned long long)arg1;
+ (void)vui_animateWithDuration:(double)arg1 animations:(id /* block */)arg2;
+ (void)vui_animateWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)vui_animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)vui_performByPreventingAdditiveAnimations:(id /* block */)arg1;
+ (void)vui_performWithoutAnimation:(id /* block */)arg1;
+ (void)vui_transitionWithView:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;

- (id)removingAlpha:(id)arg1;
- (void)setVuiAccessibilityIdentifier:(id)arg1;
- (void)setVuiAlpha:(double)arg1;
- (void)setVuiAutoresizingMask:(unsigned long long)arg1;
- (void)setVuiBackgroundColor:(id)arg1;
- (void)setVuiCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVuiClipsToBounds:(bool)arg1;
- (void)setVuiContentMode:(unsigned long long)arg1;
- (void)setVuiTintColor:(id)arg1;
- (void)setVuiUserInteractionEnabled:(bool)arg1;
- (id)vuiAccessibilityIdentifier;
- (double)vuiAlpha;
- (unsigned long long)vuiAutoresizingMask;
- (id)vuiBackgroundColor;
- (struct CGPoint { double x1; double x2; })vuiCenter;
- (bool)vuiClipsToBounds;
- (unsigned long long)vuiContentMode;
- (bool)vuiDebugUI;
- (bool)vuiIsRTL;
- (bool)vuiIsUserInteractionEnabled;
- (id)vuiLayer;
- (unsigned long long)vuiOverrideUserInterfaceStyle;
- (id)vuiSubviews;
- (id)vuiTintColor;
- (id)vuiTraitCollection;
- (unsigned long long)vuiUserInterfaceStyle;
- (id)vui_accessibilityText;
- (bool)vui_addSubview:(id)arg1 oldView:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })vui_alignmentInsetsForExpectedWidth:(double)arg1;
- (void)vui_applyToolbarSemanticContext;
- (void)vui_bringSubviewToFront:(id)arg1;
- (void)vui_didMoveToWindow;
- (bool)vui_highlighted;
- (bool)vui_insertSubview:(id)arg1 aboveSubview:(id)arg2 oldView:(id)arg3;
- (bool)vui_insertSubview:(id)arg1 belowSubview:(id)arg2 oldView:(id)arg3;
- (void)vui_isAccessibilityElement:(bool)arg1;
- (bool)vui_isDescendantOfView:(id)arg1;
- (bool)vui_isInAWindow;
- (void)vui_layoutIfNeeded;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_performAsCurrentTraitCollection:(id /* block */)arg1;
- (void)vui_prepareForReuse;
- (void)vui_registerForTraitChanges:(id)arg1 withHandler:(id /* block */)arg2;
- (void)vui_removeFromSuperView;
- (void)vui_sendSubviewToBack:(id)arg1;
- (void)vui_setAccessibilityText:(id)arg1;
- (void)vui_setHighlighted:(bool)arg1;
- (void)vui_setNeedsDisplay;
- (void)vui_setNeedsLayout;
- (void)vui_setOverrideUserInterfaceStyle:(unsigned long long)arg1;
- (void)vui_setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (struct CGSize { double x1; double x2; })vui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)vui_willMoveToWindow:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (void)setVk_alpha:(double)arg1;
- (void)setVk_backgroundColor:(id)arg1;
- (void)setVk_userInteractionEnabled:(bool)arg1;
- (id)summaryDescription;
- (double)vk_alpha;
- (id)vk_autoFadeOutLayerWithPath:(id)arg1;
- (id)vk_autoFadeOutLayerWithPath:(id)arg1 fadeOutDelay:(double)arg2;
- (id)vk_autoFadeOutLayerWithQuad:(id)arg1;
- (id)vk_autoFadeOutLayerWithQuad:(id)arg1 fadeOutDelay:(double)arg2;
- (id)vk_autoFadeOutShapePointLayer;
- (id)vk_autoFadeOutShapeRectLayer;
- (id)vk_backgroundColor;
- (double)vk_backingScaleFactor;
- (bool)vk_clipsToBounds;
- (id)vk_constraintsToFillLayoutGuide:(id)arg1;
- (id)vk_constraintsToFillView:(id)arg1;
- (bool)vk_isDescendantOfView:(id)arg1;
- (bool)vk_isFirstResponder;
- (bool)vk_isFlipped;
- (void)vk_layoutIfNeeded;
- (id)vk_renderImageFromViewBackingStore;
- (id)vk_renderImageFromViewBackingStoreWithSubrect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vk_roundRectToViewScale:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vk_safeAreaBounds;
- (void)vk_setHidden:(bool)arg1 animated:(bool)arg2;
- (void)vk_setNeedsDisplay;
- (void)vk_setNeedsLayout;
- (bool)vk_userInteractionEnabled;
- (double)vk_viewLengthFromWindowLength:(double)arg1;
- (double)vk_viewPointRatioFromWindow;
- (double)vk_windowLengthFromViewLength:(double)arg1;
- (double)vk_windowPointRatioFromView;

// Image: /System/Library/PrivateFrameworks/WatchQuickActionsServices.framework/WatchQuickActionsServices

- (void)_wqa_actuallyClearAndUnregisterQuickAction:(id)arg1;
- (void)_wqa_registerQuickActionForBoundingPathChanges:(id)arg1;
- (void)_wqa_unregisterExistingQuickActionForBoundingPathChanges;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

- (void)_wg_innerWalkSubviewTreeWithBlock:(id /* block */)arg1 stop:(bool*)arg2;
- (bool)wg_imageContentsDrawWithinBounds;
- (bool)wg_supportsBottomCornerRadiusGivenRootView:(id)arg1 withCornerRadius:(double)arg2 supportedCorners:(unsigned long long*)arg3;
- (void)wg_walkSubviewTreeWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)wf_addConstraintsToFillLayoutGuide:(id)arg1;
- (id)wf_addConstraintsToFillLayoutGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)wf_addConstraintsToFillSuperview:(id)arg1;
- (id)wf_addConstraintsToFillSuperview:(id)arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)wf_containsFirstResponder;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (id)_firstDescendantOfKind:(Class)arg1;
- (void)centerSubviewInBounds:(id)arg1;
- (id)firstScrollViewDescendant;
- (id)superviewOfClass:(Class)arg1;

@end
