
@interface SBAppClipOverlayViewController : SBFTouchPassThroughViewController <BSInvalidatable, SBAppClipOverlayCoordinatorParticipant, SBAppClipOverlayViewDelegate> {
    NSString * _bundleIdentifier;
    SBAppClipOverlayCoordinator * _coordinator;
    bool  _displayedOverPlaceholder;
    bool  _needsUpdate;
    CPSClipOverlayViewController * _overlayViewController;
    long long  _sceneActivationState;
    NSString * _sceneIdentifier;
    NSString * _webClipIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) SBAppClipOverlayCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayedOverPlaceholder;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) CPSClipOverlayViewController *overlayViewController;
@property (nonatomic) long long sceneActivationState;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *webClipIdentifier;

- (void).cxx_destruct;
- (void)appClipOverlayCoordinator:(id)arg1 requestsSurrenderOfViewController:(id)arg2;
- (void)appClipPlaceholderViewDidInvalidate:(id)arg1;
- (id)bundleIdentifier;
- (id)coordinator;
- (id)description;
- (bool)displayedOverPlaceholder;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinator:(id)arg1 bundleIdentifier:(id)arg2 sceneIdentifier:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidate;
- (void)loadView;
- (bool)needsUpdate;
- (id)overlayViewController;
- (id)participantName;
- (long long)preferredStatusBarStyle;
- (long long)sceneActivationState;
- (id)sceneIdentifier;
- (void)setCoordinator:(id)arg1;
- (void)setDisplayedOverPlaceholder:(bool)arg1;
- (void)setDisplayedOverPlaceholder:(bool)arg1 animated:(bool)arg2;
- (void)setNeedsUpdate;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setOverlayViewController:(id)arg1;
- (void)setSceneActivationState:(long long)arg1;
- (void)setSceneActivationState:(long long)arg1 animated:(bool)arg2;
- (void)setWebClipIdentifier:(id)arg1;
- (id)view;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (id)webClipIdentifier;

@end
