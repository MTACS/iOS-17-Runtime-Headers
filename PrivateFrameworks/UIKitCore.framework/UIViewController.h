
@interface UIViewController : UIResponder <BSTraitEnvironment, DOCAppearanceCustomization, EKUIFutureTraitEnvironment, GKContentRefresh, GKURLHandling, HUItemPresentationContainer, IMMetricsDataSource, MKInfoCardThemeListener, NSCoding, NSExtensionRequestHandling, PBFDisplayContextProviding, PXAnonymousViewController, PXDiagnosticsEnvironment, PXProgrammaticNavigationParticipant, SXHostable, TSPresenterType, UIAppearanceContainer, UIContentContainer, UIFocusEnvironment, UITraitChangeObservable, UITraitChangeObservableInternal, UITraitEnvironment, UIWindowDelegate, VUIControllerPresenter, _UIAlwaysOnEnvironmentObserver, _UIContentContainerInternal, _UIFallbackEnvironment, _UIFocusEnvironmentInternal, _UIOrientationDebugDescriptionProviding, _UIScrollViewScrollObserver_Internal, _UIStatusBarAnimationProviding, _UITraitEnvironmentInternal, _UITraitOverrideDelegate, _UIViewServiceDeputy> {
    UIViewController * __childControllerToIgnoreWhileLookingForTransitionCoordinator;
    UIViewController * __departingParentViewController;
    <_UIViewControllerContentViewEmbedding> * __embeddedDelegate;
    UIView * __embeddedView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __embeddedViewFrame;
    UIView * __embeddingView;
    UIAccessibilityHUDView * _accessibilityHUD;
    NSArray * _addedKeyCommands;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalSafeAreaInsets;
    id /* block */  _afterAppearance;
    <NSObject> * _appearStateActivityToken;
    id /* block */  _atViewIsAppearing;
    NSLayoutConstraint * _bottomBarInsetGuideConstraint;
    <UILayoutSupport><_UILayoutItem> * _bottomLayoutGuide;
    UIViewController * _childModalViewController;
    UIViewController * _childViewControllerForPreferredContainerBackgroundStyle;
    NSMutableArray * _childViewControllers;
    double  _contentMargin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentOverlayInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSizeForViewInPopover;
    _UIContentUnavailableWrapperView * _contentUnavailableWrapperView;
    UIViewControllerAction * _currentAction;
    double  _customNavigationInteractiveTransitionDuration;
    double  _customNavigationInteractiveTransitionPercentComplete;
    UITransitionView * _customTransitioningView;
    id  _dimmingView;
    id  _dropShadowView;
    unsigned long long  _edgesForExtendedLayout;
    UIBarButtonItem * _editButtonItem;
    NSMapTable * _effectiveContentScrollViews;
    UIWindow * _expectedWindow;
    long long  _explicitAppearanceTransitionLevel;
    NSDictionary * _externalObjectsTableForViewLoading;
    struct CGSize { 
        double width; 
        double height; 
    }  _formSheetSize;
    UITraitCollection * _frozenTraitCollection;
    bool  _ignoreAppSupportedOrientations;
    bool  _ignoresParentMargins;
    NSString * _interactionActivityTrackingBaseName;
    NSArray * _interfaceBuilderKeyCommands;
    UIScrollView * _internalContentScrollView;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastForwardedTransitionSize;
    long long  _lastKnownInterfaceOrientation;
    UITraitCollection * _lastNotifiedTraitCollection;
    double  _leftContentMargin;
    bool  _modalPresentationCapturesStatusBarAppearance;
    long long  _modalPresentationStyle;
    UIResponder * _modalPreservedFirstResponder;
    UIViewController * _modalSourceViewController;
    long long  _modalTransitionStyle;
    double  _navigationControllerContentOffsetAdjustment;
    UINavigationContentAdjustments * _navigationInsetAdjustment;
    UINavigationItem * _navigationItem;
    bool  _nextResponderIgnoresWindowIfRootVC;
    NSBundle * _nibBundle;
    NSString * _nibName;
    NSMutableDictionary * _observableScrollViews;
    UIPresentationController * _originalPresentationController;
    NSMapTable * _overrideTraitCollectionsForChildren;
    <UIViewControllerTransitioningDelegate> * _overrideTransitioningDelegate;
    UIViewController * _parentModalViewController;
    UIViewController * _parentViewController;
    UIPopoverController * _popoverController;
    long long  _preferredContainerBackgroundStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    UIView * _preferredFocusedItem;
    UIPresentationController * _presentationController;
    struct { 
        long long width; 
        long long height; 
    }  _presentationSizeClassPair;
    UIViewController * _presentedStatusBarViewController;
    UIViewController * _presentedUserInterfaceStyleViewController;
    <UIFocusItem> * _presentingFocusedItem;
    NSMutableArray * _previewSourceViews;
    UIViewController * _previousRootViewController;
    UIScrollView * _recordedContentScrollView;
    double  _rightContentMargin;
    UIView * _savedFooterSuperview;
    UIView * _savedHeaderSuperview;
    UISearchDisplayController * _searchDisplayController;
    UIStoryboardSegue * _segueResponsibleForModalPresentation;
    UIViewController * _sourceViewControllerIfPresentedViaPopoverSegue;
    UIStoryboard * _storyboard;
    NSArray * _storyboardCommitSegueTemplates;
    NSString * _storyboardIdentifier;
    NSArray * _storyboardPreviewSegueTemplates;
    NSArray * _storyboardPreviewingRegistrants;
    NSArray * _storyboardSegueTemplates;
    UISearchDisplayController * _strongSearchDisplayController;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _systemMinimumLayoutMargins;
    UITabBarItem * _tabBarItem;
    UIPresentationController * _temporaryPresentationController;
    NSString * _title;
    NSArray * _toolbarItems;
    NSLayoutConstraint * _topBarInsetGuideConstraint;
    <UILayoutSupport><_UILayoutItem> * _topLayoutGuide;
    NSArray * _topLevelObjectsToKeepAliveFromStoryboard;
    _UITraitChangeRegistry * _traitChangeRegistry;
    _UITraitOverrides * _traitOverrides;
    <UIViewControllerTransitioningDelegate> * _transitioningDelegate;
    UIView * _view;
    struct { 
        unsigned int appearState : 2; 
        unsigned int isEditing : 1; 
        unsigned int isPerformingModalTransition : 1; 
        unsigned int hidesBottomBarWhenPushed : 1; 
        unsigned int autoresizesArchivedViewToFullSize : 1; 
        unsigned int viewLoadedFromControllerNib : 1; 
        unsigned int isRootViewController : 1; 
        unsigned int isSuspended : 1; 
        unsigned int wantsFullScreenLayout : 1; 
        unsigned int shouldUseFullScreenLayout : 1; 
        unsigned int allowsAutorotation : 1; 
        unsigned int searchControllerRetained : 1; 
        unsigned int oldModalInPopover : 1; 
        unsigned int isModalInPresentation : 1; 
        unsigned int isInWillRotateCallback : 1; 
        unsigned int isFinishingModalTransition : 1; 
        unsigned int definesPresentationContext : 1; 
        unsigned int providesPresentationContextTransitionStyle : 1; 
        unsigned int containmentSupport : 1; 
        unsigned int isSettingAppearState : 1; 
        unsigned int isInAnimatedVCTransition : 1; 
        unsigned int presentationIsChanging : 1; 
        unsigned int isBeingPresented : 1; 
        unsigned int containmentIsChanging : 1; 
        unsigned int explicitTransitionIsAppearing : 1; 
        unsigned int disableAppearanceTransitions : 1; 
        unsigned int needsDidMoveCleanup : 1; 
        unsigned int suppressesBottomBar : 1; 
        unsigned int isExecutingAfterAppearance : 1; 
        unsigned int rootResignationNeeded : 1; 
        unsigned int viewConstraintsNeedUpdateOnAppearance : 1; 
        unsigned int shouldForceNonAnimatedTransition : 1; 
        unsigned int isInCustomTransition : 1; 
        unsigned int mayForwardPresentationsToPresentedViewController : 1; 
        unsigned int usesSharedView : 1; 
        unsigned int extendedLayoutIncludesOpaqueBars : 1; 
        unsigned int automaticallyAdjustInsets : 1; 
        unsigned int previousShouldUnderlapUnderStatusBar : 1; 
        unsigned int freezeShouldUnderlapUnderStatusBar : 1; 
        unsigned int shouldNotFreezeUnderlapsStatusBar : 1; 
        unsigned int monitorsSystemLayoutFittingSize : 1; 
        unsigned int shouldLoadInputAccessoryViewsOnAppearance : 1; 
        unsigned int useViewBasedTopAndBottomGuides : 1; 
        unsigned int didConfirmLayoutGuideClass : 1; 
        unsigned int restoresFocusAfterTransition : 1; 
        unsigned int hasFocusGroupIdentifier : 2; 
        unsigned int freezeLayoutForOrientationChangeOnDismissal : 1; 
        unsigned int viewRespectsSystemMinimumLayoutMargins : 1; 
        unsigned int ignoresWrapperViewForContentOverlayInsets : 1; 
        unsigned int overridesSetContentOverlayInsets : 1; 
        unsigned int isViewAttachedToWindow : 1; 
        unsigned int sendViewIsAppearingOnNextLayout : 1; 
        unsigned int overridesContentScrollView : 1; 
        unsigned int overridesContentScrollViewForEdge : 1; 
        unsigned int didCheckContentScrollViewReturnValue : 1; 
        unsigned int usingContentScrollViewForUnknownPurpose : 1; 
        unsigned int hasTraitStorageList : 1; 
        unsigned int overrideUserInterfaceStyle : 2; 
        unsigned int overrideHorizontalSizeClass : 2; 
        unsigned int overrideUserInterfaceRenderingMode : 2; 
        unsigned int needsContentUnavailableConfigurationStateUpdate : 1; 
        unsigned int isInSupportedInterfaceOrientations : 1; 
        unsigned int isCounterRotating : 1; 
        unsigned int isDeallocInitiated : 1; 
    }  _viewControllerFlags;
    bool  _viewHostsLayoutEngine;
    bool  overrideUseCustomPresentation;
}

@property (nonatomic, readonly) <EKUIViewHierarchy> *EKUI_viewHierarchy;
@property (nonatomic, readonly) long long ITunesStoreUIBarStyle;
@property (getter=MPU_identifier, setter=MPU_setIdentifier:, nonatomic, copy) NSString *MPU_identifier;
@property (nonatomic, readonly) _UIBackdropView *SKUIPinnedHeaderView;
@property (nonatomic, readonly) SKUIStackedBar *SKUIStackedBar;
@property (nonatomic) double SKUIStackedBarSplit;
@property (nonatomic, readonly) _UIBackdropView *SUUIPinnedHeaderView;
@property (nonatomic, readonly) SUUIStackedBar *SUUIStackedBar;
@property (nonatomic) double SUUIStackedBarSplit;
@property (nonatomic, readonly) struct { long long x1; long long x2; } __sizeClassPair;
@property (nonatomic, readonly) bool _allowsStylingSheetsAsCards;
@property (setter=_as_setApplicationBackgroundBlock:, nonatomic, copy) id /* block */ _as_applicationBackgroundBlock;
@property (nonatomic, readonly, retain) NSLayoutConstraint *_bottomBarInsetGuideConstraint;
@property (nonatomic, readonly) UIContentUnavailableConfigurationState *_bridgedContentUnavailableConfigurationState;
@property (setter=_setChildControllerToIgnoreWhileLookingForTransitionCoordinator:, nonatomic, retain) UIViewController *_childControllerToIgnoreWhileLookingForTransitionCoordinator;
@property (setter=_setContentMargin:, nonatomic) double _contentMargin;
@property (setter=_setContentOverlayInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _contentOverlayInsets;
@property (nonatomic, retain) _UIContentUnavailableWrapperView *_contentUnavailableWrapperView;
@property (nonatomic, readonly) bool _defersToPresentingViewControllerForSupportedInterfaceOrientations;
@property (nonatomic) UIViewController *_departingParentViewController;
@property (getter=_isDetachedFromWindowRootViewControllerHierarchy, nonatomic, readonly) bool _detachedFromWindowRootViewControllerHierarchy;
@property (nonatomic, readonly) NSMapTable *_effectiveContentScrollViews;
@property (nonatomic, readonly) NSString *_effectiveInteractionActivityTrackingBaseName;
@property (nonatomic, readonly) <_UIViewControllerContentViewEmbedding> *_embeddedDelegate;
@property (setter=_setEmbeddedDelegate:, nonatomic) <_UIViewControllerContentViewEmbedding> *_embeddedDelegate;
@property (nonatomic, readonly) UIView *_embeddedView;
@property (setter=_setEmbeddedView:, nonatomic, retain) UIView *_embeddedView;
@property (setter=_setEmbeddedViewFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _embeddedViewFrame;
@property (setter=_setEmbeddingView:, nonatomic, retain) UIView *_embeddingView;
@property (setter=_setExpectedWindow:, nonatomic, retain) UIWindow *_expectedWindow;
@property (setter=_setFreezeLayoutForOrientationChangeOnDismissal:, nonatomic) bool _freezeLayoutForOrientationChangeOnDismissal;
@property (setter=_gkSetSourcePresentingViewController:, nonatomic, retain) UIViewController *_gkSourcePresentingViewController;
@property (nonatomic, readonly) bool _hasDeepestActionResponder;
@property (nonatomic, readonly) long long _horizontalSizeClass;
@property (setter=_setInternalContentScrollView:, nonatomic, retain) UIScrollView *_internalContentScrollView;
@property (nonatomic, readonly) bool _isDimmingBackground;
@property (nonatomic, readonly) bool _isInSheetPresentation;
@property (nonatomic, readonly) bool _isModalSheet;
@property (nonatomic, readonly) bool _isPresentedFormSheet;
@property (nonatomic, readonly) UITraitCollection *_lastNotifiedTraitCollection;
@property (setter=_setLeftContentMargin:, nonatomic) double _leftContentMargin;
@property (nonatomic, readonly) NSString *_mapsui_viewLayoutMarginsDescription;
@property (setter=_setModalSourceViewController:, nonatomic) UIViewController *_modalSourceViewController;
@property (nonatomic, readonly) bool _monitorsSystemLayoutFittingSize;
@property (nonatomic, readonly) UIMultiColumnViewController *_multiColumnViewController;
@property (nonatomic, readonly) bool _navControllerIsLayingOutTopViewController;
@property (setter=_setNavigationControllerContentInsetAdjustment:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _navigationControllerContentInsetAdjustment;
@property (setter=_setNavigationControllerContentOffsetAdjustment:, nonatomic) double _navigationControllerContentOffsetAdjustment;
@property (nonatomic, readonly) UINavigationItem *_navigationItemCreatingDefaultIfNotSet;
@property (nonatomic) bool _nextResponderIgnoresWindowIfRootVC;
@property (nonatomic, readonly) NSMutableDictionary *_observableScrollViews;
@property (nonatomic, readonly) UIViewController *_parentModalViewController;
@property (nonatomic, readonly) UIViewController *_parentViewController;
@property (nonatomic, readonly) NSArray *_preferredContentSizes;
@property (setter=_setPresentationController:, nonatomic, retain) UIPresentationController *_presentationController;
@property (setter=_setPresentedStatusBarViewController:, nonatomic, retain) UIViewController *_presentedStatusBarViewController;
@property (setter=_setPresentedUserInterfaceStyleViewController:, nonatomic, retain) UIViewController *_presentedUserInterfaceStyleViewController;
@property (setter=_setPreviousFittingSizeInfo:, nonatomic, retain) NSDictionary *_previousFittingSizeInfo;
@property (setter=_setRequiresIgnoredContentScrollViewSizeWhileAppearingInNavigationStack:, nonatomic) bool _requiresIgnoredContentScrollViewSizeWhileAppearingInNavigationStack;
@property (setter=_setRightContentMargin:, nonatomic) double _rightContentMargin;
@property (setter=_setSegueResponsibleForModalPresentation:, nonatomic, retain) UIStoryboardSegue *_segueResponsibleForModalPresentation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _sf_bottomUnsafeAreaFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _sf_bottomUnsafeAreaFrameForToolbar;
@property (nonatomic, readonly) bool _sf_canEditFields;
@property (nonatomic, readonly) bool _sf_isMFMailComposeViewController;
@property (nonatomic, readonly) bool _sf_isPKAddPassesViewController;
@property (nonatomic, readonly) UIViewController *_sf_viewControllerToPresentFrom;
@property (setter=_setSourceViewControllerIfPresentedViaPopoverSegue:, nonatomic) UIViewController *_sourceViewControllerIfPresentedViaPopoverSegue;
@property (nonatomic, readonly, retain) NSLayoutConstraint *_topBarInsetGuideConstraint;
@property (setter=_setTransitioningOutWithoutDisappearing:, nonatomic) bool _transitioningOutWithoutDisappearing;
@property (nonatomic, readonly) bool _transitionsChildViewControllers;
@property (nonatomic, readonly) bool _useSheetRotation;
@property (nonatomic, readonly) long long _verticalSizeClass;
@property (nonatomic, readonly) bool _viewControllerIgnoresClippedGlyphPathFrame;
@property (nonatomic, readonly) bool _viewHostsLayoutEngineAllowsTAMIC_NO;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _viewSafeAreaInsetsFromScene;
@property (nonatomic, readonly) bool ab_isDirectlyInPopover;
@property (nonatomic, readonly) bool ab_isInPopover;
@property (nonatomic, readonly) bool ab_isInSheet;
@property (nonatomic, readonly) bool ab_shouldShowNavBarButtons;
@property (nonatomic, readonly) bool ab_shouldUseTransparentBackgroundInPopovers;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) _UIActionSheetPresentationController *actionSheetPresentationController;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalSafeAreaInsets;
@property (nonatomic, copy) id /* block */ afterAppearanceBlock;
@property (nonatomic, readonly) UIViewController *ak_topPresentedViewController;
@property (setter=ams_setBackgroundColor:, nonatomic, retain) UIColor *ams_backgroundColor;
@property (nonatomic, readonly) UIViewController *ams_frontmostController;
@property (nonatomic, readonly) UINavigationController *ams_navigationController;
@property (nonatomic, readonly) unsigned long long ams_navigationIndex;
@property (nonatomic, readonly) UIViewController *ams_navigationItemViewController;
@property (nonatomic, readonly) AMSUIWebContainerViewController *ams_parentContainer;
@property (nonatomic) bool appearanceTransitionsAreDisabled;
@property (nonatomic) bool areChildrenFocused;
@property (nonatomic, retain) UINavigationItem *as_navigationItem;
@property (nonatomic) bool automaticallyAdjustsScrollViewInsets;
@property (nonatomic) bool autoresizesArchivedViewToFullSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bannerContentOutsets;
@property (nonatomic, readonly, copy) BSAnimationSettings *bannerSizeTransitionAnimationSettings;
@property (getter=isBeingDismissed, nonatomic, readonly) bool beingDismissed;
@property (getter=isBeingPresented, nonatomic, readonly) bool beingPresented;
@property (nonatomic, readonly, retain) <UILayoutSupport><_UILayoutItem> *bottomLayoutGuide;
@property (nonatomic, readonly) unsigned long long cam_swizzled_supportedInterfaceOrientations;
@property (nonatomic) bool canDisplayBannerAds;
@property (nonatomic, readonly) bool ccui_shouldPropagateAppearanceCalls;
@property (nonatomic, retain) UIViewController *childModalViewController;
@property (nonatomic, readonly) UIViewController *childViewControllerForPreferredContainerBackgroundStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForUserInterfaceStyle;
@property (nonatomic, readonly) NSArray *childViewControllers;
@property (nonatomic, readonly) unsigned long long childViewControllersCount;
@property (readonly) UIBarButtonItem *composeFeedbackToolbarItem;
@property (nonatomic) double contentAlpha;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSizeForViewInPopover;
@property (nonatomic, copy) <UIContentConfiguration> *contentUnavailableConfiguration;
@property (nonatomic, readonly) UIContentUnavailableConfigurationState *contentUnavailableConfigurationState;
@property (nonatomic) long long contentVisibility;
@property (nonatomic) double customNavigationInteractiveTransitionDuration;
@property (nonatomic) double customNavigationInteractiveTransitionPercentComplete;
@property (nonatomic, retain) UITransitionView *customTransitioningView;
@property (nonatomic, readonly) bool dc_isRTL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool definesPresentationContext;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *deviceInformationView;
@property (nonatomic, readonly) bool disablesAutomaticKeyboardDismissal;
@property (getter=isDisplayingBannerAd, nonatomic, readonly) bool displayingBannerAd;
@property (nonatomic, readonly) long long doc_deprecated_interfaceOrientation;
@property (nonatomic, readonly) bool doc_hasAppeared;
@property (nonatomic, readonly) bool doc_hasAppearedOrIsAppearing;
@property (nonatomic, readonly) bool doc_hasDisappeared;
@property (nonatomic, readonly) bool doc_hasDisappearedOrIsDisappearing;
@property (nonatomic, readonly) bool doc_isAppearing;
@property (nonatomic, readonly) bool doc_isDisappearing;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } documentBounds;
@property (nonatomic, retain) UIDropShadowView *dropShadowView;
@property (nonatomic) unsigned long long edgesForExtendedLayout;
@property (readonly) DOCAppearance *effectiveAppearance;
@property (nonatomic, retain) UITraitCollection *ekui_futureTraitCollection;
@property (nonatomic, readonly) void*ekui_futureTraitCollectionCategoryPropertyKey;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (getter=_isEligibleForFocusOcclusion, nonatomic, readonly) bool eligibleForFocusOcclusion;
@property (nonatomic, readonly) UIViewController *emptyViewWithSpinner;
@property (nonatomic, readonly) PLExpandedPlatterPresentationController *expandedPlatterPresentationController;
@property (nonatomic) bool extendedLayoutIncludesOpaqueBars;
@property (nonatomic, readonly) NSExtensionContext *extensionContext;
@property (setter=_setExtensionContextUUID:, nonatomic, retain) NSUUID *extensionContextUUID;
@property (getter=_fbsDisplayConfiguration, nonatomic, readonly) FBSDisplayConfiguration *fbsDisplayConfiguration;
@property (getter=_fbsDisplayIdentity, nonatomic, readonly) FBSDisplayIdentity *fbsDisplayIdentity;
@property (getter=isFinishingModalTransition, nonatomic) bool finishingModalTransition;
@property (getter=_focusBehavior, nonatomic, readonly) <_UIFocusBehavior> *focusBehavior;
@property (nonatomic, copy) NSString *focusGroupIdentifier;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (getter=_focusMapContainer, nonatomic, readonly) <_UIFocusRegionContainer> *focusMapContainer;
@property (getter=_focusSystem, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (getter=_focusSystemSceneComponent, nonatomic, readonly) _UIFocusSystemSceneComponent *focusSystemSceneComponent;
@property (nonatomic, readonly) UIViewController *frontmostViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesBottomBarWhenPushed;
@property (nonatomic, readonly) HFItem *hu_presentedItem;
@property (nonatomic, readonly) HFItem *hu_topmostPresentedItem;
@property (nonatomic, readonly) bool ic_hasFullScreenModalPresentationStyle;
@property (nonatomic, readonly) bool ic_isBeingRevealedFromPoppingViewController;
@property (nonatomic, readonly) bool ic_isRTL;
@property (nonatomic, readonly) UINavigationController *ic_rootNavigationController;
@property (nonatomic, readonly) double ic_safeAreaDistanceFromBottom;
@property (nonatomic, readonly) double ic_safeAreaDistanceFromTop;
@property (nonatomic, readonly) UILayoutGuide *ic_safeAreaLayoutGuide;
@property (nonatomic, readonly) ICViewControllerManager *ic_viewControllerManager;
@property (nonatomic, readonly) UIWindowScene *ic_windowScene;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool ignoresParentMargins;
@property (getter=isInAnimatedVCTransition, nonatomic) bool inAnimatedVCTransition;
@property (nonatomic, readonly) bool inExplicitAppearanceTransition;
@property (getter=isInWillRotateCallback, nonatomic) bool inWillRotateCallback;
@property (nonatomic, retain) UIButton *infoButton;
@property (nonatomic, copy) NSString *interactionActivityTrackingBaseName;
@property (nonatomic) long long interstitialPresentationPolicy;
@property (nonatomic, readonly) bool isPresentedInsidePopover;
@property (nonatomic, readonly) bool isSettingAppearState;
@property (nonatomic) long long juLayoutDirection;
@property (nonatomic) long long layoutDirection;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (nonatomic) <IMMetricsDataSource> *metricDataSource;
@property (nonatomic, retain) NSDictionary *metricsAdditionalData;
@property (nonatomic, retain) id metricsContentIdentifier;
@property (nonatomic) bool metricsEnabled;
@property (nonatomic, retain) NSString *metricsName;
@property (nonatomic, readonly) <MKInfoCardTheme> *mk_theme;
@property (nonatomic) bool modalInPopover;
@property (nonatomic) bool modalPresentationCapturesStatusBarAppearance;
@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic) long long modalTransitionStyle;
@property (nonatomic, readonly) UIViewController *modalViewController;
@property (getter=isMovingFromParentViewController, nonatomic, readonly) bool movingFromParentViewController;
@property (getter=isMovingToParentViewController, nonatomic, readonly) bool movingToParentViewController;
@property (nonatomic, retain) NSMutableArray *mutableChildViewControllers;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, retain) UINavigationContentAdjustments *navigationInsetAdjustment;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (setter=setNCTransitionAnimationState:, nonatomic) long long ncTransitionAnimationState;
@property (nonatomic) bool needsDidMoveCleanup;
@property (nonatomic, retain) NSBundle *nibBundle;
@property (nonatomic, copy) NSString *nibName;
@property (nonatomic, readonly) id originalContentView;
@property (getter=_originalPresentationController, setter=_setOriginalPresentationController:, nonatomic, retain) UIPresentationController *originalPresentationController;
@property (nonatomic, retain) UITraitCollection *overrideTraitCollection;
@property (getter=_overrideTransitioningDelegate, setter=_setOverrideTransitioningDelegate:, nonatomic, retain) <UIViewControllerTransitioningDelegate> *overrideTransitioningDelegate;
@property (getter=_overrideUseCustomPresentation, setter=_setOverrideUseCustomPresentation:, nonatomic) bool overrideUseCustomPresentation;
@property (nonatomic) long long overrideUserInterfaceStyle;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic) UIViewController *parentModalViewController;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, readonly) <PBFDisplayContext> *pbf_displayContext;
@property (nonatomic, readonly) long long pbf_layoutOrientation;
@property (nonatomic, readonly) bool performsActionsWhilePresentingModally;
@property (nonatomic, readonly) bool pl_isInPopover;
@property (nonatomic, readonly) UIViewController *ppt_containedViewController;
@property (nonatomic, readonly) long long preferredAlertStyle;
@property (nonatomic, readonly) long long preferredContainerBackgroundStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic) UIView *preferredFocusedItem;
@property (nonatomic) UIView *preferredFocusedView;
@property (getter=_preferredStatusBarHideAnimationParameters, nonatomic, readonly) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (getter=_preferredStatusBarStyleAnimationParameters, nonatomic, readonly) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) long long preferredUserInterfaceStyle;
@property (nonatomic, readonly) bool prefersStatusBarHidden;
@property (getter=_presentationSizeClassPair, setter=_setPresentationSizeClassPair:, nonatomic) struct { long long x1; long long x2; } presentationSizeClassPair;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (getter=_presentingFocusedItem, setter=_setPresentingFocusedItem:, nonatomic) <UIFocusItem> *presentingFocusedItem;
@property (getter=isPresentingFullScreenAd, nonatomic, readonly) bool presentingFullScreenAd;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, copy) NSArray *previewActionItems;
@property (nonatomic, readonly) NSArray *previewActionItems;
@property (nonatomic) bool providesPresentationContextTransitionStyle;
@property (nonatomic, readonly) PUModalTransition *pu_currentInteractiveModalTransition;
@property (nonatomic, readonly) PUNavigationTransition *pu_currentInteractiveNavigationTransition;
@property (nonatomic, readonly) <PUDisplayAsset> *pu_debugCurrentAsset;
@property (nonatomic, readonly) PXContentPrivacyController *pu_debugCurrentPrivacyController;
@property (nonatomic, readonly) PUViewModel *pu_debugCurrentViewModel;
@property (nonatomic, readonly) <NSFastEnumeration> *pu_debugCurrentlySelectedAssets;
@property (setter=pu_debugSetTransient:, nonatomic) bool pu_debugIsTransient;
@property (nonatomic, readonly) bool pu_isPresenting;
@property (setter=pu_setModalTransition:, nonatomic, retain) PUModalTransition *pu_modalTransition;
@property (nonatomic, readonly) UIColor *pu_navigationBarTintColor;
@property (setter=pu_setNavigationTransition:, nonatomic, retain) PUNavigationTransition *pu_navigationTransition;
@property (nonatomic, readonly) long long pu_preferredBarStyle;
@property (nonatomic, readonly) long long pu_preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) bool pu_shouldActAsTabRootViewController;
@property (nonatomic, readonly) bool pu_shouldOptOutFromChromelessBars;
@property (nonatomic, readonly) PUToolbarViewModel *pu_toolbarViewModel;
@property (nonatomic, readonly) bool pu_wantsNavigationBarVisible;
@property (nonatomic, readonly) bool pu_wantsTabBarVisible;
@property (nonatomic, readonly) bool pu_wantsToolbarVisible;
@property (nonatomic, readonly) double px_HDRFocus;
@property (nonatomic, readonly) bool px_allowsTabSwitching;
@property (nonatomic, readonly) PXBarAppearance *px_barAppearance;
@property (nonatomic, readonly) NSArray *px_childViewControllersForModalInPresentation;
@property (nonatomic, readonly) bool px_containsViewControllerModalInPresentation;
@property (getter=px_isDelayingPresentation, nonatomic, readonly) bool px_delayingPresentation;
@property (nonatomic, readonly) bool px_determinesPreferredStatusBarHidden;
@property (nonatomic, readonly) bool px_determinesPreferredStatusBarStyle;
@property (nonatomic, readonly) double px_effectiveHDRFocus;
@property (nonatomic, readonly) double px_effectiveImageModulationIntensity;
@property (nonatomic, readonly) PXExtendedTraitCollection *px_extendedTraitCollection;
@property (getter=px_isImageModulationEnabled, setter=px_setImageModulationEnabled:, nonatomic) bool px_imageModulationEnabled;
@property (nonatomic, readonly) double px_imageModulationIntensity;
@property (nonatomic, readonly) PXImageModulationManager *px_imageModulationManager;
@property (setter=px_setModalInPresentation:, nonatomic) bool px_isModalInPresentation;
@property (nonatomic, readonly) bool px_isVisible;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } px_layoutMargins;
@property (nonatomic, readonly) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (nonatomic, readonly) UIViewController *px_nextViewControllerInNavigationController;
@property (nonatomic, readonly) PXOneUpPresentation *px_oneUpPresentation;
@property (setter=px_setOneUpPresentationStyle:, nonatomic) long long px_oneUpPresentationStyle;
@property (setter=px_setPreviewActionMenus:, nonatomic, retain) NSArray *px_previewActionMenus;
@property (nonatomic, readonly) UIViewController *px_previousViewControllerInNavigationController;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } px_referenceSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } px_safeAreaInsets;
@property (setter=px_setSubtitle:, nonatomic, copy) NSString *px_subtitle;
@property (nonatomic, readonly) UIViewController *px_topmostPresentedViewController;
@property (getter=px_isVisible, nonatomic, readonly) bool px_visible;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } px_windowReferenceSize;
@property (nonatomic, readonly) HKHealthStore *resolvedHealthStore;
@property (nonatomic, readonly) HBXViewControllerFactory *resolvedHealthToolbox;
@property (nonatomic) bool restoresFocusAfterTransition;
@property (nonatomic, readonly) bool safari_isPresentedByActivityViewController;
@property (nonatomic, readonly) bool safari_prefersHalfHeightSheetPresentationWithLoweredBar;
@property (nonatomic, readonly) _UISheetPresentationController *safari_sheetPresentationController;
@property (nonatomic, readonly) bool safari_wantsDoneButtonInModalBookmarksPanel;
@property (nonatomic, readonly) bool safari_wantsTransparentApplicationBackground;
@property (nonatomic, readonly) UIView *savedHeaderSuperview;
@property (getter=_sbDisplayConfiguration, nonatomic, readonly) FBSDisplayConfiguration *sbDisplayConfiguration;
@property (getter=_sbWindowScene, nonatomic, readonly) SBWindowScene *sbWindowScene;
@property (nonatomic, readonly) SKUIScrollingSegmentedController *scrollingSegmentedController;
@property (nonatomic, readonly) SUUIScrollingSegmentedController *scrollingSegmentedController;
@property (nonatomic, readonly) SKUIScrollingTabBarController *scrollingTabBarController;
@property (nonatomic, readonly) SUUIScrollingTabBarController *scrollingTabBarController;
@property (nonatomic) bool searchBarHidNavBar;
@property (nonatomic, retain) UISearchDisplayController *searchDisplayController;
@property (nonatomic, readonly) bool shouldAutomaticallyForwardAppearanceMethods;
@property (nonatomic, readonly) bool shouldInvalidateForMemoryPurge;
@property (nonatomic, readonly) bool shouldPresentInterstitialAd;
@property (getter=isSkLoaded, nonatomic, readonly) bool skLoaded;
@property (getter=isSkLoading, nonatomic, readonly) bool skLoading;
@property (readonly) FMSlidingPaneViewController *slidingPaneViewController;
@property (nonatomic, readonly) UISplitViewController *splitViewController;
@property (nonatomic, retain) SUStorePageProtocol *storePageProtocol;
@property (setter=_setStoryboard:, nonatomic, retain) UIStoryboard *storyboard;
@property (nonatomic, readonly) NSArray *storyboardCommitSegueTemplates;
@property (nonatomic, readonly) NSArray *storyboardPreviewSegueTemplates;
@property (nonatomic, readonly) NSArray *storyboardPreviewingRegistrants;
@property (nonatomic, readonly) NSArray *storyboardSegueTemplates;
@property (nonatomic, readonly) bool su_isAppeared;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } systemMinimumLayoutMargins;
@property (nonatomic, readonly) UITabBarController *tabBarController;
@property (nonatomic, retain) UITabBarItem *tabBarItem;
@property (nonatomic, retain) UIScrollView *tabBarObservedScrollView;
@property (getter=_temporaryPresentationController, setter=_setTemporaryPresentationController:, nonatomic, retain) UIPresentationController *temporaryPresentationController;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) TMLContext *tmlContext;
@property (nonatomic, copy) NSDictionary *tmlObjects;
@property (nonatomic, readonly) NSString *tmlViewPath;
@property (nonatomic, readonly, retain) <UILayoutSupport><_UILayoutItem> *topLayoutGuide;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) <UITraitOverrides> *traitOverrides;
@property (nonatomic) <UIViewControllerTransitioningDelegate> *transitioningDelegate;
@property (nonatomic, readonly) UIViewController *ts_parentVC;
@property (nonatomic, readonly) TSTransitionContainerViewController *ts_transitionContainerViewController;
@property (nonatomic, readonly, copy) NSString *ttr_unavailableSearchResultsText;
@property (setter=tv_setIdentifier:, nonatomic, copy) NSString *tvIdentifier;
@property (nonatomic, retain) UIView *view;
@property (nonatomic, readonly) SUViewControllerFactory *viewControllerFactory;
@property (nonatomic, readonly) UIView *viewIfLoaded;
@property (getter=isViewLoaded, nonatomic, readonly) bool viewLoaded;
@property (nonatomic, readonly) unsigned long long viewingLocation;
@property (nonatomic, readonly) UIView *vk_viewIfLoaded;
@property (nonatomic) bool vuiAutomaticallyAdjustsScrollViewInsets;
@property (getter=vuiIsBeingDismissed, nonatomic, readonly) bool vuiBeingDismissed;
@property (getter=vuiIsBeingPresented, nonatomic, readonly) bool vuiBeingPresented;
@property (nonatomic, readonly) NSArray *vuiChildViewControllers;
@property (nonatomic, readonly) bool vuiIsNavigationRoot;
@property (nonatomic, readonly) bool vuiIsRTL;
@property (getter=vuiIsModalInPresentation, nonatomic) bool vuiModalInPresentation;
@property (nonatomic) bool vuiModalPresentationCapturesStatusBarAppearance;
@property (nonatomic) long long vuiModalPresentationStyle;
@property (getter=vuiIsMovingFromParentViewController, nonatomic, readonly) bool vuiMovingFromParentViewController;
@property (getter=vuiIsMovingToParentViewController, nonatomic, readonly) bool vuiMovingToParentViewController;
@property (nonatomic, readonly) UINavigationController *vuiNavigationController;
@property (nonatomic, readonly) UINavigationItem *vuiNavigationItem;
@property (nonatomic, readonly) unsigned long long vuiOverrideUserInterfaceStyle;
@property (getter=vuiPPTIsLoading, nonatomic, readonly) bool vuiPPTLoading;
@property (nonatomic, readonly) UIViewController *vuiParentViewController;
@property (nonatomic) struct CGSize { double x1; double x2; } vuiPreferredContentSize;
@property (nonatomic, readonly) UIPresentationController *vuiPresentationController;
@property (nonatomic, readonly) UIViewController *vuiPresentedViewController;
@property (nonatomic, readonly) UIViewController *vuiPresentingViewController;
@property (nonatomic, readonly) bool vuiShouldAutomaticallyForwardAppearanceMethods;
@property (nonatomic, readonly) UITabBarController *vuiTabBarController;
@property (nonatomic, retain) UITabBarItem *vuiTabBarItem;
@property (nonatomic, retain) UIScrollView *vuiTabBarObservedScrollView;
@property (nonatomic, copy) NSString *vuiTitle;
@property (nonatomic, readonly) UITraitCollection *vuiTraitCollection;
@property (nonatomic) <UIViewControllerTransitioningDelegate> *vuiTransitioningDelegate;
@property (nonatomic, readonly) unsigned long long vuiUserInterfaceStyle;
@property (nonatomic, retain) UIView *vuiView;
@property (nonatomic, copy) NSString *vuiViewControllerIdentifier;
@property (getter=vuiIsViewLoaded, nonatomic, readonly) bool vuiViewLoaded;
@property (getter=vui_ppt_isLoading, nonatomic, readonly) bool vui_ppt_loading;
@property (nonatomic) bool vui_requiresLegacyPresentation;
@property (nonatomic) bool wantsFullScreenLayout;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } wf_contentLayoutMargins;
@property (nonatomic, readonly) WFDrawerController *wf_drawerController;
@property (nonatomic, readonly) WFDrawerItem *wf_drawerItem;
@property (getter=_window, nonatomic, readonly) UIWindow *window;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)XPCInterface;
+ (id)_allDescriptions;
+ (bool)_allViewControllersInArray:(id)arg1 allowAutorotationToInterfaceOrientation:(long long)arg2 predicate:(id /* block */)arg3;
+ (double)_boundsWidthWithMinimumHorizontalContentMarginForView:(id)arg1 preservingContentWidth:(double)arg2;
+ (bool)_directlySetsContentOverlayInsetsForChildren;
+ (bool)_doesOverrideLegacyShouldAutorotateMethod;
+ (id)_exportedInterface;
+ (double)_horizontalContentMarginForView:(id)arg1;
+ (double)_horizontalContentMarginForView:(id)arg1 ofWidth:(double)arg2;
+ (bool)_initializedByViewServices;
+ (bool)_isSecureForRemoteViewService;
+ (bool)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2;
+ (bool)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2 ignoreInWindowCheck:(bool)arg3;
+ (int)_keyboardDirectionForTransition:(int)arg1;
+ (void)_performWithoutDeferringTransitions:(id /* block */)arg1;
+ (bool)_preventsAppearanceProxyCustomization;
+ (id)_printHierarchy;
+ (id)_remoteViewControllerInterface;
+ (id)_safeAreaInsetsTrace;
+ (void)_scheduleTransition:(id /* block */)arg1;
+ (void)_setShouldDeferTransitions:(bool)arg1;
+ (bool)_shouldAnimateTransitions;
+ (bool)_shouldDeferTransitions;
+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)_shouldRememberFocusForDismissal;
+ (bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (bool)_shouldUseLegacyUnwindDestinationSearch;
+ (double)_slimHorizontalContentMargin;
+ (id)_traitCollectionWithParentTraitCollection:(id)arg1 overrideTraitCollection:(id)arg2;
+ (void)_traverseViewControllerHierarchy:(id /* block */)arg1;
+ (void)_traverseViewControllerHierarchyWithDelayedRelease:(id /* block */)arg1;
+ (id)_viewControllerForFullScreenPresentationFromView:(id)arg1;
+ (bool)_wantsContentOverlayInsetsUpdatesWhileDismissing;
+ (id)_whitelistOfSubclassableViewControllersMarkedSafe;
+ (void)_withDisabledAppearanceTransitions:(bool)arg1 forDescendantsOf:(id)arg2 visibleOnly:(bool)arg3 perform:(id /* block */)arg4;
+ (void)_withDisabledAppearanceTransitionsForVisibleDescendantsOf:(id)arg1 perform:(id /* block */)arg2;
+ (void)attemptRotationToDeviceOrientation;
+ (struct CGSize { double x1; double x2; })defaultFormSheetSize;
+ (struct CGSize { double x1; double x2; })defaultFormSheetSizeForScreenSize:(struct CGSize { double x1; double x2; })arg1;
+ (bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (bool)doesOverrideViewControllerMethod:(SEL)arg1;
+ (bool)doesOverrideViewControllerMethod:(SEL)arg1 inBaseClass:(Class)arg2;
+ (double)durationForTransition:(int)arg1;
+ (void)initialize;
+ (void)removeViewControllerForView:(id)arg1;
+ (void)setViewController:(id)arg1 forView:(id)arg2;
+ (id)viewControllerForView:(id)arg1;

- (void).cxx_destruct;
- (bool)__isKindOfUIViewController;
- (bool)__knownPresentationWithoutPresentationControllerInstance;
- (id)__potentialOverridingFocusEnvironments;
- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)arg1;
- (struct { long long x1; long long x2; })__sizeClassPair;
- (unsigned long long)__supportedInterfaceOrientations;
- (void)__viewControllerWillBePresented:(bool)arg1;
- (void)__viewDidAppear:(bool)arg1;
- (void)__viewWillAppear:(bool)arg1;
- (void)__willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (id)_activityContinuationSuitableToBecomeCurrent;
- (id)_adaptedPresentationControllerForTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_addChildViewController:(id)arg1;
- (void)_addChildViewController:(id)arg1 notifyWillMove:(bool)arg2;
- (void)_addChildViewController:(id)arg1 performHierarchyCheck:(bool)arg2 notifyWillMove:(bool)arg3;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (bool)_allowNestedNavigationControllers;
- (bool)_allowsAutorotation;
- (bool)_allowsFreezeLayoutForOrientationChangeOnDismissal;
- (bool)_allowsSkippingLayout;
- (bool)_allowsStylingSheetsAsCards;
- (bool)_allowsUserInteractionWhenPreviewedInContextMenu;
- (bool)_ancestorViewControllerIsInPopover;
- (id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (int)_appearState;
- (id)_appearanceContainer;
- (id)_appearanceGuideClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_avoidanceInsets;
- (id)_backdropBarGroupName;
- (id)_backgroundColorForModalFormSheet;
- (void)_beginAppearanceTransitionToViewController:(id)arg1 animated:(bool)arg2;
- (void)_beginDelayingPresentation;
- (void)_beginDelayingPresentation:(double)arg1 cancellationHandler:(id /* block */)arg2;
- (void)_beginDisablingInterfaceAutorotation;
- (id)_bottomBarInsetGuideConstraint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForOrientation:(long long)arg1;
- (id)_bridgedContentUnavailableConfigurationState;
- (void)_bridgedUpdateContentUnavailableConfigurationUsingState:(id)arg1;
- (bool)_canBecomeDeepestUnambiguousResponder;
- (bool)_canBecomeFirstResponder;
- (bool)_canPerformUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 sender:(id)arg3;
- (bool)_canReloadView;
- (bool)_canResignIfContainsFirstResponder;
- (bool)_canRestoreFocusAfterTransitionToItem:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_cancelDelayedPresentation:(bool)arg1;
- (double)_canvasSystemMinimumMargin;
- (struct CGPoint { double x1; double x2; })_centerForOrientation:(long long)arg1;
- (id)_childControllerToIgnoreWhileLookingForTransitionCoordinator;
- (id)_childViewControllerForAlwaysOnTimelines;
- (id)_childViewControllerForExclusiveCollectionPhysicalButtonConfigurations;
- (id)_childViewControllerForMultitaskingDragExclusionRects;
- (id)_childViewControllerForWhitePointAdaptivityStyle;
- (void)_childViewControllerWillBePresentedFromViewControllerDelayingPresentationWithPresenter:(id)arg1;
- (id)_childViewControllersEligibleForOverridingPreferredFocusEnvironments;
- (id)_childViewControllersForAlwaysOnTimelines;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (void)_cleanupPresentation;
- (void)_clearCachedPopoverContentSize;
- (void)_clearRecordedContentScrollView;
- (void)_collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id /* block */)_completionBlock;
- (void)_containingAlertControllerDidChangeVisualStyle:(id)arg1;
- (bool)_containsFirstResponder;
- (double)_contentMargin;
- (double)_contentMarginForChildViewController:(id)arg1;
- (double)_contentMarginForView:(id)arg1;
- (id)_contentOrObservableScrollViewForEdge:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentOverlayInsets;
- (id)_contentScrollView;
- (id)_contentUnavailableConfiguration;
- (id)_contentUnavailableConfigurationState;
- (id)_contentUnavailableWrapperView;
- (struct { struct UIEdgeInsets { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })_cumulativeOverlayInsetsInView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_customBasePresentationInsetsForView:(id)arg1;
- (id)_customChildViewControllerSelectorsNames;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (SEL)_customSelectorToCreateChildViewControllerAtIndex:(long long)arg1;
- (id /* block */)_decodeRestorableStateAndReturnContinuationWithCoder:(id)arg1;
- (id)_deepestActionResponder;
- (id)_deepestPresentedActionResponderOrBlock:(id /* block */)arg1;
- (id)_defaultAnimationController;
- (id)_defaultContentScrollViewForEdge:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultInitialViewFrame;
- (bool)_defersToPresentingViewControllerForSupportedInterfaceOrientations;
- (id)_definiteTransitionCoordinator;
- (id)_departingParentViewController;
- (id)_description;
- (id)_descriptionWithChildren:(int)arg1;
- (id)_destinationForUnwindingFromSource:(id)arg1 visitedViewControllers:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_devicePeripheryInsets;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didCancelDismissTransition:(id)arg1;
- (void)_didCancelPresentTransition:(id)arg1;
- (void)_didEndCounterRotationForPresentation;
- (void)_didEnterAlwaysOn;
- (void)_didExitAlwaysOn;
- (void)_didFinishDismissTransition;
- (void)_didFinishPresentTransition;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(long long)arg1 forwardToChildControllers:(bool)arg2 skipSelf:(bool)arg3;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_dismissAccessibilityHUD;
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(id /* block */)arg3;
- (bool)_displaysFullScreen;
- (void)_eagerlyUpdateSafeAreaInsetsToViewDescendant:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (id)_effectiveContentScrollViews;
- (id)_effectiveControllersForAlwaysOnTimelines;
- (id)_effectiveExclusiveCollectionPhysicalButtonConfigurationViewController;
- (id)_effectiveHomeIndicatorAutoHiddenViewController;
- (id)_effectiveInteractionActivityTrackingBaseName;
- (id)_effectivePointerLockViewController;
- (id)_effectiveScreenEdgesDeferringSystemGesturesViewController;
- (id)_effectiveStatusBarHiddenViewController;
- (id)_effectiveStatusBarStyleViewController;
- (id)_effectiveUserInterfaceStyleViewController;
- (id)_effectiveViewControllerForMultitaskingDragExclusionRects;
- (id)_effectiveWhitePointAdaptivityStyleViewController;
- (void)_embedContentViewInView:(id)arg1 withContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 delegate:(id)arg3;
- (id)_embeddedDelegate;
- (id)_embeddedView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_embeddedViewFrame;
- (id)_embeddingView;
- (void)_endAppearanceTransitionToViewController:(id)arg1;
- (void)_endDelayingPresentation;
- (void)_endDisablingInterfaceAutorotation;
- (void)_enumerateAncestorViewControllersUntilStop:(bool*)arg1 usingBlock:(id /* block */)arg2;
- (void)_executeAfterAppearanceBlock;
- (id)_existingNavigationItem;
- (id)_existingPresentationControllerImmediate:(bool)arg1 effective:(bool)arg2;
- (id)_existingPresentationControllerImmediate:(bool)arg1 effective:(bool)arg2 includesRoot:(bool)arg3;
- (id)_existingTabBarItem;
- (id)_existingView;
- (id)_expectedWindow;
- (id)_extensionContextUUID;
- (void*)_fallbackTraitCollection;
- (id)_firstResponder;
- (id)_focusBehavior;
- (id)_focusMapContainer;
- (id)_focusSystem;
- (id)_focusSystemSceneComponent;
- (bool)_formSheetObeysContentContainerSize;
- (struct CGSize { double x1; double x2; })_formSheetSizeForWindowWithSize:(struct CGSize { double x1; double x2; })arg1 screenSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)_forwardAppearanceMethods;
- (bool)_forwardRotationMethods;
- (bool)_freezeLayoutForOrientationChangeOnDismissal;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (bool)_hackFor11408026_beginAppearanceTransition:(bool)arg1 animated:(bool)arg2;
- (bool)_hackFor11408026_endAppearanceTransition;
- (void)_handleTapToDismissModalCurl:(id)arg1;
- (bool)_handlesCounterRotationForPresentation;
- (bool)_hasAppeared;
- (bool)_hasDeepestActionResponder;
- (bool)_hasDeepestPresentedActionResponderOrBlock:(id /* block */)arg1;
- (bool)_hasPreferredInterfaceOrientationForPresentation;
- (long long)_horizontalSizeClass;
- (id)_hostApplicationBundleIdentifier;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (struct { unsigned int x1[8]; })_hostAuditToken;
- (int)_hostProcessIdentifier;
- (id)_hostedWindowScene;
- (bool)_ignoreAppSupportedOrientations;
- (bool)_ignoresWrapperViewForContentOverlayInsets;
- (long long)_imagePickerStatusBarStyle;
- (id)_independentContainedScrollViewIntermediateToDescendantViewController:(id)arg1;
- (id)_internalContentScrollView;
- (bool)_isContainmentChanging;
- (bool)_isDelayingPresentation;
- (bool)_isDetachedFromWindowRootViewControllerHierarchy;
- (bool)_isDimmingBackground;
- (bool)_isHostedRootViewController;
- (bool)_isInContextOfPresentationControllerOfClass:(Class)arg1 effective:(bool)arg2;
- (bool)_isInCustomTransition;
- (bool)_isInPopoverPresentation;
- (bool)_isInSheetPresentation;
- (bool)_isInViewControllerThatHandlesKeyboardAvoidance;
- (bool)_isInterfaceAutorotationDisabled;
- (bool)_isMemberOfViewControllerHierarchy:(id)arg1;
- (bool)_isModalSheet;
- (bool)_isNavigationController;
- (bool)_isNestedNavigationController;
- (bool)_isPresentationContextByDefault;
- (bool)_isPresentedFormSheet;
- (bool)_isRootViewController;
- (bool)_isSearchController;
- (bool)_isSplitViewController;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (bool)_isTVSearchControllerContainer;
- (bool)_isTabBarController;
- (bool)_isViewController;
- (bool)_isViewControllerForObservableScrollViewAmbiguous;
- (bool)_isViewControllerInWindowHierarchy;
- (id)_keyCommands;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (long long)_lastKnownInterfaceOrientation;
- (id)_lastNavigationItems;
- (id)_lastNotifiedTraitCollection;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (double)_leftContentMargin;
- (void)_legacyModalPresentTransitionDidComplete;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (bool)_mayForwardPresentationsToPresentedViewController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_minimumLayoutMarginsForView;
- (id)_modalSourceViewController;
- (bool)_monitorsSystemLayoutFittingSize;
- (id)_moreListTitle;
- (id)_multiColumnViewController;
- (id)_multitaskingDragExclusionRects;
- (bool)_navControllerIsLayingOutTopViewController;
- (id)_navControllerToCreateManagedSearchPaletteForNavController:(id)arg1;
- (id)_navigationBarForDragAffordance;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_navigationControllerContentInsetAdjustment;
- (double)_navigationControllerContentOffsetAdjustment;
- (id)_navigationItemCreatingDefaultIfNotSet;
- (bool)_nextResponderIgnoresWindowIfRootVC;
- (id)_nextResponderUsingTargetActionStrategyFromChildViewController:(id)arg1 didTraverseToParentViewController:(bool*)arg2;
- (id)_nextResponderUsingTraversalStrategy:(unsigned long long)arg1;
- (id)_nextViewController;
- (id)_nextViewControllerForUnwindSegueSearch;
- (id)_nonModalAncestorViewController;
- (id)_nonModalAncestorViewControllerStopAtIsPresentationContext:(bool)arg1;
- (id)_nonPresentationAppearanceContainer;
- (void)_objc_initiateDealloc;
- (void)_observableScrollViewDidChangeFrom:(id)arg1 forViewController:(id)arg2 edges:(unsigned long long)arg3;
- (id)_observableScrollViewForEdges:(unsigned long long)arg1;
- (id)_observableScrollViews;
- (void)_observeScrollView:(id)arg1 temporaryCoordinatingReplacementDidChange:(id)arg2;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (bool)_optsOutOfPopoverControllerHierarchyCheck;
- (id)_orientationDebugDescription;
- (id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_orientationDebugDescriptionWithMultilinePrefix:(id)arg1;
- (id)_originalPresentationController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_overlayInsetsAdjustment;
- (long long)_overrideHorizontalSizeClass;
- (long long)_overrideInterfaceOrientationMechanics;
- (id)_overrideTraitCollectionToPassDuringTraitChangeToChildViewController:(id)arg1;
- (id)_overrideTransitioningDelegate;
- (bool)_overrideUseCustomPresentation;
- (long long)_overrideUserInterfaceRenderingMode;
- (id)_overridingPreferredFocusEnvironment;
- (void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)_parentContentContainer;
- (id)_parentModalViewController;
- (id)_parentTraitEnvironment;
- (id)_parentViewController;
- (id)_popoverController;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (id)_preferredContentSizes;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1;
- (long long)_preferredModalPresentationStyle;
- (id)_preferredStatusBarHideAnimationParameters;
- (id)_preferredStatusBarStyleAnimationParameters;
- (int)_preferredStatusBarVisibility;
- (long long)_preferredWhitePointAdaptivityStyle;
- (bool)_prefersFocusContainment;
- (void)_prepareForContainerTransition:(id)arg1;
- (void)_prepareForNavigationTransition:(bool)arg1;
- (void)_prepareForNestedDisplayWithNavigationController:(id)arg1;
- (void)_prepareForNormalDisplayWithNavigationController:(id)arg1;
- (void)_prepareForTapGesture:(id)arg1;
- (void)_preparePresentationControllerForPresenting:(id)arg1;
- (void)_presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(id /* block */)arg6;
- (void)_presentViewController:(id)arg1 withAnimationController:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentViewControllerForStateRestoration:(id)arg1 animated:(bool)arg2;
- (id)_presentationController;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (id)_presentationControllerClassName;
- (void)_presentationControllerDidDismiss:(id)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_presentationControllerWillDismiss:(id)arg1;
- (struct { long long x1; long long x2; })_presentationSizeClassPair;
- (id)_presentedStatusBarViewController;
- (id)_presentedUserInterfaceStyleViewController;
- (id)_presentingFocusedItem;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerIsChanging:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (id)_previousFittingSizeInfo;
- (void)_primitiveSetNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_primitiveSetNavigationControllerContentOffsetAdjustment:(double)arg1;
- (id)_printHierarchy;
- (bool)_providesCustomBasePresentationInsets;
- (bool)_reallyWantsFullScreenLayout;
- (void)_recordContentScrollView;
- (id)_registerForTraitTokenChanges:(id)arg1 withHandler:(id /* block */)arg2;
- (id)_registerForTraitTokenChanges:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (void)_rememberPresentingFocusedItem:(id)arg1;
- (id)_remoteViewControllerProxy;
- (id)_remoteViewControllerProxyWithErrorHandler:(id /* block */)arg1;
- (void)_removeChildViewController:(id)arg1;
- (void)_replaceViewControllerInPresentationHierarchy:(id)arg1;
- (bool)_requiresCustomPresentationController;
- (bool)_requiresIgnoredContentScrollViewSizeWhileAppearingInNavigationStack;
- (struct CGSize { double x1; double x2; })_resolvedPreferredContentSize;
- (id)_restorationClassName;
- (void)_restoreInputViewsForPresentation;
- (double)_rightContentMargin;
- (id)_rootAncestorViewController;
- (long long)_rotaryFocusMovementAxis;
- (long long)_rotatingFromInterfaceOrientation;
- (long long)_rotatingToInterfaceOrientation;
- (void)_safeAreaInsetsDidChangeForView;
- (id)_safeAreaInsetsTrace;
- (id)_safePrimaryViewControllerForAutorotationBelowWindow:(id)arg1;
- (id)_safeViewControllerForRotationWithDismissCheck:(bool)arg1;
- (id)_safeViewControllerForSupportedInterfaceOrientationsWithDismissCheck:(bool)arg1;
- (id)_safeWindowForAutorotationBelowWindow:(id)arg1;
- (void)_sceneSettingsSafeAreaInsetsDidChangeForWindow:(id)arg1;
- (id)_screen;
- (id)_segueResponsibleForModalPresentation;
- (void)_setAllowNestedNavigationControllers:(bool)arg1;
- (void)_setAllowsAutorotation:(bool)arg1;
- (void)_setAvoidanceInsetsNeedsUpdate;
- (void)_setChildControllerToIgnoreWhileLookingForTransitionCoordinator:(id)arg1;
- (void)_setContentMargin:(double)arg1;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)_setContentUnavailableConfiguration:(id)arg1;
- (void)_setCustomChildViewControllerSelectorsNames:(id)arg1;
- (void)_setEmbeddedDelegate:(id)arg1;
- (void)_setEmbeddedView:(id)arg1;
- (void)_setEmbeddedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setEmbeddingView:(id)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)_setExistingTabBarItem:(id)arg1;
- (void)_setExpectedWindow:(id)arg1;
- (void)_setExtensionContextUUID:(id)arg1;
- (void)_setFormSheetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setFreezeLayoutForOrientationChangeOnDismissal:(bool)arg1;
- (void)_setHostApplicationBundleIdentifier:(id)arg1;
- (void)_setHostAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)_setHostProcessIdentifier:(int)arg1;
- (void)_setIgnoreAppSupportedOrientations:(bool)arg1;
- (void)_setIgnoresWrapperViewForContentOverlayInsets:(bool)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_setInCustomTransition:(bool)arg1;
- (void)_setInternalContentScrollView:(id)arg1;
- (void)_setKeyCommands:(id)arg1;
- (void)_setLastNotifiedTraitCollection:(id)arg1;
- (void)_setLeftContentMargin:(double)arg1;
- (void)_setMayForwardPresentationsToPresentedViewController:(bool)arg1;
- (void)_setModalPresentationStyle:(long long)arg1;
- (void)_setModalSourceViewController:(id)arg1;
- (void)_setNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setNavigationControllerContentOffsetAdjustment:(double)arg1;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_setNeedsScreenWhitePointAdaptivityStyleUpdate;
- (void)_setNeedsStatusBarAppearanceUpdateWithAnimationParameters:(id)arg1;
- (void)_setNeedsUpdateContentUnavailableConfiguration;
- (void)_setNeedsUpdateOfMultitaskingDragExclusionRects;
- (void)_setNeedsUpdateOfSupportedInterfaceOrientations;
- (void)_setNeedsUserInterfaceAppearanceUpdate;
- (void)_setObservableScrollView:(id)arg1 forEdges:(unsigned long long)arg2;
- (void)_setOriginalPresentationController:(id)arg1;
- (void)_setOverrideHorizontalSizeClass:(long long)arg1;
- (void)_setOverrideTransitioningDelegate:(id)arg1;
- (void)_setOverrideUseCustomPresentation:(bool)arg1;
- (void)_setOverrideUserInterfaceRenderingMode:(long long)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)_setPresentationController:(id)arg1;
- (void)_setPresentationSizeClassPair:(struct { long long x1; long long x2; })arg1;
- (void)_setPresentedStatusBarViewController:(id)arg1;
- (void)_setPresentedStatusBarViewController:(id)arg1 shouldJoinAnimationsInProgress:(bool)arg2;
- (void)_setPresentedUserInterfaceStyleViewController:(id)arg1;
- (void)_setPresentingFocusedItem:(id)arg1;
- (void)_setPreviousFittingSizeInfo:(id)arg1;
- (void)_setRemoteViewControllerProxy:(id)arg1;
- (void)_setRequiresIgnoredContentScrollViewSizeWhileAppearingInNavigationStack:(bool)arg1;
- (void)_setRightContentMargin:(double)arg1;
- (void)_setSearchDisplayControllerUnretained:(id)arg1;
- (void)_setSecurityModeForViewsLayer;
- (void)_setSegueResponsibleForModalPresentation:(id)arg1;
- (void)_setShouldFreezeUnderlapsStatusBar:(bool)arg1;
- (void)_setShouldLoadInputAccessoryViewOnAppearance:(bool)arg1;
- (void)_setSourceViewControllerIfPresentedViaPopoverSegue:(id)arg1;
- (void)_setStoryboard:(id)arg1;
- (void)_setSuppressesBottomBar:(bool)arg1;
- (void)_setTemporaryPresentationController:(id)arg1;
- (void)_setTraitStorageList:(id)arg1;
- (void)_setTransitioningOutWithoutDisappearing:(bool)arg1;
- (void)_setUseTelephonyUI:(bool)arg1;
- (void)_setUsesSharedView:(bool)arg1;
- (void)_setViewHostsLayoutEngine:(bool)arg1;
- (id)_shim_contentScrollView;
- (bool)_shouldAbortAdaptationFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (bool)_shouldAutoPinInputViewsForModalFormSheet;
- (bool)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (bool)_shouldForceLayoutForHostedAnimation;
- (bool)_shouldForwardSystemLayoutFittingSizeChanges;
- (bool)_shouldFreezeUnderlapsStatusBar;
- (bool)_shouldIgnoreChildFocusRegions;
- (bool)_shouldLoadInputAccessoryViewsOnAppearance;
- (bool)_shouldLoadViewDuringRestoration:(id)arg1;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (bool)_shouldUseOnePartRotation;
- (void)_showAccessibilityHUDItem:(id)arg1;
- (void)_showViewController:(id)arg1 withAction:(SEL)arg2 sender:(id)arg3;
- (id)_sourceViewControllerIfPresentedViaPopoverSegue;
- (id)_splitViewControllerEnforcingClass:(bool)arg1;
- (void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg1;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (void)_stateRestorationDidFinish:(bool)arg1;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)_stopTransitionsImmediately;
- (void)_supportedInterfaceOrientationsDidChange;
- (bool)_suppressesBottomBar;
- (id)_systemDefaultFocusGroupIdentifier;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)_tabBarControllerEnforcingClass:(bool)arg1;
- (id)_temporaryPresentationController;
- (id)_timelinesForDateInterval:(id)arg1;
- (void)_timelinesForDateInterval:(id)arg1 completion:(id /* block */)arg2;
- (void)_toggleEditing:(id)arg1;
- (double)_topBarHeight;
- (id)_topBarInsetGuideConstraint;
- (void)_traitCollectionDidChange:(id)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_traitOverridesDidChange:(id)arg1;
- (id)_traitOverridesForChildViewController:(id)arg1;
- (id)_traitTrace;
- (id)_traitTrace:(id)arg1;
- (id)_transitionCoordinator;
- (void)_transitionToNavigationViewController:(id)arg1 withWrapper:(id /* block */)arg2;
- (void)_transitionToViewController:(id)arg1 whilePerforming:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)_transitioningOutWithoutDisappearing;
- (bool)_transitionsChildViewControllers;
- (void)_traverseViewControllerHierarchyFromLevel:(long long)arg1 withBlock:(id /* block */)arg2;
- (bool)_tvTabBarShouldAutohide;
- (bool)_tvTabBarShouldOverlap;
- (id)_uiCollectionView;
- (void)_unembedContentView;
- (void)_unembedContentViewSettingDelegate:(id)arg1;
- (void)_unsafeParentWillTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateChildContentMargins;
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (void)_updateContentOverlayInsetsFromParentForNavigationTransitionWithFinalRectInParent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateContentOverlayInsetsFromParentIfNecessary;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (void)_updateControlledViewsToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateInteractivePopGestureEnabledState;
- (void)_updateInterfaceOrientationAnimated:(bool)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(bool)arg2;
- (void)_updateTraitsIfNecessary;
- (void)_updateWithFrameSpecifier:(id)arg1;
- (void)_updateWithFrameSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)_useCustomDimmingView;
- (bool)_useSheetRotation;
- (bool)_usesSharedView;
- (id)_vanillaInit;
- (long long)_verticalSizeClass;
- (id)_viewControllerForObservableScrollView;
- (id)_viewControllerForRotation;
- (id)_viewControllerForSearchPalette;
- (id)_viewControllerForSupportedInterfaceOrientations;
- (id)_viewControllerForSupportedInterfaceOrientationsWithDismissCheck:(bool)arg1;
- (bool)_viewControllerIgnoresClippedGlyphPathFrame;
- (void)_viewControllerPresentationDidInitiate;
- (bool)_viewControllerUnderlapsStatusBar;
- (bool)_viewControllerWasSelected;
- (id)_viewControllersForRotationCallbacks;
- (id)_viewControllersWhoseOrientationsMustCoincide;
- (void)_viewDidPerformLayout;
- (id)_viewForContentInPopover;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewFrameInWindowForContentOverlayInsetsCalculation;
- (bool)_viewHostsLayoutEngine;
- (bool)_viewHostsLayoutEngineAllowsTAMIC_NO;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_viewSafeAreaInsetsFromScene;
- (void)_viewSubtreeDidGainScrollView:(id)arg1 enclosingViewController:(id)arg2;
- (void)_viewSubtreeDidGainScrollView:(id)arg1 enclosingViewController:(id)arg2 tvSearchController:(id)arg3;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (id)_visibleView;
- (id)_visualStyleOfContainingAlertController;
- (bool)_wantsContentClippedToSafeAreaInSidebarContext;
- (void)_willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(bool)arg3 skipSelf:(bool)arg4;
- (void)_willAppearInRemoteViewController;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBeginCounterRotationForPresentation;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)_willEnterAlwaysOn;
- (void)_willExitAlwaysOn;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(bool)arg3 skipSelf:(bool)arg4;
- (id)_window;
- (void)_window:(id)arg1 viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg2 withTransitionCoordinator:(id)arg3;
- (void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (bool)_wrapsNavigationController:(id*)arg1;
- (void)accessibilityLargeTextDidChange;
- (id)actionSheetPresentationController;
- (id)activePresentationController;
- (void)addChildViewController:(id)arg1;
- (void)addKeyCommand:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalSafeAreaInsets;
- (id /* block */)afterAppearanceBlock;
- (id)allowedChildViewControllersForUnwindingFromSource:(id)arg1;
- (bool)appearanceTransitionsAreDisabled;
- (void)applicationDidResume;
- (void)applicationFinishedRestoringState;
- (void)applicationWantsViewsToDisappear;
- (void)applicationWillSuspend;
- (void)attentionClassDumpUser:(id)arg1 yesItsUsAgain:(id)arg2 althoughSwizzlingAndOverridingPrivateMethodsIsFun:(id)arg3 itWasntMuchFunWhenYourAppStoppedWorking:(id)arg4 pleaseRefrainFromDoingSoInTheFutureOkayThanksBye:(id)arg5;
- (bool)automaticallyAdjustsScrollViewInsets;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (bool)autoresizesArchivedViewToFullSize;
- (void)awakeFromNib;
- (void)beginAppearanceTransition:(bool)arg1 animated:(bool)arg2;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)bottomLayoutGuide;
- (bool)canHandleSnapbackIdentifier:(id)arg1 animated:(bool)arg2;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canPerformUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 sender:(id)arg3;
- (bool)canPerformUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)cancelBeginAppearanceTransition;
- (id)childModalViewController;
- (id)childViewControllerContainingSegueSource:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForPointerLock;
- (id)childViewControllerForPreferredContainerBackgroundStyle;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForUserInterfaceStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllers;
- (unsigned long long)childViewControllersCount;
- (void)collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2;
- (bool)containmentSupport;
- (id)contentScrollView;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopoverView;
- (id)contentUnavailableConfiguration;
- (id)contentUnavailableConfigurationState;
- (id)currentAction;
- (double)customNavigationInteractiveTransitionDuration;
- (double)customNavigationInteractiveTransitionPercentComplete;
- (id)customTransitioningView;
- (void)dealloc;
- (id)defaultPNGName;
- (bool)definesPresentationContext;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)disablesAutomaticKeyboardDismissal;
- (void)dismissModalViewControllerAnimated:(bool)arg1;
- (void)dismissModalViewControllerWithTransition:(int)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id /* block */)arg2;
- (void)doc_viewDidLoad;
- (id)dropShadowView;
- (double)durationForTransition:(int)arg1;
- (unsigned long long)edgesForExtendedLayout;
- (id)editButtonItem;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endAppearanceTransition;
- (bool)extendedLayoutIncludesOpaqueBars;
- (id)extensionContext;
- (id)focusGroupIdentifier;
- (id)focusItemContainer;
- (void)forceUnloadView;
- (struct CGSize { double x1; double x2; })formSheetSize;
- (void)getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1 forWindow:(id)arg2;
- (bool)hidesBottomBarWhenPushed;
- (bool)ignoresParentMargins;
- (bool)inExplicitAppearanceTransition;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)interactionActivityTrackingBaseName;
- (long long)interfaceOrientation;
- (id)invalidate;
- (bool)isBeingDismissed;
- (bool)isBeingPresented;
- (bool)isEditing;
- (bool)isFinishingModalTransition;
- (bool)isInAnimatedVCTransition;
- (bool)isInWillRotateCallback;
- (bool)isModalInPopover;
- (bool)isModalInPresentation;
- (bool)isMovingFromParentViewController;
- (bool)isMovingToParentViewController;
- (bool)isPerformingModalTransition;
- (bool)isSettingAppearState;
- (bool)isSheet;
- (bool)isViewLoaded;
- (id)keyCommands;
- (id)leadingPreviewAction;
- (void)loadView;
- (void)loadViewIfNeeded;
- (void)loadViewIfRequired;
- (bool)modalInPopover;
- (bool)modalPresentationCapturesStatusBarAppearance;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (id)modalViewController;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)moreListTableCell;
- (id)mutableChildViewControllers;
- (id)navigationController;
- (id)navigationInsetAdjustment;
- (id)navigationItem;
- (bool)needsDidMoveCleanup;
- (id)nextResponder;
- (id)nibBundle;
- (id)nibName;
- (id)overrideTraitCollection;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)parentFocusEnvironment;
- (id)parentModalViewController;
- (id)parentViewController;
- (void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (bool)performsActionsWhilePresentingModally;
- (id)popoverPresentationController;
- (long long)preferredContainerBackgroundStyle;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedItem;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredUserInterfaceStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersPointerLocked;
- (bool)prefersStatusBarHidden;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)presentModalViewController:(id)arg1 animated:(bool)arg2;
- (void)presentModalViewController:(id)arg1 withTransition:(int)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(id /* block */)arg3;
- (id)presentationController;
- (id)presentedViewController;
- (id)presentingViewController;
- (id)previewActionItems;
- (id)previewActions;
- (id)previewMenuItems;
- (bool)providesPresentationContextTransitionStyle;
- (void)purgeMemoryForReason:(int)arg1;
- (id)registerForPreviewingWithDelegate:(id)arg1 sourceView:(id)arg2;
- (id)registerForTraitChanges:(id)arg1 withAction:(SEL)arg2;
- (id)registerForTraitChanges:(id)arg1 withHandler:(id /* block */)arg2;
- (id)registerForTraitChanges:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (void)registerPreviewSourceView:(id)arg1 previewingDelegate:(id)arg2;
- (void)removeChildViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1 notifyDidMove:(bool)arg2;
- (void)removeFromParentViewController;
- (void)removeKeyCommand:(id)arg1;
- (Class)restorationClass;
- (void)restoreUserActivityState:(id)arg1;
- (bool)restoresFocusAfterTransition;
- (id)rotatingContentViewForWindow:(id)arg1;
- (id)rotatingFooterView;
- (id)rotatingFooterViewForWindow:(id)arg1;
- (id)rotatingHeaderView;
- (id)rotatingHeaderViewForWindow:(id)arg1;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (id)safeAreaLayoutGuide;
- (id)savedHeaderSuperview;
- (bool)searchBarHidNavBar;
- (id)searchDisplayController;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (bool)sendClientToHostGestureChangeAction:(id)arg1;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)setAdditionalSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAfterAppearanceBlock:(id /* block */)arg1;
- (void)setAppearanceTransitionsAreDisabled:(bool)arg1;
- (void)setAutomaticallyAdjustsScrollViewInsets:(bool)arg1;
- (void)setAutoresizesArchivedViewToFullSize:(bool)arg1;
- (void)setChildModalViewController:(id)arg1;
- (void)setContainmentSupport:(bool)arg1;
- (void)setContentScrollView:(id)arg1 forEdge:(unsigned long long)arg2;
- (void)setContentSizeForViewInPopover:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentUnavailableConfiguration:(id)arg1;
- (void)setCustomNavigationInteractiveTransitionDuration:(double)arg1;
- (void)setCustomNavigationInteractiveTransitionPercentComplete:(double)arg1;
- (void)setCustomTransitioningView:(id)arg1;
- (void)setDefinesPresentationContext:(bool)arg1;
- (void)setDropShadowView:(id)arg1;
- (void)setEdgesForExtendedLayout:(unsigned long long)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setExtendedLayoutIncludesOpaqueBars:(bool)arg1;
- (void)setFinishingModalTransition:(bool)arg1;
- (void)setFocusGroupIdentifier:(id)arg1;
- (void)setFormSheetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHidesBottomBarWhenPushed:(bool)arg1;
- (void)setIgnoresParentMargins:(bool)arg1;
- (void)setInAnimatedVCTransition:(bool)arg1;
- (void)setInWillRotateCallback:(bool)arg1;
- (void)setInteractionActivityTrackingBaseName:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setIsSheet:(bool)arg1;
- (void)setModalInPopover:(bool)arg1;
- (void)setModalInPresentation:(bool)arg1;
- (void)setModalPresentationCapturesStatusBarAppearance:(bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setModalTransitionStyle:(long long)arg1;
- (void)setMutableChildViewControllers:(id)arg1;
- (void)setNavigationInsetAdjustment:(id)arg1;
- (void)setNeedsDidMoveCleanup:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)setNeedsUpdateContentUnavailableConfiguration;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (void)setNeedsUpdateOfPrefersPointerLocked;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (void)setNeedsUpdateOfSupportedInterfaceOrientations;
- (void)setNeedsUserInterfaceAppearanceUpdate;
- (void)setNeedsWhitePointAdaptivityStyleUpdate;
- (void)setNibBundle:(id)arg1;
- (void)setNibName:(id)arg1;
- (void)setOverrideTraitCollection:(id)arg1;
- (void)setOverrideTraitCollection:(id)arg1 forChildViewController:(id)arg2;
- (void)setOverrideUserInterfaceStyle:(long long)arg1;
- (void)setParentModalViewController:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setPerformingModalTransition:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredFocusedItem:(id)arg1;
- (void)setPreferredFocusedView:(id)arg1;
- (void)setPreferredUserInterfaceStyle:(long long)arg1;
- (void)setProvidesPresentationContextTransitionStyle:(bool)arg1;
- (void)setRestorationClass:(Class)arg1;
- (void)setRestoresFocusAfterTransition:(bool)arg1;
- (void)setSearchBarHidNavBar:(bool)arg1;
- (void)setSearchDisplayController:(id)arg1;
- (void)setShouldForceNonAnimatedTransition:(bool)arg1;
- (void)setStoryboardIdentifier:(id)arg1;
- (void)setTabBarItem:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(bool)arg2;
- (void)setTransitioningDelegate:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setView:(id)arg1;
- (void)setViewRespectsSystemMinimumLayoutMargins:(bool)arg1;
- (void)setWantsFullScreenLayout:(bool)arg1;
- (void)set_contentUnavailableWrapperView:(id)arg1;
- (void)set_departingParentViewController:(id)arg1;
- (void)set_nextResponderIgnoresWindowIfRootVC:(bool)arg1;
- (id)sheetPresentationController;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (bool)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)splitViewController;
- (id)storyboard;
- (id)storyboardCommitSegueTemplates;
- (id)storyboardIdentifier;
- (id)storyboardPreviewSegueTemplates;
- (id)storyboardPreviewingRegistrants;
- (id)storyboardSegueTemplates;
- (unsigned long long)supportedInterfaceOrientations;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })systemMinimumLayoutMargins;
- (id)tabBarController;
- (id)tabBarItem;
- (id)targetViewControllerForAction:(SEL)arg1 sender:(id)arg2;
- (id)title;
- (id)toolbarItems;
- (id)topLayoutGuide;
- (id)trailingPreviewAction;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollectionForChildViewController:(id)arg1;
- (id)traitOverrides;
- (id)transitionCoordinator;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;
- (bool)transitionViewShouldUseViewControllerCallbacks;
- (id)transitioningDelegate;
- (void)unloadViewForced:(bool)arg1;
- (void)unloadViewIfReloadable;
- (void)unregisterForPreviewingWithContext:(id)arg1;
- (void)unregisterForTraitChanges:(id)arg1;
- (void)unregisterPreviewSourceView:(id)arg1;
- (void)unregisterPreviewing:(id)arg1;
- (void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2;
- (void)updateContentUnavailableConfigurationUsingState:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (void)updateTraitsIfNeeded;
- (void)updateUserActivityState:(id)arg1;
- (void)updateViewConstraints;
- (bool)useLayoutToLayoutNavigationTransitions;
- (id)view;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewDidUnload;
- (id)viewIfLoaded;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewLayoutMarginsDidChange;
- (bool)viewRespectsSystemMinimumLayoutMargins;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillUnload;
- (bool)wantsFullScreenLayout;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2 oldSize:(struct CGSize { double x1; double x2; })arg3;
- (void)window:(id)arg1 resizeFromOrientation:(long long)arg2;
- (void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;
- (void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willAnimateFromContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3 newSize:(struct CGSize { double x1; double x2; })arg4;
- (void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3 newSize:(struct CGSize { double x1; double x2; })arg4;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (bool)avkit_isEffectivelyFullScreen;
- (void)avkit_setNeedsUpdatePreferencesIfNeeded;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

- (id /* block */)_as_applicationBackgroundBlock;
- (id)_as_presentedViewControllerStackForPasswordManagerUpToClasses:(id)arg1;
- (void)_as_restorePresentedViewControllerStackForPasswordManager:(id)arg1;
- (void)_as_setApplicationBackgroundBlock:(id /* block */)arg1;
- (id)_as_viewControllerToPresentFrom;
- (id)as_navigationItem;
- (void)setAs_navigationItem:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (bool)_ab_isInPopoverRecursive:(bool)arg1;
- (id)_cardViewControllerTransitioning;
- (bool)ab_isDirectlyInPopover;
- (bool)ab_isInPopover;
- (bool)ab_isInSheet;
- (bool)ab_shouldShowNavBarButtons;
- (bool)ab_shouldUseTransparentBackgroundInPopovers;
- (void)cnui_addChildViewController:(id)arg1;
- (id)cnui_appropriatePresentationController;
- (void)set_cardViewControllerTransitioning:(id)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (id)eventDetailViewControllerWithEvent:(id)arg1 delegate:(id)arg2 context:(id)arg3;
+ (id)eventDetailViewControllerWithEvent:(id)arg1 delegate:(id)arg2 context:(id)arg3 allowInlinePreview:(bool)arg4 previewInline:(bool)arg5 minimalMode:(bool)arg6;

- (id)EKUI_oopContentBackgroundColor;
- (id)EKUI_viewHierarchy;
- (id)ekui_futureTraitCollection;
- (void*)ekui_futureTraitCollectionCategoryPropertyKey;
- (bool)isPresentedInsidePopover;
- (void)setEkui_futureTraitCollection:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)accessibilityIdentifier;
- (double)contentAlpha;
- (long long)contentVisibility;
- (void)infoCardThemeChanged;
- (id)mk_theme;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setContentVisibility:(long long)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void)dismissMoviePlayerViewControllerAnimated;
- (void)presentMoviePlayerViewControllerAnimated:(id)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_classesForUICustomization;
- (id)mf_dataForUICustomization;
- (id)mf_keyPathsMapForUICustomization;
- (void)mf_setDataForUICustomization:(id)arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (void)QL_disableChromelessBarsUI;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (bool)safari_checkForAbilityToOpenWebContentAndNotifyIfNecessary:(id)arg1;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (void)prepareInterstitialAds;

- (bool)requestInterstitialAdPresentation;

// Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit

- (long long)layoutDirection;
- (void)setLayoutDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/AppStoreKitInternal.framework/AppStoreKitInternal

- (id)frontmostViewController;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (id)ams_backgroundColor;
- (void)ams_didMoveToParentViewController:(id)arg1;
- (void)ams_dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)ams_dismissViewControllerAnimated:(bool)arg1 includePresented:(bool)arg2 completion:(id /* block */)arg3;
- (id)ams_frontmostController;
- (bool)ams_hasDescendentChildViewController:(id)arg1;
- (id)ams_navigationController;
- (unsigned long long)ams_navigationIndex;
- (id)ams_navigationItemViewController;
- (id)ams_parentContainer;
- (void)ams_removeFromParentViewController;
- (void)ams_setBackgroundColor:(id)arg1;
- (void)ams_setChildViewController:(id)arg1;
- (void)ams_transitionFromViewController:(id)arg1 toViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)ams_willMoveToParentViewController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

- (id)ak_topPresentedViewController;

// Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (void)bannerContentOutsetsDidInvalidateForPresentableViewController:(id)arg1;
- (id)bannerSizeTransitionAnimationSettings;
- (bool)bn_shouldAnimateViewTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isClippingEnabled;
- (struct CGSize { double x1; double x2; })preferredContentSizeWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

+ (id)bs_nextViewControllerForView:(id)arg1;

- (bool)bs_addChildViewController:(id)arg1;
- (bool)bs_addChildViewController:(id)arg1 animated:(bool)arg2 transitionBlock:(id /* block */)arg3;
- (bool)bs_addChildViewController:(id)arg1 withSuperview:(id)arg2;
- (bool)bs_addChildViewController:(id)arg1 withSuperview:(id)arg2 animated:(bool)arg3 transitionBlock:(id /* block */)arg4;
- (bool)bs_beginAppearanceTransition:(bool)arg1 animated:(bool)arg2;
- (bool)bs_beginAppearanceTransitionForChildViewController:(id)arg1 toVisible:(bool)arg2 animated:(bool)arg3;
- (bool)bs_endAppearanceTransition;
- (bool)bs_endAppearanceTransition:(bool)arg1;
- (bool)bs_endAppearanceTransitionForChildViewController:(id)arg1;
- (bool)bs_endAppearanceTransitionForChildViewController:(id)arg1 toVisible:(bool)arg2;
- (bool)bs_isAppearingOrAppeared;
- (bool)bs_isDisappearingOrDisappeared;
- (id)bs_presentationContextDefiningViewController;
- (id)bs_presentedViewControllerIncludingAncestors;
- (bool)bs_removeChildViewController:(id)arg1;
- (bool)bs_removeChildViewController:(id)arg1 animated:(bool)arg2 transitionBlock:(id /* block */)arg3;
- (id)bs_topPresentedViewController;
- (void)bs_traitCollectionDidChange:(id)arg1 forManagedTraitEnvironment:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI

+ (long long)bkui_reverseLeftRight:(long long)arg1;

- (long long)bkui_deviceOrientationForIterfaceOrientation:(long long)arg1;
- (long long)bkui_reverseLeftRight:(long long)arg1;
- (void)bkui_rotateView:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 containerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 animatedDuration:(double)arg5 alongSide:(id /* block */)arg6 completion:(id /* block */)arg7;
- (long long)bkui_uiforDeviceOrientation:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

+ (id)jfxTopmostPresentedController;

- (void)animateCounterRotationView:(id)arg1 fadeOut:(bool)arg2 toWindowOrientation:(long long)arg3 fromWindowOrientation:(long long)arg4 forTransitionToSize:(struct CGSize { double x1; double x2; })arg5 withTransitionCoordinator:(id)arg6 postTransitionBlock:(id /* block */)arg7 postRemoveFromSuperviewBlock:(id /* block */)arg8;
- (id)counterRotationViewForSnapshot:(id)arg1 atCenterPoint:(struct CGPoint { double x1; double x2; })arg2 toWindowOrientation:(long long)arg3 fromWindowOrientation:(long long)arg4;
- (void)displaySnapshot:(id)arg1 atCenterPoint:(struct CGPoint { double x1; double x2; })arg2 atIndex:(long long)arg3 forTransitionToSize:(struct CGSize { double x1; double x2; })arg4 fadeOut:(bool)arg5 withTransitionCoordinator:(id)arg6 preTransitionBlock:(id /* block */)arg7 postTransitionBlock:(id /* block */)arg8;
- (void)jfxAddChildViewController:(id)arg1;
- (void)jfxAddChildViewController:(id)arg1 constrainRelativeToSafeAreas:(bool)arg2;
- (void)jfxAddChildViewController:(id)arg1 containerView:(id)arg2;
- (void)jfxAddChildViewController:(id)arg1 containerView:(id)arg2 constrainToContainer:(bool)arg3 relativeToSafeArea:(bool)arg4;
- (id)jfxAddChildViewControllerFromStoryboard:(id)arg1 containerView:(id)arg2 constrainToContainer:(bool)arg3 relativeToSafeArea:(bool)arg4;
- (struct CGPoint { double x1; double x2; })jfxCenterAdjustedForOrientationForPortraitFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 relativeToParentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withOrientation:(long long)arg3;
- (double)jfxDisplayScale;
- (void)jfxRemoveFromParentViewController;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (unsigned long long)cam_swizzled_supportedInterfaceOrientations;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (void)_cps_viewControllerWasPopped;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (bool)_crk_isDescendantOfViewController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_topViewController;

// Image: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices

- (id)_deviceInformation;
- (id)_deviceInformationView;
- (void)_layoutDeviceInformationView;
- (void)barcodeViewTapped:(id)arg1;
- (id)generateBarcode:(id)arg1 showAsQRCode:(bool)arg2;
- (void)infoButtonTapped:(id)arg1;
- (void)setupInfoButton;

// Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI

- (id)_ccui_childViewControllersForAppearancePropagation;
- (void)ccui_safelyBeginAppearanceTransition:(bool)arg1 animated:(bool)arg2;
- (void)ccui_safelyBeginAppearanceTransitionForChildViewControllers:(bool)arg1 animated:(bool)arg2;
- (void)ccui_safelyEndAppearanceTransition;
- (void)ccui_safelyEndAppearanceTransitionForChildViewControllers;
- (bool)ccui_shouldPropagateAppearanceCalls;

// Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI

- (bool)isDisappearingDueToPop;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (void)dc_enableUIViewAnimations:(bool)arg1 forBlock:(id /* block */)arg2;

- (long long)dc_effectiveInterfaceOrientation;
- (void)dc_getEffectiveInterfaceOrientation:(long long*)arg1 andEffectiveInterfaceIdiom:(long long*)arg2;
- (bool)dc_isRTL;
- (bool)dc_isViewVisible;
- (double)dc_safeAreaDistanceFromBottom;
- (double)dc_safeAreaDistanceFromTop;
- (id)dc_safeAreaLayoutGuide;
- (void)dc_showViewController:(id)arg1 animated:(bool)arg2 sender:(id)arg3;

// Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

+ (bool)_prefersLargeTitlesForLocation:(id)arg1 whenHasFinderStyleBars:(bool)arg2;

- (void)_doc_ipi_updateContentOverlayInsetsForSelfAndChildren;
- (id)doc_largeNavigationTitleOptionsForLocation:(id)arg1 configuration:(id)arg2 hasFinderStyleBars:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

+ (void)load;

- (id)_appearance;
- (void)_notifyAppearanceChange:(id)arg1;
- (void)doc_addChildViewController:(id)arg1 addSubview:(id /* block */)arg2;
- (void)doc_addChildWithEqualAutoresizingFrame:(id)arg1;
- (void)doc_dismissViewController;
- (void)doc_removeFromParentWithRemoveSubviewBlock:(id /* block */)arg1;
- (id)effectiveAppearance;
- (void)effectiveAppearanceDidChange:(id)arg1;
- (void)setAppearance:(id)arg1;
- (void)swift_doc_removeFromParentWithRemoveSubviewBlock:(id /* block */)arg1;
- (void)viewDidLoad;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

- (long long)doc_deprecated_interfaceOrientation;
- (bool)doc_hasAppeared;
- (bool)doc_hasAppearedOrIsAppearing;
- (bool)doc_hasDisappeared;
- (bool)doc_hasDisappearedOrIsDisappearing;
- (bool)doc_isAppearing;
- (bool)doc_isDisappearing;

// Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI

- (void)addConstraintsToFillSuperview;
- (id)slidingPaneViewController;

// Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI

- (void)fmf_afterDismissAnimation:(id)arg1;
- (void)fmf_afterPresentAnimation:(id)arg1;
- (id)fmf_dimmingViewForViewController:(id)arg1;
- (void)fmf_dismissModalViewController:(id)arg1;
- (void)fmf_presentModalViewController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

- (id)composeFeedbackToolbarItem;
- (void)createNewFeedback:(id)arg1;
- (void)didTapSubtitleAction:(id)arg1;
- (void)embed:(id)arg1 inView:(id)arg2;
- (id)emptyViewWithSpinner;
- (void)hideSpinner;
- (id)leftToolbarItem;
- (unsigned long long)newFeedbackButtonState;
- (long long)objc_preferredAlertStyle;
- (long long)preferredAlertStyle;
- (void)removeFromSuperview;
- (void)resumeSpinnerWithStatus:(id)arg1 userInteractionEnabled:(bool)arg2;
- (void)showEmptyViewWithSpinner;
- (void)showSpinnerWithStatus:(id)arg1 userInteractionEnabled:(bool)arg2;
- (void)showSpinnerWithStatus:(id)arg1 userInteractionEnabled:(bool)arg2 animated:(bool)arg3;
- (void)showToolbarWithSpinner:(bool)arg1 withStatusString:(id)arg2 subtitleButtonString:(id)arg3 userInteractionEnabled:(bool)arg4 animated:(bool)arg5;
- (void)showToolbarWithSpinner:(bool)arg1 withStatusString:(id)arg2 userInteractionEnabled:(bool)arg3 animated:(bool)arg4;
- (void)showToolbarWithStatus:(id)arg1 animated:(bool)arg2;
- (void)showToolbarWithStatus:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3;
- (void)updateNewFeedbackButtonState;

// Image: /System/Library/PrivateFrameworks/FocusUI.framework/FocusUI

- (void)fcui_layoutViewIfNeededAndAppearingOrAppearedWithAnimation:(long long)arg1;
- (void)fcui_layoutViewIfNeededAndAppearingOrAppearedWithSelectionAnimation;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (void)_gkAddMenuButtonTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (long long)_gkDesiredUserInterfaceIdiom;
- (void)_gkDidTransitionModalPresentationForTraitCollection:(id)arg1;
- (void)_gkDismissViewController:(id)arg1 animated:(bool)arg2;
- (id)_gkExtensionViewController;
- (bool)_gkExtensionWantsCustomRightBarButtonItemInViewService;
- (void)_gkModifyTopConstraintToLayoutGuideForSubview:(id)arg1;
- (id)_gkOriginatingViewController;
- (id)_gkOriginatingViewControllerAutoDetermined;
- (void)_gkPopViewControllerAnimated:(bool)arg1;
- (void)_gkPresentChallengeVC:(id)arg1;
- (void)_gkPresentSendDialogForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3;
- (void)_gkPresentSendDialogForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 complete:(id /* block */)arg4;
- (void)_gkPresentViewController:(id)arg1 animated:(bool)arg2;
- (void)_gkPresentViewController:(id)arg1 asPopoverFromView:(id)arg2 animated:(bool)arg3;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;
- (void)_gkPushViewController:(id)arg1 animated:(bool)arg2;
- (void)_gkPushViewController:(id)arg1 replaceCurrent:(bool)arg2 animated:(bool)arg3;
- (void)_gkRemoveViewController:(id)arg1 animated:(bool)arg2;
- (id)_gkRepresentedObject;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(id /* block */)arg2;
- (void)_gkRestoreStatusBarStyle:(bool)arg1;
- (void)_gkSaveStatusBarStyle:(bool)arg1;
- (void)_gkSaveStatusBarStyleAnimated:(bool)arg1 setToStyle:(long long)arg2;
- (bool)_gkServiceWantsCustomRightBarButtonItemInViewService;
- (void)_gkSetOriginatingViewController:(id)arg1;
- (void)_gkSetSourcePresentingViewController:(id)arg1;
- (bool)_gkShouldPushViewControllerInsteadOfUsingPopoverOnCompactWidthPad;
- (bool)_gkShouldUsePadUI;
- (void)_gkShowViewController:(id)arg1;
- (id)_gkSourcePresentingViewController;
- (id)_gkViewControllersForRestoringPopover;
- (void)_gkWillTransitionModalPresentationForTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore

+ (id)_gkKeyWindowRootViewController;

- (id)_gkAlertControllerForBarButtonItem:(id)arg1;
- (void)_gkConfigureFocusGuidesForNavigationBar:(id)arg1;
- (void)_gkDismissActivityViewControllerAnimated:(bool)arg1;
- (void)_gkForceNextContentUpdate;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (id)_gkInGameUIUnavailableAlertWithRestrictionMode:(long long)arg1 dismissHandler:(id /* block */)arg2;
- (void)_gkPresentActivityViewController:(id)arg1 fromView:(id)arg2;
- (id)_gkPresentActivityViewControllerForActivityItems:(id)arg1 fromView:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_gkPresentAlertForError:(id)arg1 title:(id)arg2 defaultMessage:(id)arg3;
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 dismissHandler:(id /* block */)arg4;
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 dismissHandler:(id /* block */)arg4 presentationCompletionHandler:(id /* block */)arg5;
- (id)_gkPresentConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 block:(id /* block */)arg4 cancelAction:(id /* block */)arg5;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(id /* block */)arg1;
- (bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI

- (void)dismissContactViewController;
- (id)resolvedHealthStore;
- (id)resolvedHealthToolbox;
- (void)submitUserActivityForRestoration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)_hk_showAdaptively:(id)arg1 sender:(id)arg2 animated:(bool)arg3;
- (bool)_viewIsHidden:(id)arg1;
- (void)hk_presentModalCardViewController:(id)arg1 fullScreen:(bool)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (bool)hk_viewIsHidden;
- (id)hk_window;
- (void)showAdaptively:(id)arg1 sender:(id)arg2;
- (void)showAdaptively:(id)arg1 sender:(id)arg2 animated:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/HomePlatformSettingsUI.framework/HomePlatformSettingsUI

- (void)wrapWithSubViewController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_delegateForModalPresentation;
- (id)hu_dismissViewControllerAnimated:(bool)arg1;
- (id)hu_performDismissalRequest:(id)arg1;
- (id)hu_performPresentationRequest:(id)arg1;
- (id)hu_pocketedContainerViewController;
- (id)hu_presentPreloadableViewController:(id)arg1 animated:(bool)arg2;
- (id)hu_presentedItem;
- (id)hu_topmostPresentedItem;

// Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit

+ (id)jitappkit:(id)arg1;

- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setTkPage:(id)arg1;
- (id)tkPage;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

- (long long)juLayoutDirection;
- (void)setJuLayoutDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_identifier;
- (void)MPU_setIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI

+ (id)_MCUIUnwrapViewController:(id)arg1;

- (void)MCUIHideProgressInNavBarShowBackButton:(bool)arg1;
- (bool)MCUIIsShowingProgress;
- (bool)MCUIIsVisibleViewController;
- (void)MCUIPresentViewController:(id)arg1;
- (void)MCUIReturnToSender:(bool)arg1 returnToAccountSettings:(bool)arg2 viewControllerDismissalBlock:(id /* block */)arg3;
- (void)MCUIShowProgressInNavBar;
- (id)MCUITopViewController;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (void)_mapsui_resetViewLayoutMargins;
- (void)_mapsui_resetViewLayoutMarginsWithPreservesSuperview:(bool)arg1;
- (void)_mapsui_resetViewLayoutMarginsWithPreservesSuperview:(bool)arg1 insetsFromSafeArea:(bool)arg2;
- (void)_mapsui_resetViewLayoutMarginsWithPreservesSuperview:(bool)arg1 insetsFromSafeArea:(bool)arg2 respectsSystemMinimum:(bool)arg3;
- (id)_mapsui_viewLayoutMarginsDescription;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (void)_sf_animateAlongsideTransitionOrPerform:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sf_bottomUnsafeAreaFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sf_bottomUnsafeAreaFrameForToolbar;
- (bool)_sf_canEditFields;
- (bool)_sf_isMFMailComposeViewController;
- (bool)_sf_isPKAddPassesViewController;
- (bool)_sf_isPresentationControllerDismissalTransitionDidEndNotification:(id)arg1;
- (void)_sf_presentViewControllerOnTopOfPresentedViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_sf_viewControllerToPresentFrom;
- (void)safari_dismissPresentedAlert;
- (bool)safari_isEventuallyPresentedByViewControllerClass:(Class)arg1;
- (bool)safari_isPresentedByActivityViewController;
- (bool)safari_prefersHalfHeightSheetPresentationWithLoweredBar;
- (id)safari_sheetPresentationController;
- (void)safari_updateApplicationBackgroundStyle;
- (bool)safari_wantsDoneButtonInModalBookmarksPanel;
- (bool)safari_wantsTransparentApplicationBackground;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

- (id)_safari_tableViewScrollPositionKey;
- (id)safari_tableViewForScrollPositionSaving;
- (id)safari_tableViewScrollPositionSaveIdentifier;

// Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI

- (id)SUUIPinnedHeaderView;
- (id)SUUIStackedBar;
- (double)SUUIStackedBarSplit;
- (id)_SUUIView;
- (id)registerForPreviewingFromSourceView:(id)arg1 handler:(id /* block */)arg2;
- (id)scrollingSegmentedController;
- (id)scrollingTabBarController;
- (void)setNeedsNavigationBarAppearanceUpdate;
- (void)setNeedsNestedPagingScrollViewUpdate;
- (void)setNeedsScrollingSegmentContentScrollViewUpdate;
- (void)setSUUIStackedBarSplit:(double)arg1;
- (void)unregisterForPreviewing:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

+ (id)recursiveDescription;

- (id)_recursiveDescriptionWithInset:(id)arg1;
- (void)naui_addChildViewWithViewController:(id)arg1;
- (void)naui_addChildViewWithViewController:(id)arg1 toView:(id)arg2;
- (void)naui_applicationDidEnterBackground;
- (void)naui_applicationWillEnterForeground;
- (bool)naui_canAnimate;
- (bool)naui_hasAxisWithRegularSizeClassOrGreater;
- (bool)naui_isDescendantOfViewController:(id)arg1;
- (bool)naui_isHorizontalSizeClassRegularOrGreater;
- (bool)naui_isVerticalSizeClassRegularOrGreater;
- (void)naui_loadViewIfNecessary;
- (id)recursiveDescription;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

- (id)navigationControl;
- (void)nu_adjustInsetsForScrollView:(id)arg1;
- (void)nu_adjustInsetsForScrollView:(id)arg1 transparentNavigationBar:(bool)arg2 withEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)nu_adjustInsetsForScrollView:(id)arg1 withEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (void)ic_enableUIViewAnimations:(bool)arg1 forBlock:(id /* block */)arg2;

- (void)ic_dismissPresentedViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)ic_dismissViewControllerOfClass:(Class)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)ic_embedInNavigationControllerForModalPresentation;
- (bool)ic_hasFullScreenModalPresentationStyle;
- (bool)ic_isBeingRevealedFromPoppingViewController;
- (bool)ic_isRTL;
- (bool)ic_isViewVisible;
- (void)ic_performBlockAfterActiveTransition:(id /* block */)arg1;
- (void)ic_replacePresentedViewControllerWithViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)ic_rootNavigationController;
- (double)ic_safeAreaDistanceFromBottom;
- (double)ic_safeAreaDistanceFromTop;
- (id)ic_safeAreaLayoutGuide;
- (void)ic_showSingleButtonAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)ic_showSingleButtonAlertWithTitle:(id)arg1 message:(id)arg2 handler:(id /* block */)arg3;
- (void)ic_showViewController:(id)arg1 animated:(bool)arg2 sender:(id)arg3;
- (id)ic_topViewController;
- (id)ic_viewControllerManager;
- (id)ic_windowScene;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

- (bool)ob_isFormSheet;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)_pk_presentViewController:(id)arg1 animated:(bool)arg2 transition:(int)arg3 popToViewControllerAfterPresentation:(id)arg4 completion:(id /* block */)arg5;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)pk_paymentSetupPreflight:(id /* block */)arg1;
- (void)pk_paymentSetupSetHideSetupLaterButton:(bool)arg1;
- (void)pk_presentViewController:(id)arg1 animated:(bool)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(id /* block */)arg4;
- (void)pk_presentViewController:(id)arg1 transition:(int)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(id /* block */)arg4;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (id)pkui_frontMostViewController;
- (bool)pkui_userInterfaceIdiomSupportsLargeLayouts;
- (void)presentModalViewController:(id)arg1 withPaymentSetupContext:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary

- (bool)pl_isInPopover;
- (bool)pl_visitControllerHierarchyWithBlock:(id /* block */)arg1;
- (int)uiipc_filterForMediaTypes:(id)arg1;
- (id)uiipc_imagePickerController;
- (id)uiipc_imagePickerOptions;
- (bool)uiipc_useTelephonyUI;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)_px_prepareClassForBarAppearance;
+ (void)_px_prepareClassForExtendedTraitCollection;
+ (void)_px_prepareClassForOneUpPresentation;
+ (void)px_preloadExtendedTraitCollection;
+ (id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)arg1;
+ (id)px_viewControllerWithAsynchronousOutputProducer:(id /* block */)arg1;
+ (id)px_viewControllerWithContinuousOutputProducer:(id /* block */)arg1;
+ (id)px_viewControllerWithOutput:(id /* block */)arg1;
+ (id)px_viewControllerWithSettings:(id)arg1;

- (void)_navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_nextExistingParticipantOnRouteToDestination:(id)arg1;
- (id)_nextExistingViewControllerOnRouteToDestination:(id)arg1;
- (void)_px_dismiss:(id)arg1;
- (id)_px_footerToolbar;
- (double)_px_imageModulationMixFactorWithPresentedViewController:(id)arg1;
- (id)_px_offersTableView;
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_px_viewAppearanceDidChange;
- (bool)_px_windowMatchesImageModulationManager:(id)arg1;
- (long long)_pxswizzled_barAppearance_preferredStatusBarStyle;
- (long long)_pxswizzled_barAppearance_preferredStatusBarUpdateAnimation;
- (bool)_pxswizzled_barAppearance_prefersStatusBarHidden;
- (void)_pxswizzled_barAppearance_viewDidDisappear:(bool)arg1;
- (void)_pxswizzled_barAppearance_viewIsAppearing:(bool)arg1;
- (void)_pxswizzled_barAppearance_viewWillAppear:(bool)arg1;
- (void)_pxswizzled_imageModulation_viewDidDisappear:(bool)arg1;
- (void)_pxswizzled_imageModulation_viewWillAppear:(bool)arg1;
- (void)_pxswizzled_imageModulation_viewWillDisappear:(bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewDidAppear:(bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewDidDisappear:(bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewIsAppearing:(bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewWillAppear:(bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewWillDisappear:(bool)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_didMoveToParentViewController:(id)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_traitCollectionDidChange:(id)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewDidAppear:(bool)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewDidLoad;
- (void)_pxswizzled_viewControllerTraitCollection_viewIsAppearing:(bool)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewLayoutMarginsDidChange;
- (void)_pxswizzled_viewControllerTraitCollection_viewSafeAreaInsetsDidChange;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillAppear:(bool)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillLayoutSubviews;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)debugURLsForDiagnostics;
- (id)firstAncestorWithWhere:(id /* block */)arg1;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (id)ppt_containedViewController;
- (void)provideViewControllersForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (double)px_HDRFocus;
- (void)px_addOrReplaceChildViewController:(id)arg1 activateConstraints:(bool)arg2;
- (bool)px_allowsTabSwitching;
- (id)px_barAppearance;
- (bool)px_canPresentViewControllerAnimated:(bool)arg1;
- (id)px_childViewControllersForModalInPresentation;
- (void)px_containedViewControllerModalStateChange;
- (bool)px_containsViewControllerModalInPresentation;
- (bool)px_determinesPreferredStatusBarHidden;
- (bool)px_determinesPreferredStatusBarStyle;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)px_didTransitionBars;
- (bool)px_dismissViewControllerIfAllowedAnimated:(bool)arg1 forced:(bool)arg2;
- (double)px_effectiveHDRFocus;
- (double)px_effectiveImageModulationIntensity;
- (void)px_enableBarAppearance;
- (void)px_enableExtendedTraitCollection;
- (void)px_enableImageModulation;
- (void)px_enableOneUpPresentation;
- (void)px_enableOneUpPresentationFromViewController:(id)arg1;
- (void)px_enablePrefersViewIsAppearingForAppearanceUpdates;
- (void)px_enumerateDescendantViewControllersWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)px_extendedTraitCollection;
- (id)px_forwardingNavigationParticipantForDestination:(id)arg1;
- (id)px_gridPresentation;
- (double)px_imageModulationIntensity;
- (id)px_imageModulationManager;
- (void)px_insertFooterToolbarWithItems:(id)arg1;
- (bool)px_isDelayingPresentation;
- (bool)px_isDescendantOfOrPresentedByViewController:(id)arg1;
- (bool)px_isDescendantOfViewController:(id)arg1;
- (bool)px_isImageModulationEnabled;
- (bool)px_isModalInPresentation;
- (bool)px_isVisible;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })px_layoutMargins;
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)px_navigationDestination;
- (id)px_nextViewControllerInNavigationController;
- (id)px_oneUpPresentation;
- (id)px_oneUpPresentationProxy;
- (long long)px_oneUpPresentationStyle;
- (void)px_presentOverTopmostPresentedViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)px_presentViewControllerInNavigationController:(id)arg1 animated:(bool)arg2 dimissButtonLocation:(long long)arg3 completion:(id /* block */)arg4;
- (id)px_previewActionMenus;
- (id)px_previousViewControllerInNavigationController;
- (struct CGSize { double x1; double x2; })px_referenceSize;
- (void)px_removeFooterToolbar;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })px_safeAreaInsets;
- (void)px_setImageModulationEnabled:(bool)arg1;
- (void)px_setModalInPresentation:(bool)arg1;
- (void)px_setNeedsHDRFocusUpdate;
- (void)px_setNeedsImageModulationIntensityUpdate;
- (void)px_setOneUpPresentationProxy:(id)arg1;
- (void)px_setOneUpPresentationStyle:(long long)arg1;
- (void)px_setPreviewActionMenus:(id)arg1;
- (void)px_setSubtitle:(id)arg1;
- (id)px_splitViewController;
- (id)px_subtitle;
- (id)px_topmostPresentedViewController;
- (void)px_willTransitionBars;
- (struct CGSize { double x1; double x2; })px_windowReferenceSize;
- (unsigned long long)routingOptionsForDestination:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)pu_currentViewControllerStack;

- (void)_pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings { long long x1; double x2; })arg1 isStatusBarHidden:(bool)arg2;
- (void)_pu_setNavigationBarTintColor:(id)arg1 withAnimationSettings:(struct PUBarAnimationSettings { long long x1; double x2; })arg2;
- (void)_pu_setNavigationBarVisible:(bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings { long long x1; double x2; })arg2;
- (void)_pu_setPreferredStatusBarUpdateAnimation:(long long)arg1;
- (void)_pu_setTabBarVisible:(bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings { long long x1; double x2; })arg2;
- (void)_pu_setToolbarVisible:(bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings { long long x1; double x2; })arg2;
- (void)_pu_updateStatusBarVisibilityWithAnimationSettings:(struct PUBarAnimationSettings { long long x1; double x2; })arg1;
- (void)ppt_performBlockAfterNextNavigationAnimation:(id /* block */)arg1;
- (id)pu_currentInteractiveModalTransition;
- (id)pu_currentInteractiveNavigationTransition;
- (id)pu_debugCurrentAsset;
- (id)pu_debugCurrentPrivacyController;
- (id)pu_debugCurrentViewModel;
- (id)pu_debugCurrentlySelectedAssets;
- (bool)pu_debugIsTransient;
- (void)pu_debugSetTransient:(bool)arg1;
- (void)pu_dismissViewControllerAnimated:(bool)arg1 interactive:(bool)arg2 completion:(id /* block */)arg3;
- (bool)pu_handleSecondTabTap;
- (bool)pu_isPresenting;
- (id)pu_modalTransition;
- (id)pu_navigationBarTintColor;
- (id)pu_navigationController;
- (id)pu_navigationTransition;
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings { long long x1; double x2; })arg1;
- (long long)pu_preferredBarStyle;
- (long long)pu_preferredStatusBarUpdateAnimation;
- (void)pu_presentViewController:(id)arg1 transition:(id)arg2 animated:(bool)arg3 interactive:(bool)arg4 completion:(id /* block */)arg5;
- (void)pu_removeNavigationTransition;
- (void)pu_restoreNavigationTransition;
- (bool)pu_scrollToInitialPositionAnimated:(bool)arg1;
- (void)pu_setModalTransition:(id)arg1;
- (void)pu_setNavigationTransition:(id)arg1;
- (void)pu_setupInitialBarsVisibilityOnViewWillAppearAnimated:(bool)arg1;
- (bool)pu_shouldActAsTabRootViewController;
- (bool)pu_shouldOptOutFromChromelessBars;
- (id)pu_toolbarViewModel;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (double)px_effectiveImageModulationIntensityWithProposedValue:(double)arg1;
- (id)px_sharePresentation;

// Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit

- (id)expandedPlatterPresentationController;
- (id)pl_containingClickPresentationInteractionPresentingViewController;
- (id)pl_presentationControllerIfPresented;
- (id)pl_presentingPresentationController;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

+ (void)_rewriteOnce;
+ (id)mt_rootViewController;
+ (void)swizzleMethodsForMetrics;

- (long long)IMDeviceOrientation;
- (id)_recursiveDescriptionWithLevel:(long long)arg1 result:(id)arg2;
- (bool)isADescendantOfParentViewController:(id)arg1;
- (bool)isHorizontallyCompact;
- (bool)isHorizontallyRegular;
- (bool)isHorizontallySpecified;
- (bool)isSupportedInterfaceOrientation:(long long)arg1;
- (bool)isUIKitClass;
- (bool)isVerticallyCompact;
- (bool)isVerticallyRegular;
- (bool)isVerticallySpecified;
- (long long)layoutDirection;
- (id)metricDataSource;
- (id)metricsAdditionalData;
- (id)metricsContentIdentifier;
- (bool)metricsEnabled;
- (id)metricsName;
- (bool)mt_isVisible;
- (id)mt_topNavigationController;
- (id)mt_topViewController;
- (id)mt_topViewControllerExcludingPopovers;
- (long long)preferredInterfaceOrientationGivenOrientation:(long long)arg1;
- (void)recordViewDidAppearEvent;
- (id)recursiveDescription;
- (id)recursiveDescription;
- (void)setLayoutDirection:(long long)arg1;
- (void)setMetricDataSource:(id)arg1;
- (void)setMetricsAdditionalData:(id)arg1;
- (void)setMetricsContentIdentifier:(id)arg1;
- (void)setMetricsEnabled:(bool)arg1;
- (void)setMetricsName:(id)arg1;
- (void)setViewWillAppearTime:(double)arg1;
- (void)simulateMemoryWarning;
- (void)useDefaultRestorationIdentifier;
- (double)viewWillAppearTime;
- (void)visitChildenViewControllers:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (void)dismissPresentedViewControllersAnimated:(bool)arg1 dismissHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)pbf_displayContext;
- (long long)pbf_layoutOrientation;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

- (void)popRecursivelyToRootController;

// Image: /System/Library/PrivateFrameworks/PreviewsInjection.framework/PreviewsInjection

- (void)setViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit

- (id)presentProxCardFlowWithDelegate:(id)arg1 initialViewController:(id)arg2;
- (id)presentProxCardFlowWithDelegate:(id)arg1 initialViewController:(id)arg2 configuration:(id)arg3;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (id)ttr_unavailableSearchResultsText;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

+ (id)textEntryController;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (unsigned long long)viewingLocation;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (bool)siriui_isVisible;
- (bool)siriui_shouldHideStatusBar;
- (bool)siriui_shouldRotateToLandscape;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (void)addChildViewControllerInstantly:(id)arg1;
- (void)addChildViewControllerInstantly:(id)arg1 toView:(id)arg2;
- (id)ancestorViewControllerOfClass:(Class)arg1;
- (void)removeFromParentViewControllerInstantly;
- (void)switchViewController:(id)arg1 toViewController:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)sb_firstDescendantOfViewControllers:(id)arg1 passingTest:(id /* block */)arg2;

- (id)_fbsDisplayConfiguration;
- (id)_fbsDisplayIdentity;
- (id)_sbDisplayConfiguration;
- (id)_sbWindowScene;
- (void)_setNeedsUpdateOfSupportedInterfaceOrientations;
- (bool)sb_beginAppearanceTransitionIfNecessary:(bool)arg1 animated:(bool)arg2;
- (id)sb_childOrPresentedViewControllerStatusBarSettings;
- (bool)sb_endAppearanceTransitionIfNecessary;
- (id)sb_firstDescendantOfClass:(Class)arg1;
- (id)sb_firstDescendantOfClassNamed:(id)arg1;
- (id)sb_firstDescendantPassingTest:(id /* block */)arg1;
- (void)setNeedsUpdateOfSupportedInterfaceOrientations;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (void)_sb_recursiveUpdateContentOverlayInsetsFromParentIfNecessary;
- (bool)sbh_isCustomIconImageViewController;
- (bool)sbh_isMultiplexingViewController;
- (bool)sbh_isWidgetHostViewController;
- (bool)sbh_isWidgetStackViewController;
- (id)sbh_underlyingAvocadoHostViewControllers;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (id)systemApertureElementContext;

// Image: /System/Library/PrivateFrameworks/StocksUI.framework/StocksUI

- (bool)su_isAppeared;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (id)SKUIPinnedHeaderView;
- (id)SKUIStackedBar;
- (double)SKUIStackedBarSplit;
- (id)_SKUIView;
- (id)registerForPreviewingFromSourceView:(id)arg1 handler:(id /* block */)arg2;
- (id)scrollingSegmentedController;
- (id)scrollingTabBarController;
- (void)setNeedsNavigationBarAppearanceUpdate;
- (void)setNeedsNestedPagingScrollViewUpdate;
- (void)setNeedsScrollingSegmentContentScrollViewUpdate;
- (void)setSKUIStackedBarSplit:(double)arg1;
- (void)unregisterForPreviewing:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (void)_cancelImpressionsUpdate;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;
- (id)tvIdentifier;
- (id)tv_impressionableElementsForDocument:(id)arg1;
- (void)tv_setIdentifier:(id)arg1;
- (void)tv_setShowcaseConfig:(struct TVShowcaseConfig { long long x1; long long x2; double x3; })arg1;
- (void)tv_updateViewLayout;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

+ (void)ts_performWithoutDeferringTransitions:(id /* block */)arg1;

- (id)tabBarSplitViewFocusable;
- (id)tabBarSplitViewFousable;
- (bool)ts_isVideoPlayerPresentedFullScreen;
- (id)ts_parentVC;
- (bool)ts_setAppearanceTransitionsAreDisabled:(bool)arg1;
- (id)ts_transitionContainerViewController;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

+ (void)tmlLoadCategory;

- (id)_tmlEnsureContext;
- (void)_tmlUnloadContext;
- (void)setChildViewControllerForStatusBarHidden:(id)arg1;
- (void)setChildViewControllerForStatusBarStyle:(id)arg1;
- (void)setPreferredStatusBarStyle:(long long)arg1;
- (void)setPreferredStatusBarUpdateAnimation:(long long)arg1;
- (void)setPrefersStatusBarHidden:(bool)arg1;
- (void)setPreviewActionItems:(id)arg1;
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setTmlObjects:(id)arg1;
- (bool)tmlAccessibilityPerformEscape;
- (bool)tmlAccessibilityPerformMagicTap;
- (id)tmlChildViewControllerForStatusBarHidden;
- (id)tmlChildViewControllerForStatusBarStyle;
- (id)tmlContext;
- (void)tmlDecodeRestorableStateWithCoder:(id)arg1;
- (void)tmlEncodeRestorableStateWithCoder:(id)arg1;
- (bool)tmlLoadView;
- (id)tmlLoadView:(id)arg1;
- (bool)tmlLoadViewControllerFromPath:(id)arg1;
- (bool)tmlLoadViewControllerWithSource:(id)arg1;
- (id)tmlLoadViewFromPath:(id)arg1;
- (void)tmlLoadViewOverride;
- (bool)tmlLoadViewWithSource:(id)arg1;
- (id)tmlObjects;
- (long long)tmlPreferredInterfaceOrientationForPresentation;
- (long long)tmlPreferredStatusBarStyle;
- (long long)tmlPreferredStatusBarUpdateAnimation;
- (bool)tmlPrefersStatusBarHidden;
- (id)tmlPreviewActionItems;
- (bool)tmlShouldAutorotate;
- (unsigned long long)tmlSupportedInterfaceOrientations;
- (void)tmlTraitCollectionDidChange:(id)arg1;
- (void)tmlUpdateViewConstraints;
- (void)tmlViewDidAppear:(bool)arg1;
- (void)tmlViewDidDisappear:(bool)arg1;
- (void)tmlViewDidLayoutSubviews;
- (void)tmlViewDidLoad;
- (id)tmlViewPath;
- (void)tmlViewWillAppear:(bool)arg1;
- (void)tmlViewWillDisappear:(bool)arg1;
- (void)tmlViewWillLayoutSubviews;
- (void)tmlViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)tmlWillMoveToParentViewController:(id)arg1;
- (void)tmlWillTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (long long)ncTransitionAnimationState;
- (id)nc_presentationContextDefiningViewController;
- (id)nc_presentationControllerIfPresented;

// Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI

- (id)vs_addFocusGuideFromView:(id)arg1 toViews:(id)arg2 withDirection:(unsigned long long)arg3;
- (void)vs_adjustContentScrollViewInsets;
- (void)vs_beginIgnoringInteraction;
- (void)vs_checkUserInterfaceStyleForViewModel:(id)arg1;
- (void)vs_endIgnoringInteraction;
- (long long)vs_ignoreInteractionCount;
- (void)vs_setIgnoreInteractionCount:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (Class)_vui_TVLoadingViewControllerClass;

- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;
- (bool)vui_ppt_isLoading;
- (void)vui_presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3 animated:(bool)arg4;
- (void)presentViewController:(id)arg1 modalPresentationStyle:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setVuiAutomaticallyAdjustsScrollViewInsets:(bool)arg1;
- (void)setVuiModalInPresentation:(bool)arg1;
- (void)setVuiModalPresentationCapturesStatusBarAppearance:(bool)arg1;
- (void)setVuiModalPresentationStyle:(long long)arg1;
- (void)setVuiPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVuiTabBarItem:(id)arg1;
- (void)setVuiTabBarObservedScrollView:(id)arg1;
- (void)setVuiTitle:(id)arg1;
- (void)setVuiTransitioningDelegate:(id)arg1;
- (void)setVuiView:(id)arg1;
- (void)setVuiViewControllerIdentifier:(id)arg1;
- (void)setVui_requiresLegacyPresentation:(bool)arg1;
- (bool)vuiAutomaticallyAdjustsScrollViewInsets;
- (id)vuiChildViewControllers;
- (bool)vuiIsBeingDismissed;
- (bool)vuiIsBeingPresented;
- (bool)vuiIsModalInPresentation;
- (bool)vuiIsMovingFromParentViewController;
- (bool)vuiIsMovingToParentViewController;
- (bool)vuiIsNavigationRoot;
- (bool)vuiIsRTL;
- (bool)vuiIsViewLoaded;
- (bool)vuiModalPresentationCapturesStatusBarAppearance;
- (long long)vuiModalPresentationStyle;
- (id)vuiNavigationController;
- (id)vuiNavigationItem;
- (unsigned long long)vuiOverrideUserInterfaceStyle;
- (bool)vuiPPTIsLoading;
- (id)vuiParentViewController;
- (struct CGSize { double x1; double x2; })vuiPreferredContentSize;
- (id)vuiPresentationController;
- (id)vuiPresentedViewController;
- (id)vuiPresentingViewController;
- (bool)vuiShouldAutomaticallyForwardAppearanceMethods;
- (id)vuiTabBarController;
- (id)vuiTabBarItem;
- (id)vuiTabBarObservedScrollView;
- (id)vuiTitle;
- (id)vuiTraitCollection;
- (id)vuiTransitioningDelegate;
- (unsigned long long)vuiUserInterfaceStyle;
- (id)vuiView;
- (id)vuiViewControllerIdentifier;
- (void)vui_addChildViewController:(id)arg1;
- (bool)vui_addSubview:(id)arg1 oldView:(id)arg2;
- (void)vui_beginAppearanceTransition:(bool)arg1 animated:(bool)arg2;
- (id)vui_contentScrollViewForEdge:(unsigned long long)arg1;
- (void)vui_didMoveToParentViewController:(id)arg1;
- (void)vui_dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)vui_endAppearanceTransition;
- (id)vui_initWithCoder:(id)arg1;
- (id)vui_initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)vui_loadView;
- (void)vui_presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)vui_removeFromParentViewController;
- (bool)vui_requiresLegacyPresentation;
- (void)vui_setContentScrollView:(id)arg1 forEdge:(unsigned long long)arg2;
- (void)vui_setOverrideUserInterfaceStyle:(unsigned long long)arg1;
- (void)vui_showViewController:(id)arg1 sender:(id)arg2;
- (void)vui_updateViewConstraints;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(bool)arg1;
- (void)vui_viewWillDisappear:(bool)arg1;
- (void)vui_viewWillLayoutSubviews;
- (void)vui_willMoveToParentViewController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (id)vk_viewIfLoaded;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

- (bool)wg_beginAppearanceTransitionIfNecessary:(bool)arg1 animated:(bool)arg2;
- (bool)wg_endAppearanceTransitionIfNecessary;
- (bool)wg_isAppearanceTransitioning;
- (bool)wg_isAppearingOrAppeared;
- (bool)wg_isDisappearingOrDisappeared;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)wf_drawerController;
- (id)wf_drawerItem;
- (void)wf_setDrawerController:(id)arg1;
- (void)wf_setDrawerItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (void)wf_applyContentLayoutMarginsToNavigationController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })wf_contentLayoutMargins;
- (bool)wf_showSearchBarAboveScrollView:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id)makeLiftUIViewControllerForController:(id)arg1 withURL:(id)arg2 dataSource:(id)arg3 presenter:(id)arg4 data:(id)arg5;

- (void)addChildAndPinToEdgesWithChildViewController:(id)arg1;
- (id)topMostViewController;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (void)_iTunesStoreUI_dequeueTransitionSafeInvocations;
+ (void)_iTunesStoreUI_enqueueTransitionSafeInvocation:(id)arg1;
+ (void)_iTunesStoreUI_timeoutTransitionSafety;
+ (void)beginTransitionSafety;
+ (void)endTransitionSafety;
+ (id)transitionSafePerformer:(id)arg1;
+ (id)transitionSafetyDelegate;

- (long long)ITunesStoreUIBarStyle;
- (id)_sectionForViewController:(id)arg1;
- (bool)canDisplaySectionGroup:(id)arg1;
- (id)copyArchivableContext;
- (id)copyArchivableJetsamContext;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptViewController;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissOverlayBackgroundViewController;
- (id)displayedURL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentBounds;
- (void)handleStoreFailureWithError:(id)arg1;
- (bool)hasDisplayableContent;
- (void)iTunesStoreUI_dismissAction:(id)arg1;
- (id)iTunesStoreUI_searchFieldController;
- (bool)isDescendantOfViewController:(id)arg1;
- (bool)isInMoreList;
- (bool)isRootViewController;
- (bool)isSkLoaded;
- (bool)isSkLoading;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)keyboardDidShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (bool)loadMoreWithURL:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumViewSize;
- (struct CGSize { double x1; double x2; })minimumViewSize;
- (id)navigationItemForScriptInterface;
- (id)overlayBackgroundViewController;
- (id)overlayViewController;
- (void)parentViewControllerHierarchyDidChange;
- (bool)presentOverlayBackgroundViewController:(id)arg1;
- (bool)presentOverlayViewController:(id)arg1 withTransition:(id)arg2;
- (bool)presentViewController:(id)arg1 inOverlayWithConfiguration:(id)arg2;
- (bool)pushStorePage:(id)arg1 withTarget:(long long)arg2 animated:(bool)arg3;
- (bool)reloadForSectionsWithGroup:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (bool)reloadWithURLRequestProperties:(id)arg1;
- (void)resetRestoredContext;
- (void)restoreArchivableContext:(id)arg1;
- (id)scriptWindowContext;
- (id)section;
- (void)setBadgeValue:(id)arg1 animated:(bool)arg2 blink:(bool)arg3;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)setShowsBackgroundShadow:(bool)arg1;
- (void)setStorePageProtocol:(id)arg1;
- (bool)shouldInvalidateForMemoryPurge;
- (bool)showsBackgroundShadow;
- (void)storePageCleanupBeforeTearDown;
- (id)storePageProtocol;
- (void)storePageProtocolDidChange;
- (id)storeSplitViewController;
- (id)su_closestNavigationController;
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)transitionSafePresentModalViewController:(id)arg1 animated:(bool)arg2;
- (id)viewControllerFactory;
- (bool)viewIsReady;

@end
