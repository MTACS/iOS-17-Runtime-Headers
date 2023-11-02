
@interface PREditorRootViewController : UIViewController <BSInvalidatable, BSUIScrollViewDelegate, PRDateObserving> {
    PREditingTitledButton * _acceptButton;
    UIMenu * _actionsMenu;
    UIButton * _actionsMenuButton;
    NSLayoutConstraint * _actionsMenuButtonXConstraint;
    bool  _allUserInteractionDisabledExceptForCancelButton;
    UIView * _backgroundContainerView;
    NSLayoutConstraint * _bottomControlsYConstraint;
    PREditingBottomLegibilityView * _bottomLegibilityView;
    PREditingCancelButton * _cancelButton;
    PRComplicationSceneHostViewController * _complicationHostViewController;
    PRComplicationEmptyStateView * _complicationRowEmptyStateView;
    PREditingReticleView * _complicationRowReticleView;
    bool  _complicationSidebarConfigured;
    PRComplicationEmptyStateView * _complicationSidebarEmptyStateView;
    PREditingReticleView * _complicationSidebarReticleView;
    UIView * _complicationsContainerView;
    bool  _complicationsRowConfigured;
    UIView * _contentOverlayContainerView;
    UIView * _contentOverlayView;
    bool  _controlsHidden;
    <PRDateProviding> * _dateProvider;
    bool  _depthEffectDisabled;
    bool  _disconnected;
    PREditor * _editor;
    PREditorElementLayoutController * _editorElementLayoutController;
    BSUIVibrancyEffectView * _emptyVibrancyView;
    UIView * _floatingContainerView;
    long long  _focusedComplicationElement;
    UIView * _foregroundContainerView;
    bool  _fourDigitTime;
    bool  _ignoresScrolling;
    bool  _initialLayoutFinished;
    PREditingReticleView * _inlineComplicationReticleView;
    NSArray * _leadingMenuElementViews;
    NSArray * _leadingMenuElements;
    NSLayoutConstraint * _leadingTopButtonXConstraint;
    NSLayoutConstraint * _leadingTopButtonYConstraint;
    bool  _lookInteractionHintCompleted;
    PREditingStandaloneLabelView * _lookInteractionHintLabel;
    NSTimer * _lookInteractionHintTimer;
    PREditingStandaloneLabelView * _lookNameLabel;
    PREditorLookTransition * _lookTransition;
    NSArray * _looks;
    bool  _needsReticleVisibilityUpdate;
    UIPageControl * _pageControl;
    UIView * _presentationDismissalGestureView;
    bool  _presentingModalViewController;
    UIAction * _primaryAction;
    UIButton * _primaryActionButton;
    NSLayoutConstraint * _primaryActionButtonXConstraint;
    BSUIVibrancyEffectView * _reticleVibrancyView;
    UIScrollView * _scrollView;
    UIAction * _secondaryAction;
    UIButton * _secondaryActionButton;
    NSLayoutConstraint * _secondaryActionButtonXConstraint;
    BSUIVibrancyEffectView * _sidebarReticleVibrancyView;
    bool  _subtitleHidden;
    CSProminentDisplayViewController * _subtitleViewController;
    UIView * _timeContainerView;
    UIView * _titleGestureView;
    UILayoutGuide * _titlePopoverLayoutGuide;
    bool  _titleReticleActive;
    PREditingReticleView * _titleReticleView;
    PREditorTitleViewControllerCoordinator * _titleViewControllerCoordinator;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _topButtonsEdgeInsets;
    bool  _topButtonsHidden;
    UIView * _touchBlockingView;
    NSArray * _trailingMenuElementViews;
    NSArray * _trailingMenuElements;
    NSLayoutConstraint * _trailingTopButtonXConstraint;
    NSLayoutConstraint * _trailingTopButtonYConstraint;
    bool  _usesEditingLayout;
}

@property (nonatomic, retain) PREditingTitledButton *acceptButton;
@property (nonatomic, copy) UIMenu *actionsMenu;
@property (nonatomic, retain) UIButton *actionsMenuButton;
@property (nonatomic, retain) NSLayoutConstraint *actionsMenuButtonXConstraint;
@property (getter=isAllUserInteractionDisabledExceptForCancelButton, nonatomic) bool allUserInteractionDisabledExceptForCancelButton;
@property (nonatomic, retain) UIView *backgroundContainerView;
@property (nonatomic, retain) NSLayoutConstraint *bottomControlsYConstraint;
@property (nonatomic, retain) PREditingBottomLegibilityView *bottomLegibilityView;
@property (nonatomic, retain) PREditingCancelButton *cancelButton;
@property (nonatomic, retain) PRComplicationSceneHostViewController *complicationHostViewController;
@property (nonatomic, retain) PRComplicationEmptyStateView *complicationRowEmptyStateView;
@property (nonatomic, retain) PREditingReticleView *complicationRowReticleView;
@property (getter=isComplicationSidebarConfigured, nonatomic) bool complicationSidebarConfigured;
@property (nonatomic, retain) PRComplicationEmptyStateView *complicationSidebarEmptyStateView;
@property (nonatomic, retain) PREditingReticleView *complicationSidebarReticleView;
@property (nonatomic, retain) UIView *complicationsContainerView;
@property (getter=isComplicationsRowConfigured, nonatomic) bool complicationsRowConfigured;
@property (nonatomic, retain) UIView *contentOverlayContainerView;
@property (nonatomic, retain) UIView *contentOverlayView;
@property (getter=areControlsHidden, nonatomic) bool controlsHidden;
@property (nonatomic, retain) <PRDateProviding> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDepthEffectDisabled, nonatomic) bool depthEffectDisabled;
@property (readonly, copy) NSString *description;
@property (getter=isDisconnected, nonatomic) bool disconnected;
@property (nonatomic) PREditor *editor;
@property (nonatomic, retain) PREditorElementLayoutController *editorElementLayoutController;
@property (nonatomic, retain) BSUIVibrancyEffectView *emptyVibrancyView;
@property (nonatomic, retain) UIView *floatingContainerView;
@property (nonatomic) long long focusedComplicationElement;
@property (nonatomic, retain) UIView *foregroundContainerView;
@property (nonatomic) bool fourDigitTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresScrolling;
@property (nonatomic) bool initialLayoutFinished;
@property (nonatomic, retain) PREditingReticleView *inlineComplicationReticleView;
@property (nonatomic, retain) NSArray *leadingMenuElementViews;
@property (nonatomic, copy) NSArray *leadingMenuElements;
@property (nonatomic, retain) NSLayoutConstraint *leadingTopButtonXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *leadingTopButtonYConstraint;
@property (getter=isLookInteractionHintCompleted, nonatomic) bool lookInteractionHintCompleted;
@property (nonatomic, retain) PREditingStandaloneLabelView *lookInteractionHintLabel;
@property (nonatomic, retain) NSTimer *lookInteractionHintTimer;
@property (nonatomic, retain) PREditingStandaloneLabelView *lookNameLabel;
@property (nonatomic, retain) PREditorLookTransition *lookTransition;
@property (nonatomic, copy) NSArray *looks;
@property (nonatomic) bool needsReticleVisibilityUpdate;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (nonatomic, retain) UIView *presentationDismissalGestureView;
@property (getter=isPresentingModalViewController, nonatomic) bool presentingModalViewController;
@property (nonatomic, copy) UIAction *primaryAction;
@property (nonatomic, retain) UIButton *primaryActionButton;
@property (nonatomic, retain) NSLayoutConstraint *primaryActionButtonXConstraint;
@property (nonatomic, retain) BSUIVibrancyEffectView *reticleVibrancyView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, copy) UIAction *secondaryAction;
@property (nonatomic, retain) UIButton *secondaryActionButton;
@property (nonatomic, retain) NSLayoutConstraint *secondaryActionButtonXConstraint;
@property (nonatomic, retain) BSUIVibrancyEffectView *sidebarReticleVibrancyView;
@property (getter=isSubtitleHidden, nonatomic) bool subtitleHidden;
@property (nonatomic, retain) CSProminentDisplayViewController *subtitleViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *timeContainerView;
@property (nonatomic, retain) UIView *titleGestureView;
@property (nonatomic, retain) UILayoutGuide *titlePopoverLayoutGuide;
@property (getter=isTitleReticleActive, nonatomic) bool titleReticleActive;
@property (nonatomic, retain) PREditingReticleView *titleReticleView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } topButtonsEdgeInsets;
@property (getter=areTopButtonsHidden, nonatomic) bool topButtonsHidden;
@property (nonatomic, retain) UIView *touchBlockingView;
@property (nonatomic, retain) NSArray *trailingMenuElementViews;
@property (nonatomic, copy) NSArray *trailingMenuElements;
@property (nonatomic, retain) NSLayoutConstraint *trailingTopButtonXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trailingTopButtonYConstraint;
@property (nonatomic) bool usesEditingLayout;

- (void).cxx_destruct;
- (void)_setVibrancyConfiguration:(id)arg1;
- (void)_updateButtonLayout;
- (void)_updateComplicationSidebarEmptyViewVisibility;
- (void)_updateComplicationSidebarEmptyViewVisibilityAnimated:(bool)arg1;
- (void)_updateComplicationsRowEmptyViewVisibility;
- (void)_updateComplicationsRowEmptyViewVisibilityAnimated:(bool)arg1;
- (void)_updateComplicationsVibrancyFromCurrentLook;
- (void)_updateMenuElements;
- (void)_updateReticleViewFramesWithOffset:(double)arg1;
- (void)_updateScrollViewContentSize;
- (id)_viewsForMenuElements:(id)arg1;
- (id)acceptButton;
- (id)actionsMenu;
- (id)actionsMenuButton;
- (id)actionsMenuButtonXConstraint;
- (void)appendDescriptionToFormatter:(id)arg1;
- (bool)areControlsHidden;
- (bool)areTopButtonsHidden;
- (id)backgroundContainerView;
- (unsigned long long)backgroundTypeForLook:(id)arg1;
- (void)beginLookInteractionHinting;
- (id)beginTransitionToLook:(id)arg1 method:(long long)arg2;
- (id)bottomControlsYConstraint;
- (id)bottomLegibilityView;
- (id)cancelButton;
- (id)complicationHostViewController;
- (id)complicationRowEmptyStateView;
- (id)complicationRowReticleView;
- (id)complicationSidebarEmptyStateView;
- (id)complicationSidebarReticleView;
- (id)complicationsContainerView;
- (id)configuredProperties;
- (id)contentOverlayContainerView;
- (id)contentOverlayView;
- (id)currentLook;
- (void)currentLookDidChange;
- (id)dateProvider;
- (void)dateProvider:(id)arg1 didUpdateDate:(id)arg2;
- (id)defaultTitleStyleConfigurationForLook:(id)arg1;
- (void)depthEffectEnablementDidChange;
- (id)description;
- (void)didFinishTransitionToLook:(id)arg1;
- (void)didTransitionToLook:(id)arg1 method:(long long)arg2 progress:(double)arg3;
- (void)disconnect;
- (id)editor;
- (id)editorElementLayoutController;
- (id)effectiveTitleStyleConfigurationForLook:(id)arg1;
- (id)emptyVibrancyView;
- (void)endLookInteractionHinting;
- (void)enumerateTimeViewControllersUsingBlock:(id /* block */)arg1;
- (id)extensionBundleURL;
- (id)floatingContainerView;
- (long long)focusedComplicationElement;
- (void)forciblyFinishLookTransition;
- (id)foregroundContainerView;
- (bool)fourDigitTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPageAtLookIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPageAtViewIndex:(unsigned long long)arg1;
- (bool)ignoresScrolling;
- (id)imageForDepthEffectActionTopLevelAction:(bool)arg1;
- (bool)initialLayoutFinished;
- (id)inlineComplicationReticleView;
- (void)invalidate;
- (bool)isAllUserInteractionDisabledExceptForCancelButton;
- (bool)isComplicationSidebarConfigured;
- (bool)isComplicationsRowConfigured;
- (bool)isDepthEffectDisabled;
- (bool)isDisconnected;
- (bool)isLookInteractionHintCompleted;
- (bool)isPresentingModalViewController;
- (bool)isSubtitleHidden;
- (bool)isTitleReticleActive;
- (id)leadingMenuElementViews;
- (id)leadingMenuElements;
- (id)leadingTopButtonXConstraint;
- (id)leadingTopButtonYConstraint;
- (void)loadView;
- (id)lookAtScrollContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)lookAtScrollContentOffset:(struct CGPoint { double x1; double x2; })arg1 fractionOfDistanceThroughLook:(double*)arg2;
- (void)lookBackgroundTypesDidChange;
- (unsigned long long)lookIndexForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)lookIndexForViewIndex:(unsigned long long)arg1;
- (id)lookInteractionHintLabel;
- (id)lookInteractionHintTimer;
- (id)lookNameLabel;
- (void)lookPropertiesDidChange;
- (id)lookTransition;
- (id)looks;
- (void)looksDidChange;
- (void)looksWillChange;
- (id)makeComplicationHostingSceneWithSpecification:(id)arg1;
- (id)makeComplicationsHostingScene;
- (void)modalPresentationDismissGestureDidFire:(id)arg1;
- (bool)needsReticleVisibilityUpdate;
- (id)pageControl;
- (void)pageControlCurrentPageDidChange:(id)arg1;
- (id)presentationDismissalGestureView;
- (id)primaryAction;
- (id)primaryActionButton;
- (id)primaryActionButtonXConstraint;
- (void)reconnect;
- (void)requireGestureRecognizerToFailForLooksScroll:(id)arg1;
- (id)reticleVibrancyView;
- (struct CGPoint { double x1; double x2; })scrollContentOffsetForLook:(id)arg1;
- (struct CGPoint { double x1; double x2; })scrollContentOffsetForLookAtIndex:(unsigned long long)arg1;
- (void)scrollToLook:(id)arg1 animated:(bool)arg2;
- (void)scrollToLookAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (id)scrollView;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1 withContext:(struct { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)secondaryAction;
- (id)secondaryActionButton;
- (id)secondaryActionButtonXConstraint;
- (void)setAcceptButton:(id)arg1;
- (void)setActionsMenu:(id)arg1;
- (void)setActionsMenuButton:(id)arg1;
- (void)setActionsMenuButtonXConstraint:(id)arg1;
- (void)setAllUserInteractionDisabledExceptForCancelButton:(bool)arg1;
- (void)setBackgroundContainerView:(id)arg1;
- (void)setBottomControlsYConstraint:(id)arg1;
- (void)setBottomLegibilityView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setComplicationHostViewController:(id)arg1;
- (void)setComplicationRowEmptyStateView:(id)arg1;
- (void)setComplicationRowReticleView:(id)arg1;
- (void)setComplicationSidebarConfigured:(bool)arg1;
- (void)setComplicationSidebarEmptyStateView:(id)arg1;
- (void)setComplicationSidebarReticleView:(id)arg1;
- (void)setComplicationsContainerView:(id)arg1;
- (void)setComplicationsRowConfigured:(bool)arg1;
- (void)setContentOverlayContainerView:(id)arg1;
- (void)setContentOverlayView:(id)arg1;
- (void)setControlsHidden:(bool)arg1;
- (void)setDateProvider:(id)arg1;
- (void)setDepthEffectDisabled:(bool)arg1;
- (void)setDisconnected:(bool)arg1;
- (void)setEditor:(id)arg1;
- (void)setEditorElementLayoutController:(id)arg1;
- (void)setEmptyVibrancyView:(id)arg1;
- (void)setFloatingContainerView:(id)arg1;
- (void)setFocusedComplicationElement:(long long)arg1;
- (void)setForegroundContainerView:(id)arg1;
- (void)setFourDigitTime:(bool)arg1;
- (void)setIgnoresScrolling:(bool)arg1;
- (void)setInitialLayoutFinished:(bool)arg1;
- (void)setInlineComplicationReticleView:(id)arg1;
- (void)setLeadingMenuElementViews:(id)arg1;
- (void)setLeadingMenuElements:(id)arg1;
- (void)setLeadingTopButtonXConstraint:(id)arg1;
- (void)setLeadingTopButtonYConstraint:(id)arg1;
- (void)setLookInteractionHintCompleted:(bool)arg1;
- (void)setLookInteractionHintLabel:(id)arg1;
- (void)setLookInteractionHintTimer:(id)arg1;
- (void)setLookNameLabel:(id)arg1;
- (void)setLookTransition:(id)arg1;
- (void)setLooks:(id)arg1;
- (void)setLooks:(id)arg1 forUpdatingProperties:(bool)arg2;
- (void)setNeedsReticleVisibilityUpdate;
- (void)setNeedsReticleVisibilityUpdate:(bool)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPresentationDismissalGestureView:(id)arg1;
- (void)setPresentingModalViewController:(bool)arg1;
- (void)setPrimaryAction:(id)arg1;
- (void)setPrimaryActionButton:(id)arg1;
- (void)setPrimaryActionButtonXConstraint:(id)arg1;
- (void)setReticleVibrancyView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSecondaryAction:(id)arg1;
- (void)setSecondaryActionButton:(id)arg1;
- (void)setSecondaryActionButtonXConstraint:(id)arg1;
- (void)setSidebarReticleVibrancyView:(id)arg1;
- (void)setSubtitleHidden:(bool)arg1;
- (void)setSubtitleViewController:(id)arg1;
- (void)setTimeContainerView:(id)arg1;
- (void)setTitleGestureView:(id)arg1;
- (void)setTitlePopoverLayoutGuide:(id)arg1;
- (void)setTitleReticleActive:(bool)arg1;
- (void)setTitleReticleView:(id)arg1;
- (void)setTopButtonsEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTopButtonsHidden:(bool)arg1;
- (void)setTouchBlockingView:(id)arg1;
- (void)setTrailingMenuElementViews:(id)arg1;
- (void)setTrailingMenuElements:(id)arg1;
- (void)setTrailingTopButtonXConstraint:(id)arg1;
- (void)setTrailingTopButtonYConstraint:(id)arg1;
- (void)setUsesEditingLayout:(bool)arg1;
- (bool)shouldFixTitleBetweenTransitionFromTitleStyleConfiguration:(id)arg1 toTitleStyleConfiguration:(id)arg2 extensionBundleURL:(id)arg3;
- (id)sidebarReticleVibrancyView;
- (id)subtitleViewController;
- (id)timeContainerView;
- (id)timeViewControllerForLook:(id)arg1;
- (id)titleGestureView;
- (id)titlePopoverLayoutGuide;
- (id)titleReticleView;
- (void)titleViewTapped:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })topButtonsEdgeInsets;
- (id)touchBlockingView;
- (id)trailingMenuElementViews;
- (id)trailingMenuElements;
- (id)trailingTopButtonXConstraint;
- (id)trailingTopButtonYConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForChangedOverrideDate;
- (void)updateForChangedTitleString;
- (void)updatePageControlCurrentPage;
- (void)updateReticleViewFrames;
- (void)updateReticleVisibilityIfNeeded;
- (void)updateTimeControllersForLookMap;
- (void)updateTopButtonAlpha;
- (void)updateTopButtonsLayoutWithLeadingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trailingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)usesEditingLayout;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (id)viewForMenuElementIdentifier:(id)arg1;
- (unsigned long long)viewIndexForLookIndex:(unsigned long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end