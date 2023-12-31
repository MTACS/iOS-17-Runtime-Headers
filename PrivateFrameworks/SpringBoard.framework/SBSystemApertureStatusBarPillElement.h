
@interface SBSystemApertureStatusBarPillElement : NSObject <SAActivityBehavior, SAElement, SAUIElementViewProviding, SAUILayoutSpecifying, SBSystemApertureBackgroundActivitiesRepresenting, SBSystemApertureContextProviding, SBSystemApertureSuppressible> {
    NSSet * _associatedApplications;
    id  _clientStorage;
    NSString * _elementIdentifier;
    <SAUILayoutHosting> * _layoutHost;
    long long  _layoutMode;
    UIView * _leadingView;
    NSString * _representedBackgroundActivityIdentifier;
    UIView * _trailingView;
}

@property (nonatomic, readonly) NSString *activeSymbolName;
@property (nonatomic, readonly) UIColor *activeTintColor;
@property (nonatomic) <SAActivityHosting> *activityHost;
@property (getter=isAffiliatedWithSessionMonitor, nonatomic, readonly) bool affiliatedWithSessionMonitor;
@property (nonatomic, copy) NSSet *associatedApplications;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, retain) id clientStorage;
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
@property (nonatomic, readonly, copy) NSSet *representedBackgroundActivityIdentifiers;
@property (getter=isRequestingMenuPresentation, nonatomic, readonly) bool requestingMenuPresentation;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;
@property (getter=isSuppressed, nonatomic) bool suppressed;
@property (nonatomic, readonly) UIView *trailingView;

+ (id)backgroundActivityIdentifiersThatIgnoreSystemChromeSuppression;

- (void).cxx_destruct;
- (id)_accessibilityLabel;
- (bool)_canShowWhileLocked;
- (id)_imageName;
- (bool)_isAssociatedWithApplicationWithBundleIdentifier:(id)arg1;
- (id)_packageName;
- (unsigned long long)_representedStatusBarStyleOverrides;
- (id)_representedVisualDescriptor;
- (struct CGSize { double x1; double x2; })_sizeForPillWithImageName;
- (id)_textLabel;
- (id)_viewWithImageName:(id)arg1 systemApertureSize:(struct CGSize { double x1; double x2; })arg2 tintColor:(id)arg3;
- (id)_viewWithPackageName:(id)arg1;
- (id)_viewWithSymbolName:(id)arg1 tintColor:(id)arg2;
- (id)_viewWithTextLabel:(id)arg1 tintColor:(id)arg2;
- (bool)acceptsFullScreenTransitionFromSceneWithIdentifier:(id)arg1 ofBundleId:(id)arg2;
- (id)activeSymbolName;
- (id)activeTintColor;
- (id)associatedApplications;
- (id)clientIdentifier;
- (id)clientStorage;
- (id)element;
- (id)elementIdentifier;
- (bool)handleElementViewEvent:(long long)arg1;
- (bool)hasActivityBehavior;
- (id)initWithBackgroundActivityIdentifier:(id)arg1;
- (id)keyColor;
- (id)layoutHost;
- (long long)layoutMode;
- (id)leadingView;
- (long long)maximumSupportedLayoutMode;
- (id)minimalView;
- (long long)minimumSupportedLayoutMode;
- (long long)preferredLayoutMode;
- (id)representedBackgroundActivityIdentifiers;
- (void)setAssociatedApplications:(id)arg1;
- (void)setClientStorage:(id)arg1;
- (void)setLayoutHost:(id)arg1;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;
- (bool)shouldIgnoreSystemChromeSuppression;
- (bool)shouldSuppressElementWhileOnCoversheet;
- (bool)shouldSuppressElementWhilePresentingAppWithBundleId:(id)arg1;
- (id)trailingView;
- (id)viewProvider;

@end
