
@interface SBPrototypeProminentPresentingActivityElementViewProvider : NSObject <SAAlertBehavior, SAElement, SAUIElementViewProviding, SAUILayoutSpecifying, SBSystemApertureSuppressible> {
    <SAUILayoutHosting> * _layoutHost;
    long long  _layoutMode;
    UIView * _leadingView;
    long long  _preferredLayoutMode;
    bool  _prominent;
    bool  _showsTrailing;
    UIView * _trailingView;
}

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
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic) <SAUILayoutHosting> *layoutHost;
@property (nonatomic, readonly) long long layoutMode;
@property (nonatomic, readonly) UIView *leadingView;
@property (nonatomic, readonly) long long maximumSupportedLayoutMode;
@property (getter=isMinimalPresentationPossible, nonatomic, readonly) bool minimalPresentationPossible;
@property (nonatomic, readonly) UIView *minimalView;
@property (nonatomic, readonly) long long minimumSupportedLayoutMode;
@property (nonatomic, readonly) long long preferredLayoutMode;
@property (getter=isProminent, nonatomic) bool prominent;
@property (getter=isRequestingMenuPresentation, nonatomic, readonly) bool requestingMenuPresentation;
@property (nonatomic) bool showsTrailing;
@property (readonly) Class superclass;
@property (getter=isSuppressed, nonatomic) bool suppressed;
@property (nonatomic, readonly) UIView *trailingView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)clientIdentifier;
- (id)element;
- (id)elementIdentifier;
- (bool)handleElementViewEvent:(long long)arg1;
- (bool)hasAlertBehavior;
- (id)init;
- (bool)isProminent;
- (id)layoutHost;
- (long long)layoutMode;
- (id)leadingView;
- (long long)maximumSupportedLayoutMode;
- (id)minimalView;
- (long long)minimumSupportedLayoutMode;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (long long)preferredLayoutMode;
- (void)setLayoutHost:(id)arg1;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;
- (void)setProminent:(bool)arg1;
- (void)setShowsTrailing:(bool)arg1;
- (bool)showsTrailing;
- (long long)systemApertureLayoutCustomizingOptions;
- (id)trailingView;
- (id)viewProvider;

@end
