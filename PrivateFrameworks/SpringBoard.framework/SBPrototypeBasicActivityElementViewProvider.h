
@interface SBPrototypeBasicActivityElementViewProvider : NSObject <SAActivityBehavior, SAElement, SAUIElementViewProviding, SAUILayoutSpecifying, SBSystemApertureContextProviding, SBSystemApertureSuppressible> {
    NSDateComponentsFormatter * _formatter;
    <SAUILayoutHosting> * _layoutHost;
    long long  _layoutMode;
    UIView * _leadingView;
    NSDate * _startTime;
    NSTimer * _timer;
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
@property (getter=isSuppressed, nonatomic) bool suppressed;
@property (nonatomic, readonly) UIView *trailingView;

- (void).cxx_destruct;
- (void)_activateApplication;
- (bool)_canShowWhileLocked;
- (void)_updateLabel;
- (bool)acceptsFullScreenTransitionFromSceneWithIdentifier:(id)arg1 ofBundleId:(id)arg2;
- (id)clientIdentifier;
- (id)element;
- (id)elementIdentifier;
- (bool)handleElementViewEvent:(long long)arg1;
- (bool)hasActivityBehavior;
- (id)init;
- (id)keyColor;
- (id)layoutHost;
- (long long)layoutMode;
- (id)leadingView;
- (long long)maximumSupportedLayoutMode;
- (id)minimalView;
- (long long)minimumSupportedLayoutMode;
- (long long)preferredLayoutMode;
- (void)setLayoutHost:(id)arg1;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;
- (bool)shouldSuppressElementWhilePresentingAppWithBundleId:(id)arg1;
- (id)trailingView;
- (id)viewProvider;

@end
