
@interface SBNoticePresentableElement : NSObject <SAAlertBehavior, SAUIContentTransitioning, SAUIElementViewProviding, SBPresentableElement, SBSystemApertureContextProviding> {
    <SAUILayoutHosting> * _layoutHost;
    long long  _layoutMode;
    UIView * _leadingView;
    NSHashTable * _observers;
    long long  _preferredLayoutMode;
    <BNPresentable> * _presentable;
    UIView * _primaryView;
    UIView * _secondaryView;
    UIView * _trailingView;
}

@property (getter=isAffiliatedWithSessionMonitor, nonatomic, readonly) bool affiliatedWithSessionMonitor;
@property (nonatomic) <SAAlertHosting> *alertHost;
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
@property (nonatomic, readonly) <BNPresentable> *presentable;
@property (nonatomic, readonly) bool preventsSwipeToHide;
@property (getter=isRequestingMenuPresentation, nonatomic, readonly) bool requestingMenuPresentation;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;
@property (getter=isSuppressed, nonatomic) bool suppressed;
@property (nonatomic, readonly) <BNPresentable><BNTemplateContentProviding> *templatePresentable;
@property (nonatomic, readonly) UIView *trailingView;

+ (id)_preferredFont:(bool)arg1 textStyle:(id)arg2 weight:(double)arg3 additionalTraits:(unsigned int)arg4;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (id)_primaryView;
- (id)_secondaryView;
- (id)_templateItemViewFromProvider:(id)arg1 isPrimary:(bool)arg2;
- (void)_updateVisualStlyingOfView:(id)arg1 fromProvider:(id)arg2;
- (void)addElementLayoutSpecifierObserver:(id)arg1;
- (id)clientIdentifier;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 inContainerView:(id)arg2 transitionCoordinator:(id)arg3;
- (id)description;
- (id)element;
- (id)elementDescription;
- (id)elementIdentifier;
- (bool)handleElementViewEvent:(long long)arg1;
- (bool)hasAlertBehavior;
- (id)initWithTemplatePresentable:(id)arg1;
- (id)keyColor;
- (id)layoutHost;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)arg1;
- (long long)layoutMode;
- (id)leadingView;
- (long long)maximumSupportedLayoutMode;
- (id)minimalView;
- (long long)minimumSupportedLayoutMode;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (long long)preferredLayoutMode;
- (id)presentable;
- (void)removeElementLayoutSpecifierObserver:(id)arg1;
- (void)setLayoutHost:(id)arg1;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;
- (bool)shouldSuppressElementWhileOnCoversheet;
- (id)templatePresentable;
- (id)trailingView;
- (id)viewProvider;

@end
