
@interface MRUActivityMirroringViewController : UIViewController <MRUMirroringControllerDelegate, SBUISystemApertureElement, SBUISystemApertureElementProviding> {
    long long  _activeLayoutMode;
    MRUMirroringController * _mirroringController;
    NSString * associatedScenePersistenceIdentifier;
}

@property (nonatomic) long long activeLayoutMode;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *associatedScenePersistenceIdentifier;
@property (nonatomic, readonly) bool attachedMinimalViewRequiresZeroPadding;
@property (nonatomic, readonly, copy) NSSet *backgroundActivitiesToSuppress;
@property (nonatomic) bool canRequestAlertingAssertion;
@property (nonatomic, readonly) long long contentRole;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIColor *keyColor;
@property (nonatomic, readonly) BSAction *launchAction;
@property (nonatomic, readonly, copy) NSURL *launchURL;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (nonatomic, readonly) long long maximumLayoutMode;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (nonatomic) unsigned long long minimalViewLayoutAxis;
@property (nonatomic, readonly) long long minimumLayoutMode;
@property (nonatomic, retain) MRUMirroringController *mirroringController;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredCustomAspectRatio;
@property (nonatomic, readonly) long long preferredCustomLayout;
@property (nonatomic, readonly) double preferredHeightForBottomSafeArea;
@property (nonatomic, readonly) long long preferredLayoutMode;
@property (nonatomic, readonly) unsigned long long presentationBehaviors;
@property (nonatomic, readonly) bool preventsAutomaticDismissal;
@property (nonatomic, readonly) bool preventsInteractiveDismissal;
@property (nonatomic, readonly) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SBUISystemApertureElement> *systemApertureElement;
@property (nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (nonatomic, retain) MRUActivityMirroringView *view;
@property (nonatomic, retain) MRUActivityMirroringView *viewIfLoaded;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)activeLayoutMode;
- (id)associatedScenePersistenceIdentifier;
- (id)backgroundActivitiesToSuppress;
- (long long)contentRole;
- (id)elementIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyColor;
- (id)leadingView;
- (void)loadView;
- (long long)maximumLayoutMode;
- (id)minimalView;
- (id)mirroringController;
- (void)mirroringController:(id)arg1 didChangeOutputDevice:(id)arg2;
- (double)preferredHeightForBottomSafeArea;
- (long long)preferredLayoutMode;
- (unsigned long long)presentationBehaviors;
- (void)setActiveLayoutMode:(long long)arg1;
- (void)setMirroringController:(id)arg1;
- (void)stopMirroring:(id)arg1;
- (id)systemApertureElementViewController;
- (id)trailingView;
- (void)updateState;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
