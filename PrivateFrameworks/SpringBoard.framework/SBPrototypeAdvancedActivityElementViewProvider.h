
@interface SBPrototypeAdvancedActivityElementViewProvider : NSObject <SAActivityBehavior, SAElement, SAUIContentTransitioning, SAUIElementViewProviding, SAUILayoutSpecifying, SBSystemApertureContextProviding> {
    <SAElementHosting> * _elementHost;
    bool  _layoutCondensed;
    <SAUILayoutHosting> * _layoutHost;
    long long  _layoutMode;
    UIView * _leadingView;
    long long  _preferredLayoutMode;
    UIView * _trailingView;
}

@property (nonatomic) <SAActivityHosting> *activityHost;
@property (getter=isAffiliatedWithSessionMonitor, nonatomic, readonly) bool affiliatedWithSessionMonitor;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *detachedMinimalView;
@property (nonatomic, readonly) <SAElement> *element;
@property (nonatomic) <SAElementHosting> *elementHost;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (getter=isInteractiveDismissalEnabled, nonatomic, readonly) bool interactiveDismissalEnabled;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic) <SAUILayoutHosting> *layoutHost;
@property (nonatomic, readonly) long long layoutMode;
@property (nonatomic, readonly) UIView *leadingView;
@property (nonatomic, readonly) long long maximumSupportedLayoutMode;
@property (getter=isMinimalPresentationPossible, nonatomic, readonly) bool minimalPresentationPossible;
@property (nonatomic, readonly) UIView *minimalView;
@property (nonatomic, readonly) long long minimumSupportedLayoutMode;
@property (nonatomic, readonly) long long preferredLayoutMode;
@property (nonatomic, readonly) bool preventsSwipeToHide;
@property (getter=isRequestingMenuPresentation, nonatomic, readonly) bool requestingMenuPresentation;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *trailingView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_currentTrailingTitle;
- (void)_decrementLayoutMode;
- (void)_incrementLayoutMode;
- (id)_newTrailingLabel;
- (void)_requestSignificantTransition;
- (void)_updateLabel;
- (void)_updateLabel:(id)arg1 forLayoutMode:(long long)arg2;
- (id)clientIdentifier;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 inContainerView:(id)arg2 transitionCoordinator:(id)arg3;
- (id)element;
- (id)elementHost;
- (id)elementIdentifier;
- (bool)handleElementViewEvent:(long long)arg1;
- (bool)hasActivityBehavior;
- (id)init;
- (id)keyColor;
- (id)layoutHost;
- (void)layoutHostContainerViewWillLayoutSubviews:(id)arg1;
- (long long)layoutMode;
- (id)leadingView;
- (long long)maximumSupportedLayoutMode;
- (id)minimalView;
- (long long)minimumSupportedLayoutMode;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (long long)preferredLayoutMode;
- (void)setElementHost:(id)arg1;
- (void)setLayoutHost:(id)arg1;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFitsSize:(struct CGSize { double x1; double x2; })arg1 forProvidedView:(id)arg2 inLayoutMode:(long long)arg3;
- (id)trailingView;
- (id)viewProvider;

@end
