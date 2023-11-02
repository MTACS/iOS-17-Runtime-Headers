
@interface ChronoCore.SystemApertureElementViewController : UIViewController <BSInvalidatable, SBUISystemApertureElement, SBUISystemApertureElementProviding> {
    void _cancellables;
    void _logIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _logger;
    void _scene;
    void activeLayoutMode;
    void associatedAppBundleIdentifier;
    void associatedScenePersistenceIdentifier;
    void attachedMinimalViewRequiresZeroPadding;
    void contentRole;
    void elementIdentifier;
    void expandedUIHostingController;
    void leadingUIHostingController;
    void leadingView;
    void maximumLayoutMode;
    void minimalUIHostingController;
    void minimalView;
    void preferredLayoutMode;
    void presentationBehaviors;
    void trailingUIHostingController;
    void trailingView;
}

@property (nonatomic) long long activeLayoutMode;
@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, copy) NSString *associatedScenePersistenceIdentifier;
@property (nonatomic) bool attachedMinimalViewRequiresZeroPadding;
@property (nonatomic) long long contentRole;
@property (nonatomic, copy) NSString *elementIdentifier;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic, readonly) NSURL *launchURL;
@property (nonatomic, retain) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (nonatomic) long long maximumLayoutMode;
@property (nonatomic, retain) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (nonatomic) long long preferredLayoutMode;
@property (nonatomic) unsigned long long presentationBehaviors;
@property (nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (nonatomic, retain) UIView<SBUISystemApertureAccessoryView> *trailingView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_timelinesForDateInterval:(id)arg1;
- (void)_updateWithFrameSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (long long)activeLayoutMode;
- (id)associatedAppBundleIdentifier;
- (id)associatedScenePersistenceIdentifier;
- (bool)attachedMinimalViewRequiresZeroPadding;
- (long long)contentRole;
- (id)elementIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidate;
- (id)keyColor;
- (id)launchURL;
- (id)leadingView;
- (long long)maximumLayoutMode;
- (id)minimalView;
- (long long)preferredLayoutMode;
- (unsigned long long)presentationBehaviors;
- (void)setActiveLayoutMode:(long long)arg1;
- (void)setAssociatedAppBundleIdentifier:(id)arg1;
- (void)setAssociatedScenePersistenceIdentifier:(id)arg1;
- (void)setAttachedMinimalViewRequiresZeroPadding:(bool)arg1;
- (void)setContentRole:(long long)arg1;
- (void)setElementIdentifier:(id)arg1;
- (void)setLeadingView:(id)arg1;
- (void)setMaximumLayoutMode:(long long)arg1;
- (void)setMinimalView:(id)arg1;
- (void)setPreferredLayoutMode:(long long)arg1;
- (void)setPresentationBehaviors:(unsigned long long)arg1;
- (void)setTrailingView:(id)arg1;
- (id)systemApertureElementViewController;
- (id)trailingView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)arg1;

@end
